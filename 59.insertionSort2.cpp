void displayArray(int n, vector<int> arr)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n";  
}

void insertionSort2(int n, vector<int> arr) {
    
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int revJ = i-1;
        
        while (revJ>=0 && arr[revJ] > key)
        {
            arr[revJ+1] = arr[revJ]; 
            revJ--;
        }
        
        arr[revJ+1] = key;
        displayArray(n, arr);
    }
}
