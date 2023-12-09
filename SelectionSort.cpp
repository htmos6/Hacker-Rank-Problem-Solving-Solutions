// Write a code so that it has a space complexity of O(1)

void SelectionSort(vector<int>& nums) {
        
        for (int step = 0; step < (nums.size() - 1); step++)
        {
            int minId = step;
            for (int i = step + 1 ; i < (nums.size()); i++)
            {
                if (nums[i] < nums[minId])
                {
                    minId = i; 
                }
            }

            int temp = nums[step];
            nums[step] = nums[minId];
            nums[minId] = temp;
        }
    }
