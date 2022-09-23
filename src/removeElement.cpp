class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        
        int i=0;
        while(i<n.size())
        {
            if(n[i]==val)
                n.erase(n.begin()+i);
            else
                i++;
        }
        return n.size();
    }
};