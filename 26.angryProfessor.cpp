string angryProfessor(int k, vector<int> a) {
    
    int count = 0;
    for (auto i = a.begin() ; i < a.end() ; i++) {
        if (*i <= 0) {
            count += 1;
        }
    }
    
    if (count < k) {
        return "YES";
    }
    else {
        return "NO";
    }
}
