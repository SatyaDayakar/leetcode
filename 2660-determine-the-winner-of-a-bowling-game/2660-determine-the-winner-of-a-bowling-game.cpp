class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int p1 = 0, p2 = 0;

        for (int i = 0; i < player1.size(); i++) {
            int s1 = player1[i];
            int s2 = player2[i];

            if ((i >= 1 && player1[i - 1] == 10) ||
                (i >= 2 && player1[i - 2] == 10))
                s1 *= 2;

            if ((i >= 1 && player2[i - 1] == 10) ||
                (i >= 2 && player2[i - 2] == 10))
                s2 *= 2;

            p1 += s1;
            p2 += s2;
        }

        if (p1 > p2) return 1;
        if (p2 > p1) return 2;
        return 0;
    }
};