int diagonalDifference(vector<vector<int>> arr) {

    int diag1 = 0;
    int diag0 = 0;
    
    int no_col = arr[0].size();
    int no_row = arr.size();
    
    for (int i = 0; i<no_row; i++) {
      for (int j=0; j<no_col; j++) {
        
        if (i==j) {
            diag0 += arr[i][j];
        }
        if (i+j == arr.size()-1) {
            diag1 += arr[i][j];
        } 
         
      } 
    }

    return abs(diag1-diag0);

}
