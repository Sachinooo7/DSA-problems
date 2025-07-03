class Solution {
public:
    // function to find sum of digits in vector
    int sum_digit(int num){
        int v=0;
        while(num>0){
            v+=num%10;
            num=num/10;
        }
        return v;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<array<int, 3>> vec; // this is done to create sub array of size 3 in vector
        // taking this as reference {{9,18,0},{7,43,1},{7,34,2},{7,16,3}}
        for(int i=0;i<n;i++){
            vec.push_back({sum_digit(nums[i]), nums[i], i}); // {sum_digit, nums_value, index}
        }
        // we will sort the vec and then we need to see how many swaps can be made by swapping according to the index which is stored in vec[i][2]
        sort(vec.begin(), vec.end());
        // after sorting {{7,16,3},{7,34,2},{7,43,1},{9,18,0}}

        int res=0;
        for(int i=0;i<n;i++){
            int ind=vec[i][2];  // index where the original element belongs too
            if(ind!=i){ // for swappint element if its original index and swapped index are not same
                res+=1; //incr the count of it
                swap(vec[i], vec[ind]); //swap that element where it final(ind) belongs too from the current index(i) here final(ind) will be the correct pos of the element
                 i--;// to avoid reaching to our original position after two swappings of same elements ...
                 // this is done so that each element is swappend thrice (avoides reaching to original position.)
            }
        }
        return res;
    }
};