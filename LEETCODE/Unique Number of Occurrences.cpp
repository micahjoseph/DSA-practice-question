class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp,m;
        for(auto i:arr){
            mp[i]++;
    }
    
        for(auto i:mp){
            m[i.second]++;
        }
        for(auto i:m){
            if(i.second>1){
                return false;
            }
        }
        return true;
    }
};
