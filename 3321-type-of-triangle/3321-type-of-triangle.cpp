class Solution 
{
public:
    string triangleType(vector<int>& nums) 
    {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        // Step 1: Check triangle inequality
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) 
        {
            return "none";
        }

        // Step 2: Count unique side lengths
        unordered_set<int> sides;
        sides.insert(a);
        sides.insert(b);
        sides.insert(c);

        // Step 3: Determine triangle type
        return sides.size() == 1 ? "equilateral" : (sides.size() == 2 ? "isosceles" : "scalene");
    }
};