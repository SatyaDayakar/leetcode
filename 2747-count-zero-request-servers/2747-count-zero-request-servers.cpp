class Solution {
public:

    static bool compare(vector<int> a, vector<int> b)
    {
        return a[1] < b[1];
    }

    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) 
    {
        sort(logs.begin(), logs.end(), compare);

        vector<pair<int,int>> q;

        for(int i = 0; i < queries.size(); i++)
        {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        unordered_map<int,int> mp;

        vector<int> ans(queries.size(), 0);

        int left = 0;
        int right = 0;
        int active = 0;

        for(int i = 0; i < q.size(); i++)
        {
            int start = q[i].first - x;
            int end = q[i].first;
            int idx = q[i].second;

            while(right < logs.size() && logs[right][1] <= end)
            {
                int id = logs[right][0];

                if(mp[id] == 0)
                    active++;

                mp[id]++;

                right++;
            }

            while(left < right && logs[left][1] < start)
            {
                int id = logs[left][0];

                mp[id]--;

                if(mp[id] == 0)
                    active--;

                left++;
            }

            ans[idx] = n - active;
        }

        return ans;
    }
};