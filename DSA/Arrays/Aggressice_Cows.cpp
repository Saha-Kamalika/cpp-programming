class Solution {
public:
    bool isPoss(vector<int> &stalls, int k, int mid){
        int count=1;
        int pos=stalls[0];
        for(int i=0;i<stalls.size();i++){
            if(stalls[i]-pos>=mid){
                count++;
                if(count==k) return true;
                pos=stalls[i];
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(), stalls.end());
        int s=0;
        int maxi = -1;
        for(int i=0;i<stalls.size();i++){
            maxi=max(stalls[i], maxi);
        }
        int e=maxi;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPoss(stalls, k, mid)){
                ans=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};