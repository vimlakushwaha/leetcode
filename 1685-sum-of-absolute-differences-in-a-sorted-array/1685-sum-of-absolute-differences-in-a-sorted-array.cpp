class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int n=nums.size();
        vector<long long> prefix(n,0);
        prefix[0]=temp[0];
        for(int i=1;i<temp.size();i++){
            prefix[i]=prefix[i-1]+temp[i];
        }
        vector<int> ans(n);
        for(int i=0;i<nums.size();i++){
            
            int start=0;
            int end=n-1;
            int index=-1;
            while(start<=end){
                
                int mid=(start+end)/2;
                if(temp[mid]>=nums[i]){
                    index=mid;
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            if(index!=-1){
                
                long long right=0;
                long long left=0;
                if(index-1>=0){
                    int smaller=index;
                    int greater=n-smaller;
                    right=prefix[n-1]-prefix[index-1]-(nums[i]*1LL*greater);
                    left=(1LL*nums[i]*smaller)-prefix[index-1];
                }
                else{
                   right=prefix[n-1]-(1LL*nums[i]*n);
                }
                ans[i]=left+right;
            }
            else{
                ans[i]=(n*nums[i]*1LL)-prefix[n-1];
            }
        }
        return ans;
    }
};