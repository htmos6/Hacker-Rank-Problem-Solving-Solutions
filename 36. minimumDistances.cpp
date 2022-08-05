int minimumDistances(vector<int> a) {
    int diff = 1001;
    
    for (int i = 0; i < a.size()-1; i++) {
        for (int j = i+1; j < a.size(); j++) {
            if (a[i] == a[j] && abs(i-j) < diff) {
                diff = abs(i-j);
            }
        }
    }
    
    if (diff == 1001) { 
        return -1; 
    }
    
    return diff;
}
