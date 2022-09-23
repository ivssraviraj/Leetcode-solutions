class Solution {
public:
    bool isValid(string ss) {
        
        stack<char> s;
        
        for(int i=0;i<ss.length(); i++)
        {
            char c = '.';
            if(!s.empty())
                c=s.top();
            switch(ss[i])
            {
                case '(':
                    s.push('(');
                    break;
                case '{':
                    s.push('{');
                    break;
                case '[':
                    s.push('[');
                    break;
                case ')':
                    
                    if(c!='(')
                        return false;
                    s.pop();
                    break;
                case '}':
                    if(c!='{')
                        return false;
                    s.pop();
                    break;
                case ']':
                    if(c!='[')
                        return false;
                    s.pop();
                    break;
                default :
                    return false;
                    
            }
        }
        if(s.size()==0)
            return true;
        return false;
    }
};