int beautifulDays(int i, int j, int k) {
    int ct = 0;
    int size = 0;
    int sum = 0;
    int temp = 0;

    for (int x = i; x <= j; x++) {
        
        temp = x;
        while (temp != 0) {
        temp = temp / 10;
        size += 1;
        }

        temp = x;
        for (int p = 0; p < size; p++) {
        sum += (temp % 10) * pow(10,(size-1-p)) ;
        temp = temp / 10;
        }
        
        if (abs(x-sum) % k == 0) {
        ct += 1;
        }

        sum = 0;
        size = 0;
    }
    return ct;
}
