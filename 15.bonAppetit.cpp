void bonAppetit(vector<int> bill, int k, int b) {
    int anna = bill[k];
    int sum = 0;
    
    for (auto i = bill.begin(); i < bill.end() ; i++) {
        sum += *i;      
    }
    
    sum = sum - anna;
    if (sum/2 == b ) {
        cout << "Bon Appetit";
    } 
    else {
        cout << b - sum/2 ;
    }
}
