vector<int> permutationEquation(vector<int> p) {
    int temp_id;
    vector <int> ids;
    
    for (int i = 1; i <= p.size(); i++) {
        for (int j = 1; j <= p.size(); j++) {
            if (p[j-1] == i) {
                temp_id = j;
                for (int m = 1; m <= p.size(); m++) {
                    if (p[m-1] == temp_id) {
                        ids.push_back(m);
                    }
                }
            }
        }  
    } 
    return ids;
}
