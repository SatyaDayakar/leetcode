class Solution {
public:
    char repeatedCharacter(string s) {
        int mask = 0; // Bits 0-25 represent 'a'-'z'
        
        for (char c : s) {
            int bitPos = c - 'a';
            
            // Check if the bit at bitPos is already 1
            if (mask & (1 << bitPos)) {
                return c;
            }
            
            // Set the bit at bitPos to 1
            mask |= (1 << bitPos);
        }
        
        return ' ';
    }
};