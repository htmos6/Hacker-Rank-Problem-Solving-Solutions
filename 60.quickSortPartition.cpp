
vector<int> quickSort(vector<int> arr) {
    vector<int> left;
    vector<int> right;
    
    for (auto i = arr.begin()+1; i != arr.end(); i++)
    {
        if (*i < arr[0])
            left.push_back(*i);
        else
            right.push_back(*i);       
    }
     
    left.push_back(arr[0]);
    left.insert( left.end(), right.begin(), right.end() );
    
    return left;
    
}
