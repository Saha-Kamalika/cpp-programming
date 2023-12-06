class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) mp[nums[i]]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        for (auto it : mp) minh.push({it.second,(-it.first)});

        vector<int> ans;
        while (minh.size() > 0) {
            auto ele = minh.top();
            minh.pop();
            for(int i = 0 ; i < ele.first ;i++) ans.push_back(-(ele.second));
        }
        return ans;
    }
};
