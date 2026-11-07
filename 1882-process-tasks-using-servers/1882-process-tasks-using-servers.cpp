class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> freeServers;

        priority_queue<tuple<long long,int,int>, vector<tuple<long long,int,int>>, greater<tuple<long long,int,int>>> busyServers;

        int n = servers.size();

        for(int i = 0; i < n; i++) {
            freeServers.push({servers[i], i});
        }

        vector<int> ans;

        long long currentTime = 0;

        for(int i = 0; i < tasks.size(); i++) {

            currentTime = max(currentTime, (long long)i);

            while(!busyServers.empty() && get<0>(busyServers.top()) <= currentTime) {
                auto [time, weight, index] = busyServers.top();
                busyServers.pop();
                freeServers.push({weight, index});
            }

            if(freeServers.empty()) {
                currentTime = get<0>(busyServers.top());

                while(!busyServers.empty() && get<0>(busyServers.top()) == currentTime) {
                    auto [time, weight, index] = busyServers.top();
                    busyServers.pop();
                    freeServers.push({weight, index});
                }
            }

            int weight = freeServers.top().first;
            int index = freeServers.top().second;

            freeServers.pop();

            ans.push_back(index);

            busyServers.push({currentTime + tasks[i], weight, index});
        }

        return ans;
    }
};