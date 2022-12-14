class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        while(i<flowerbed.size()){
            if(flowerbed[i]==1) i+=2;
            else{
                if(i+1<flowerbed.size() && flowerbed[i+1]==0){
                    n--;
                    i+=2;
                }
                else if(i+1>=flowerbed.size()){
                    n--;
                    i+=2;
                }
                else i++;
            }
        }
        return n<=0;
    }
};