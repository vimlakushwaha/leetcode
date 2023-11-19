class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,res=0;
        while(i<nums.size()-1){
            int j=i;
            while(j<nums.size() && nums[i]==nums[j]){
                j++;
            }
            res+=nums.size()-(j);
            i=j;
        }
        return res;
    }
};