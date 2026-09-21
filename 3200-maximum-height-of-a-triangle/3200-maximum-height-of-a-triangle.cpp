class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int ans1 = 0;
        int r = red;
        int b = blue;

        for(int row = 1; ; row++)
        {
            if(row % 2 == 1)
            {
                if(r < row)
                    break;
                r -= row;
            }
            else
            {
                if(b < row)
                    break;
                b -= row;
            }
            ans1++;
        }

        int ans2 = 0;
        r = red;
        b = blue;

        for(int row = 1; ; row++)
        {
            if(row % 2 == 1)
            {
                if(b < row)
                    break;
                b -= row;
            }
            else
            {
                if(r < row)
                    break;
                r -= row;
            }
            ans2++;
        }

        return max(ans1, ans2);
    }
};