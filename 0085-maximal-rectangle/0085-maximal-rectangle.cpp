class Solution {
public:

    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for(int i=0;i<=n;++i){
            int currheight = (i==n) ?0:heights[i];
            while(!st.empty() && currheight < heights[st.top()]){
                int height = heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i-st.top()-1;
                }
                maxArea = max(maxArea, height*width);
            }
            st.push(i);
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int>arr(matrix[0].size(),0);
        int mx=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]-'0'==1) arr[j]+=1;
                else arr[j]=0;
            }
            mx=max(mx,largestRectangleArea(arr));
        }
        return mx;
    }
};