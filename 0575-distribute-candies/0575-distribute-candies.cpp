class Solution {
public:
    int distributeCandies(vector<int>& v) {
        set<int> s(v.begin(), v.end());
        if(s.size() < v.size()/2)
        return s.size();
        else
        return v.size()/2 ;
    }
};