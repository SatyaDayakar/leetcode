class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        // Store all numbers in the hash set
        for (int x : nums) {
            st.insert(x);
        }

        int longest = 0;

        // Check each number
        for (int x : st) {

            // Start only if x is the beginning of a sequence
            if (st.find(x - 1) == st.end()) {

                int current = x;
                int length = 1;

                // Count consecutive numbers
                while (st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};