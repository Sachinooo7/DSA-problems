class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int xorVal = a ^ b;       // Sum without carry
            int carry = (a & b) << 1; // Carry calculation
            
            a = xorVal;  // Update `a` with sum
            b = carry;   // Update `b` with carry
        }
        return a; // When carry becomes 0, `a` has the final sum
    }
};
