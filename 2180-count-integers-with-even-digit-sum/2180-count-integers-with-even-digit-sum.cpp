class Solution {
public:
    int countEven(int num) {
        int ans = 0 ;
        int s = num/10 ;
        int sum = 0 ;
        while(s>0)
        {
          sum+=(s%10);
          s/=10 ;
        }
        if(sum==0)
        return num/2 ;
        if(sum%2 == 0)
        {
           ans+=( (num/10)*5 )-1 ;
           if(num%10 != 0)
           ans+=((num%10)/2)+1 ;
           else
           ans+=1 ;;


        }
        else 
        {
           ans+=( (num/10)*5 )-1 ;
           ans+= (num%10)-((num%10)/2)  ;
        }

        return ans ;

    }
};