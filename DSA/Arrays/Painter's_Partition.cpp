class Solution {
public:
    static bool isPoss(int arr[], int n, int k, long long mid) {
        int count = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (sum + arr[i] <= mid) 
                sum += arr[i];
            else {
                count++;
                if (count > k || arr[i] > mid) 
                    return false;
                sum = arr[i];
            }
        }
        return true;
    }

    static long long minTime(int arr[], int n, int k) {
        long long sum = 0;
        for (int i = 0; i < n; i++) 
            sum += arr[i];
        long long s = 0, e = sum, ans = -1;
        while (s <= e) {
            long long mid = s + (e - s) / 2;
            if (isPoss(arr, n, k, mid)) {
                ans = mid;
                e = mid - 1;
            } else 
                s = mid + 1;
        }
        return ans;
    }
};