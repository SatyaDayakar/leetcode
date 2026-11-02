class Solution {
public:

    vector<int> counts;

    void merge(vector<pair<int,int>>& nums, int low, int mid, int high) {

        vector<pair<int,int>> temp;

        int i = low;
        int j = mid + 1;
        int rightCount = 0;

        while(i <= mid && j <= high) {

            if(nums[j].first < nums[i].first) {
                temp.push_back(nums[j]);
                rightCount++;
                j++;
            }
            else {
                counts[nums[i].second] += rightCount;
                temp.push_back(nums[i]);
                i++;
            }
        }

        while(i <= mid) {
            counts[nums[i].second] += rightCount;
            temp.push_back(nums[i]);
            i++;
        }

        while(j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        for(int k = low; k <= high; k++) {
            nums[k] = temp[k - low];
        }
    }

    void mergeSort(vector<pair<int,int>>& nums, int low, int high) {

        if(low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }

    vector<int> countSmaller(vector<int>& nums) {

        int n = nums.size();

        counts.resize(n, 0);

        vector<pair<int,int>> arr;

        for(int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        mergeSort(arr, 0, n - 1);

        return counts;
    }
};