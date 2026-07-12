class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {

        int h1 = (endTime[0]-'0')*10 + (endTime[1]-'0') ;
        int m1 = (endTime[3]-'0')*10 +(endTime[4]-'0') ;
        int s1 = (endTime[6]-'0')*10 + (endTime[7]-'0') ;

        int h2 = (startTime[0]-'0')*10 + (startTime[1]-'0') ;
        int m2 = (startTime[3]-'0')*10 + (startTime[4]-'0') ;
        int s2 = (startTime[6]-'0')*10 + (startTime[7]-'0') ;
        s1 = 60-s1 ;
        m1++ ;
        m1 = 60-m1 ;
        h1++ ;
        int a1 = (h2-h1)*3600 + m1*60 + s1 + m2*60 +s2  ;
       
        return abs(a1) ;


        

        
        
    }
};