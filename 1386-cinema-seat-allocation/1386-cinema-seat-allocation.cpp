class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        int maxRow = 0;

        for(int i = 0; i < reservedSeats.size(); i++)
        {
            maxRow = max(maxRow, reservedSeats[i][0]);
        }

        vector<vector<int>> seats(maxRow + 1, vector<int>(11, 0));

        for(int i = 0; i < reservedSeats.size(); i++)
        {
            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];

            seats[row][seat] = -1;
        }

        int ans = (n - maxRow) * 2;

        for(int row = 1; row <= maxRow; row++)
        {
            bool left = true;
            bool middle = true;
            bool right = true;

            for(int seat = 2; seat <= 5; seat++)
            {
                if(seats[row][seat] == -1)
                    left = false;
            }

            for(int seat = 4; seat <= 7; seat++)
            {
                if(seats[row][seat] == -1)
                    middle = false;
            }

            for(int seat = 6; seat <= 9; seat++)
            {
                if(seats[row][seat] == -1)
                    right = false;
            }

            if(left && right)
                ans += 2;
            else if(left || middle || right)
                ans += 1;
        }

        return ans;
    }
};