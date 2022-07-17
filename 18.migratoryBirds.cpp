int migratoryBirds(vector<int> arr) {
    
    vector <int> type{0, 0, 0, 0, 0};
    
    int max, ct;
    ct = 0;
    for (auto i = arr.begin(); i < arr.end(); i++) {
        if (*i == 1) {
            type[0] += 1;
        }
        else if (*i == 2) {
            type[1] += 1;
        }       
        else if (*i == 3) {
            type[2] += 1;
        }
        else if (*i == 4) {
            type[3] += 1;
        }
        else {
            type[4] += 1;
        }
    }
    
    max = type[0];
    
    for (int i = 0; i < 5; i++) {
        
        if (type[i] > max) {
            max = type[i];
            ct = i;
        }
        else {
            continue;
        }
        
    }
    
    return ct+1;
}
