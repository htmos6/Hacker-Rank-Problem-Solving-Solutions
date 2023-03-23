#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> nums;
    stringstream ss(str);
    string token;
    int num;
    
    while(getline(ss, token, ','))
    {
        num = stoi(token);
        nums.push_back(num);
    } 
    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
