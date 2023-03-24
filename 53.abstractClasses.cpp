#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};


class LRUCache : public Cache {
public:
    LRUCache(int);
    void set(int, int) override;
    int get(int) override;
};

LRUCache::LRUCache(int capacity) {
    cp = capacity;
    tail = nullptr;
    head = nullptr;
}

void LRUCache::set(int key, int value) {
    if (mp.find(key) == mp.end()) { // key does not exist in the map
        Node* nodePtr = new Node(nullptr, head, key, value);
        mp[key] = nodePtr;
        if (head != nullptr) {
            head->prev = nodePtr;
        }
        head = nodePtr;
        if (tail == nullptr) {
            tail = nodePtr;
        }
        if (mp.size() > cp) { // capacity is reached to maximum size
            mp.erase(tail->key);
            Node* temp = tail->prev;
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    } else { // key exists in the map
        Node* nodePtr = mp[key];
        nodePtr->value = value;
        if (nodePtr != head) {
            if (nodePtr == tail) {
                tail = tail->prev;
            }
            nodePtr->prev->next = nodePtr->next;
            if (nodePtr->next != nullptr) {
                nodePtr->next->prev = nodePtr->prev;
            }
            nodePtr->prev = nullptr;
            nodePtr->next = head;
            head->prev = nodePtr;
            head = nodePtr;
        }
    }
}

int LRUCache::get(int key) {
    if (mp.find(key) == mp.end()) {
        return -1;
    } else {
        Node* nodePtr = mp[key];
        if (nodePtr != head) {
            if (nodePtr == tail) {
                tail = tail->prev;
            }
            nodePtr->prev->next = nodePtr->next;
            if (nodePtr->next != nullptr) {
                nodePtr->next->prev = nodePtr->prev;
            }
            nodePtr->prev = nullptr;
            nodePtr->next = head;
            head->prev = nodePtr;
            head = nodePtr;
        }
        return nodePtr->value;
    }
}

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
