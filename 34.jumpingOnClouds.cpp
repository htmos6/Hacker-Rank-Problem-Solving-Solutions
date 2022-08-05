int jumpingOnClouds(vector<int> c, int k) {

    int size = c.size();
    int crr_ind = -1;
    int energy = 100;
    
    while (crr_ind) {
        if (crr_ind == -1) {
            crr_ind = 0;
        } 
        crr_ind = (crr_ind + k) % size;
        if (c[crr_ind] == 0) {
            energy -= 1;
        }
        else {
            energy -= 3;
        }
    }
    return energy;
}
