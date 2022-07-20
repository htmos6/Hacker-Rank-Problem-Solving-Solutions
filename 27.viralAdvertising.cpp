int viralAdvertising(int n) {
    int sum = 0;
    int tot_person = 5; // initially it is 5 
    for (int i = 0; i < n; i++){
        sum += tot_person / 2;
        tot_person = (tot_person / 2)*3;
    }
    return sum;
}
