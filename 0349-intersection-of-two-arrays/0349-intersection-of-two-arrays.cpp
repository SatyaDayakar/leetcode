class Solution {
public:
vector<int> intersection(vector<int>& a, vector<int>& b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    vector<int> ans;

    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            ans.push_back(a[i]);

            int val = a[i];

        
            while (i < a.size() && a[i] == val) i++;
            while (j < b.size() && b[j] == val) j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}
};