class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        priority_queue<int> minh; //actually a max heap
        vector<int> ans;
        for(int i=0;i<n;i++) minh.push(arr[i]);
        
        while(k!=0){
            ans.push_back(minh.top());
            minh.pop();
            k--;
        }
        return ans;
    }
};
