void DisplayArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << "\n";
}

void countSwaps(vector<int> a) {
    int totalSwap = 0;
    
    for (int step = 0; step < a.size()-1; step++)
    {
        int swapped = 0;
        for (int i=1; i < a.size()-step; i++)
        {        
            if (a[i-1] > a[i])
            {
                int temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
                
                swapped += 1; 
                totalSwap += 1;
            }
        }
        
        if (swapped == 0)
        {
            break; 
        }
    }
    
    std::cout << "Array is sorted in " << totalSwap << " swaps.\n";
    std::cout << "First Element: " << a.front() << "\n";
    std::cout << "Last Element: " << a.back() << "\n";
}
