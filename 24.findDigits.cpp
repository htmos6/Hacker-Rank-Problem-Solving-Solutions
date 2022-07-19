int findDigits(int n) {
    
    int rem, temp;
    int count = 0;
    
    rem = n % 10;
    temp = n;
    
    do {
        if (rem != 0 && n != 0) {
            if (temp % rem == 0) {
                count += 1;
            }
            n = n/10;
            rem = n % 10;
        }
        else {
            n = n/10;
            rem = n % 10;
        }
    } while (n > 0);
    return count;
}
