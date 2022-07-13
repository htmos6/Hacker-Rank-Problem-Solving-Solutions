
vector<int> gradingStudents(vector<int> grades) {
    
    vector <int> grd;
    int div = 1;
    for (auto i=grades.begin(); i<grades.end(); i++) {
        
        if (*i < 38) {
            grd.push_back(*i);
        }
        else if (*i >= 38) {
            div = (*i/5) + 1;
            if (div*5 - *i <3) {
                grd.push_back(div*5);
            } 
            else { 
                grd.push_back(*i);
            }
        }   
    }
    
    return grd;
}
