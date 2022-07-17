int sockMerchant(int n, vector<int> ar) {

    vector <int> socks; 
    socks.assign(100,0);
    int ct = 0;
    
    for (int i = 0; i < ar.size() ; i++) {
        socks[ar[i]-1] += 1;
    }
    
    for (auto i = socks.begin() ; i < socks.end() ; i++ ) {
        ct += *i / 2;
    }
    return  ct;

}
