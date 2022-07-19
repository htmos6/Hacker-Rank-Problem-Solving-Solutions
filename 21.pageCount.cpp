int pageCount(int n, int p) {
    
    int div_beg = 0;
    int div_end = 0;
    
    div_beg = p/2;
    div_end = n/2-p/2;
    
    return min(div_beg, div_end);
}
