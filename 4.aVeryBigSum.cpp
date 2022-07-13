/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(vector<long> ar) {
    long int sum = 0;
    for (auto i = ar.begin(); i<ar.end() ; i++) {
        sum += *i; 
    }
    return sum;
}
