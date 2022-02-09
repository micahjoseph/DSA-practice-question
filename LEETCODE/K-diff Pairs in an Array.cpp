class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       int count=0;
        int i=0;
        int j=1;
        while(i<n && j<n)
        {
            if(i!=j && nums[j]-nums[i]==k){
                while(i+1 < n && nums[i+1] == nums[i]) // to check for distinct pairs
                    i++;
                i++;
                while(j+1<n && nums[j+1] == nums[j]) //to check for distinct pairs
                    j++;
                j++;
                count++;
            }
            else if(nums[j]-nums[i]<k) j++;
            else i++;
        }
        return count;
    }
};
