class Solution {
public:
    bool isValid(string s) {
        stack<char> m;
        for(char c:s)
        {
            if(c=='(')
                m.push(')');
            else if(c=='[')
                m.push(']');
            else if(c=='{')
                m.push('}');
            else
            {
                if(m.empty() || m.top()!=c)
                    return false;
                else
                    m.pop();
            }
            
        }
        return m.empty();
    }
};