
int pickingNumbers(vector<int> a) {

vector <int> nums(100,0); 
int max = 0;

for (int i = 0; i< a.size(); i++) {
    nums[a[i]-1] += 1; 
}
  
for (int i = 0; i< nums.size()-1; i++) {
    if (nums[i] + nums[i+1] > max)
        max = nums[i] + nums[i+1];
}
return max;
}
