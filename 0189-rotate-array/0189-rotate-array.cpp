class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          int n = nums.size();
       k = k%n; // remainder tells how many times to rotate
       
       vector<int>temp(n); // temporary array of size n 
       
       for(int i =0 ; i<n ;i++){
           temp [(i+k)%n] =nums[i]; //New position = (old position + k)% n 
       }
        nums = temp ; 
    }
};