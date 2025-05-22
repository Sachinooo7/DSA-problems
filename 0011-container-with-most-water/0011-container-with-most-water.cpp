class Solution {
public:
    int maxArea(vector<int>& height) {

        int sum=0;
        int mx=0;
        int s=0;
        int l=height.size()-1;

        while(s<l){
            if(height[s]<height[l]){
                sum=height[s]*(l-s);
                s++;
            }
            else{
                sum=height[l]*(l-s);
                l--;
            }
            mx=max(mx,sum);
        }
        return mx;
        
    }
};