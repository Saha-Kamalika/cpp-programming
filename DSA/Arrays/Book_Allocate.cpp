class Solution {
public:
    bool isPoss(vector<int>& nums, int n, int m, int mid){
        int count=1;
        int subSum=0;
        for(int i=0;i<n;i++){
            if(subSum+nums[i]<=mid) subSum+=nums[i];
            else{
                count++;
                if(count>m or nums[i]>mid) return false;
                subSum=nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s=0, sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        int e=sum, ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPoss(nums, nums.size(), k, mid)){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};