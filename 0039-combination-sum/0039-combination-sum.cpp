class Solution {
public:
    void findCombinations(int idx,int tar,vector<int>&arr,vector<vector<int>>&ans,vector<int>&output){
        if(idx == arr.size()){
            if(tar==0){
                ans.push_back(output);
            }
            return;
        }
        if(arr[idx] <= tar){
            output.push_back(arr[idx]);
            findCombinations(idx,tar-arr[idx],arr,ans,output);
            output.pop_back();
        }
        findCombinations(idx+1,tar,arr,ans,output);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>output;
        findCombinations(0,target,candidates,ans,output);
        return ans;
    }
};