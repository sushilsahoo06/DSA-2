class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        vector<bool>exists(max-min+1);
        for(int & i:nums) exists[i-min]=true;
        vector<int>ans;
        for(int i=0;i<max-min;i++){
            if(!exists[i]){
                ans.push_back(i+min);
            }
        }
        return ans;
    }
};