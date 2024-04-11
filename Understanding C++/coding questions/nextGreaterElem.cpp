class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge(nums.size());
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() and nums[i]>nums[st.top()]){
                nge[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            nge[st.top()]=-1;
            st.pop();
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=nge[i]==-1?-1:nums[nge[i]];
        }
        return ans;
    }
};

/*
Given an integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.
*/