class Solution{
    public:
    long kthSmallest(long long A[],long long N,long long K){
        priority_queue<long long>maxh;
        for(int i=0;i<N;i++){
            maxh.push(A[i]);
            if(maxh.size()>K) maxh.pop();
        }
        return maxh.top();
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        long long first=kthSmallest(A,N,K1);
        long long second=kthSmallest(A,N,K2);
        long long ans=0;
        for(int i=0;i<N;i++){
            if(A[i]>first && A[i]<second) ans+=A[i];
        }
        return ans;
    }
};
