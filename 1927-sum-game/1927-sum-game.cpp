class Solution {
public:
    bool sumGame(string num) {

        int lq = 0;
        int rq = 0;
        int lsum = 0;
        int rsum = 0;

        for (int i = 0; i < num.size() / 2; i++) {
            if (num[i] == '?')
                lq++;
            else
                lsum += num[i] - '0';
        }

        for (int i = num.size() / 2; i < num.size(); i++) {
            if (num[i] == '?')
                rq++;
            else
                rsum += num[i] - '0';
        }

        if ((lq + rq) % 2)
            return true;

        int diff = lsum - rsum;
        int need = ((rq - lq) / 2) * 9;

        return diff != need;
    }
};