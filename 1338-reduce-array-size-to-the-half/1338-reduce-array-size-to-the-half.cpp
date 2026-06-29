class Solution {
public:
    int minSetSize(vector<int>& arr) {

       vector<int> freq(100001, 0);

       for(int i = 0 ; i<arr.size() ; i++)
       {
        freq[arr[i]]++ ;
       } 

        vector<pair<int,int>> v;

       for (int i = 1; i <= 100000; i++)
      {
        if (freq[i] > 0)
        v.push_back({freq[i], i});
       } 

       sort(v.begin() , v.end());
       int sum = 0;
int count = 0;

for (int i = v.size() - 1; i >= 0; i--)
{
    if (sum >= arr.size()/2) break;

    sum += v[i].first;
    count++;
}

return count ;




        
    }
};