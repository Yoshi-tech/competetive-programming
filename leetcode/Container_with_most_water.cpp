class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int i =0;
        int j = height.size()-1;
        while(i < j){
            int width = (i-j) * -1;
            int l = height[i];
            int r = height[j];
            int height = min(l, r);
            int vol = width * height;
            if(vol > maxVol){
                maxVol = vol;
            }
            if(l < r){
                i++;
            }
            else{
                j--;
            }

        }
        return maxVol;

    }
};
