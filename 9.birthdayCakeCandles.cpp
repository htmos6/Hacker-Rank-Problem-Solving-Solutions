int birthdayCakeCandles(vector<int> candles) {
    int num_candle = 0;
    int max = 0;
    for (auto i = candles.begin(); i<candles.end(); i++) {
        
        if (*i > max) {
            max = *i;
            num_candle =1;
        }
        else if (*i == max) {
            num_candle +=1;
        } 
    }
    return num_candle;
}
