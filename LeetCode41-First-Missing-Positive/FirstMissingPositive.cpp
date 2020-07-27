class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){
            while(nums[i]!=i+1 && nums[i]>0 && \
                  nums[i]<=nums.size() && nums[nums[i]-1]!=nums[i]){
                      int temp=nums[i];
                      nums[i]=nums[nums[i]-1];
                      nums[temp-1]=temp;
                  } 
            }
            for(int k=0;k<nums.size();++k){
                if(nums[k]!=k+1) return (k+1);
            }
            return nums.size()+1;
    }
};
