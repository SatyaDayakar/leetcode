class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        for(int i = 0; i < nums.size(); i++)
        {
            pq.push({nums[i], i});
        }

        while(k > 0)
        {
            int value = pq.top().first;
            int index = pq.top().second;

            pq.pop();

            value = value * multiplier;

            pq.push({value, index});

            k--;
        }

        vector<int> ans(nums.size());

        while(!pq.empty())
        {
            int value = pq.top().first;
            int index = pq.top().second;

            ans[index] = value;

            pq.pop();
        }

        return ans;
    }
};