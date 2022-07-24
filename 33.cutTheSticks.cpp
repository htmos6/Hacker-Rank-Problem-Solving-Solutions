vector<int> cutTheSticks(vector<int> arr) {
    int min;
    int temp_len;
    int len = arr.size();
    
    vector <int> sizes;
    sizes.push_back(arr.size());
    
    while (len != 0) {
        min = *min_element(arr.begin(), arr.end());
        for (auto i = arr.begin(); i<arr.end(); i++){
            if (*i == 0){
                arr.erase(i);
                i--;
            }
            else {
                *i = *i - min;
            }
        }
        temp_len = len;
        len = arr.size();
        if (len != temp_len && len != 0) {
            sizes.push_back(arr.size());
        }  
    }
    return sizes;   
}
