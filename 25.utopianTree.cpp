int utopianTree(int n) {
    int h=1;
    
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= n ; i++) {
            if (i % 2 == 1){
                h=h*2;
            }
            else if (i % 2 == 0) {
                h = h + 1;
            }
        }
    }
    return h;

}
