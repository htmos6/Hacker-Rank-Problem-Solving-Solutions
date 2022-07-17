int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    
    int sum = 0;
    int max = 0;
    for (int i = 0; i < drives.size() ; i++) {
        for (int j = 0; j < keyboards.size() ; j++) {
            sum = drives[i] + keyboards[j];
            if ((sum > max) && (sum <= b )) {
                max = sum;
            } 
        }
    }
    if (max == 0) {
        max = -1;
    }
    return max;
}
