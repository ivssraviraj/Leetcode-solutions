class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();      
        return find(digits,n-1,n);
    }
    
    vector<int> find(vector<int> &digits, int index, int size)
    {
            if(index==0)
            {
                if(digits[0]+1==10){
                    digits[0] = 0;
                    digits.insert(digits.begin(), 1);
                }
                else
                {
                    digits[0]+=1;
                }
                return digits;
            }
            else if(index>0&&digits[index]+1==10)
            {
                digits[index] = 0;
                return find(digits, index-1, size);
            }
            else
            {
                digits[index]+=1;
                return digits;
            }  
    }   
};