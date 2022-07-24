vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int id;
    int arr[a.size()];
    vector <int> arr2;
    
    for (int i = 0; i < a.size(); i++){
        id = (i+k) % a.size();
        arr[id] = a[i];
    }
    for (int i = 0; i < queries.size(); i++) {
        arr2.push_back(arr[queries[i]]);  
    }
    
    return  arr2;
}
