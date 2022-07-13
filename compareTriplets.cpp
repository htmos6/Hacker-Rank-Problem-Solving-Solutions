vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int sza = 0;
    int szb= 0;
    
    for (int i=0; i<a.size(); i++) {
        
        if (a[i] > b[i]) { 
            sza ++;
        } 
        else if (a[i] < b[i]) {  
            szb ++;
        }
    } 
    
    vector<int> res;
    res.push_back(sza);
    res.push_back(szb);
    return res;
    
}
