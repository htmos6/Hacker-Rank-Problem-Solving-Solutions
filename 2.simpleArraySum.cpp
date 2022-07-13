int simpleArraySum(vector<int> ar) {
    int size_a ;
    int sum = 0;
    
    size_a = ar.size();
    for (int i=0; i< size_a; i++) {
        sum += ar[i];    
    }
    return sum; 

}
