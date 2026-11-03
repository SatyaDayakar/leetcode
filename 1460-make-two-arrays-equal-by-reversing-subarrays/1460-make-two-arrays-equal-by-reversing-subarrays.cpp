class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       
        int xor_sum = 0;
        for (int i = 0; i < target.size(); i++) {
            xor_sum ^= target[i] ^ arr[i];
        }

        if (xor_sum != 0) {
            return false;
        }

        unordered_map<int, int> count;
        for (int num : target) {
            count[num]++;
        }
        for (int num : arr) {
            count[num]--;
            if (count[num] == 0) {
                count.erase(num);
            }
        }

        return count.empty();
    }
};