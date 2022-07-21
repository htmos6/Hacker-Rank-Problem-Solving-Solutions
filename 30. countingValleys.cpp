int countingValleys(int steps, string path) {
    
    int altitude = 0;
    int nm = 0;
    
        for (int i = 0; i < steps; i++) {
            if (path[i] == 'U' && altitude + 1 == 0) {
                nm += 1;
                altitude += 1;
            }
            else if (path[i] == 'U') {
                altitude += 1;
            }
            else if (path[i] == 'D') {
                altitude -= 1;
            }
        }
    return nm;
}
