int hurdleRace(int k, vector<int> height) {

    int max_h = 0;
    
    for (int i = 0; i < height.size(); i++) {
        if (height[i] > max_h ) {
            max_h = height[i];
        }
    }
  
    if (max_h > k) {
        return max_h-k;
    }  
  
    else {
        return 0;
    }
  
}
