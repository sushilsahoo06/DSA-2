class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int a=INT_MIN;
        int b=INT_MIN;
        int x=INT_MAX;
        int y=INT_MAX;
        for(int & num :nums){
            int oa=a,
                ox=x;
            a=max(a,num);
            b=max(b,min(oa,num));

            x=min(x,num);
            y=min(y,max(ox,num));
        }
        return max((a-1)*(b-1) , (x-1)*(y-1));
    }
};