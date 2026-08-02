class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {

        int C = capacity ;
        int s = 0 ;
        for(int i =  0 ; i<plants.size();i++)
        {
            if(C>=plants[i])
            {
                C-=plants[i];
                s++ ;
            }
            else
            {
                C = capacity ;
                s+=(2*i + 1);
                C-=plants[i];
            }
        }
        return s ;
        
    }
};