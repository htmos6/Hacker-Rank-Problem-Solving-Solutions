vector<int> breakingRecords(vector<int> scores) {
    int score_min = scores[0];
    int score_max = scores[0];
    int ct_min = 0;
    int ct_max = 0;
    vector <int> val;
    
    for (auto i = scores.begin(); i< scores.end(); i++) {
        if (*i < score_min) {
            score_min = *i;
            ct_min += 1;
        }
        if (*i > score_max) {
            score_max = *i;
            ct_max += 1;
        }
    }
    val.push_back(ct_max);
    val.push_back(ct_min);
    return val;
}
