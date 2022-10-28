vector<int> getMax(vector<string> operations) {
    stack<int> s1, s2;
    vector<int> v1;
    int nm2;

    for (int i=0; i<operations.size(); i++) {
        
        if (operations[i].size()>1) {
            nm2 = stoi(operations[i].substr(2));
            s1.push(nm2);
            if (s2.empty() || s2.top()<=nm2) {
                s2.push(nm2);
            }
        }
        else if (operations[i] == "2" && s1.empty()!=1) {
            if (s1.top() == s2.top()) {
                s2.pop();
            }
            s1.pop();
        }
        else {
            v1.push_back(s2.top());
        }      
    }
    return v1;
    
}
