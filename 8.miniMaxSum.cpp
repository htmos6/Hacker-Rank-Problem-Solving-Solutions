
void miniMaxSum(vector<int> arr) {
    long int max = arr[0];
    long int min = arr[0];
    long int sum = 0;
    
    for (auto i = arr.begin(); i<arr.end(); i++){
        sum += *i;    
        if(*i > max) {
            max = *i;
        }  
        if (*i < min) {
            min = *i;
        }     
    }
    cout << sum-max << " " << sum-min << endl;
}
