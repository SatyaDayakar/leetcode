class Solution {
public:
    string winningPlayer(int x, int y) {

     int s = min(x , y/4) ;
     if(s%2 == 1)
     return "Alice";
     return "Bob";



        
    }
};