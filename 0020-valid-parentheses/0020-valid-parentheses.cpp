class Solution {
public:
    bool isValid(string s) {

        if(s.size()%2 == 1 )
        return false ;
        stack<int> st ;
        for(int i = 0 ; i<s.size();i++)
        {
           if(s[i] == '(' || s[i] == '{' || s[i] == '['  )
           st.push(s[i]);
           else
           {

            if(st.empty())
            return false ;
            
            if(s[i] == ')')
            {
                if(st.top() != '(')
                return false ;
                st.pop();
            }
            else if(s[i] == ']')
            {
                if(st.top() != '[')
                return false ;
                st.pop();
            }
            else if(s[i] == '}')
            {
                if(st.top() != '{')
                return false ;
                st.pop();
            }
           }
        }

        if(st.empty())
        return true ;
        return false ;
        
    }
};