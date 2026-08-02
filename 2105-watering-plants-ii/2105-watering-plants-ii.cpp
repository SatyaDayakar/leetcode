class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {


        int CA = capacityA ;
        int CB = capacityB ;
        int Refills = 0 ;
        for(int i =  0 , j = plants.size()-1 ; i<=j; i++ , j--)
        {
            if(i==j)
            {
            if (max(CA, CB) < plants[i])
              Refills++;
              break ;
            }

            if(CA>=plants[i])
            {
                CA-=plants[i];
            }
            else
            {
                CA = capacityA ;
                CA-=plants[i];
                Refills++ ;
            }
            if(CB>=plants[j])
            {
                CB-=plants[j];
            }
            else
            {
                CB = capacityB ;
                CB-=plants[j];
                Refills++ ;
            }
        }
        
        return Refills ;
        
    }
};