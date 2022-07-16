int birthday(vector<int> s, int d, int m) {
    
    int sum = 0;
    int ct = 0;
    for (int i = 0; i < s.size() ; i++) {
        sum = 0;

        for (int j=0; j<m ; j++) {
            sum += s[j+i];
        }
        
        if (sum == d) {
            ct +=1;            
        }
    }
    return ct;

}
