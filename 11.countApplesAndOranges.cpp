
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int apple_ct = 0;
    int orange_ct = 0;
    int nm;
    
    for (auto i = apples.begin(); i<apples.end(); i++) {
        nm = *i+ a;    
        if (nm <= t && nm >= s) {
            apple_ct += 1; 
        }
    }
    
    for (auto i=oranges.begin(); i<oranges.end(); i++) {
        nm = *i + b;
        if (nm <= t && nm >= s) {
            orange_ct += 1;
        }
        
    }
    cout << apple_ct << endl << orange_ct ;
}
