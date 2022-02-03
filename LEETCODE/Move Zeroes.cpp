class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        // move all the nonzero elements advance
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) 
            {
                swap(nums[j],nums[i]);
                i++;
            }
        
        }
    }
};



// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int size = nums.size();
        
//         int a=0;
        
//         for(int i=0; i<size; i++) {
//             if(nums[i]!=0) {
//                 swap(nums[i], nums[a]);
//                 a++;
//             }
//         }
//     }
// };
