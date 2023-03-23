#include <iostream>
#include <deque> 
#include <vector>
using namespace std;

int findMax(deque<int> dequeOps)
{
    int max = -1000; // corrected line
    int temp;
    while (!dequeOps.empty()) // simplified condition
    {
        temp = dequeOps.front();
        dequeOps.pop_front();
        if (temp > max)
        {
            max = temp;
        }
    }
    return max;
}

void printKMax(int arr[], int n, int k)
{
    deque<int> maxValDeqs;
    vector<int> maxResVec;
    int maxVal;
    int insertVal;
    int deleteVal;
    int idInArr = 0;

    for (int i = 0; i < k; i++)
    {
        maxValDeqs.push_back(arr[i]);
    }

    idInArr = k;
    maxVal = findMax(maxValDeqs);
    maxResVec.push_back(maxVal);

    while (idInArr < n)
    {
        deleteVal = maxValDeqs.front();
        insertVal = arr[idInArr];
        maxValDeqs.pop_front();
        maxValDeqs.push_back(insertVal); // corrected line

        if (deleteVal == maxVal)
        {
            maxVal = findMax(maxValDeqs);
        }
        else
        {
            if (insertVal > maxVal)
            {
                maxVal = insertVal;
            }
        }
        maxResVec.push_back(maxVal);
        idInArr++;
    }

    for (vector<int>::const_iterator i = maxResVec.begin(); i != maxResVec.end(); i++) // corrected line
    {
        cout << *i << " ";
    }
    cout << "\n";
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
