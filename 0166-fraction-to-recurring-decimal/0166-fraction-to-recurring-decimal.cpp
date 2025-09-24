class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string result;

        // Handle sign
        if ((numerator < 0) ^ (denominator < 0)) 
            result += "-";

        // Convert to long long to avoid overflow
        long long n = llabs((long long)numerator);
        long long d = llabs((long long)denominator);

        // Integer part
        result += to_string(n / d);
        long long rem = n % d;

        if (rem == 0) return result; // No decimal part

        result += ".";

        // Map remainder -> index in result string
        unordered_map<long long, int> remainderPos;

        while (rem != 0) {
            if (remainderPos.find(rem) != remainderPos.end()) {
                // Insert "(" at first occurrence
                result.insert(remainderPos[rem], "(");
                result += ")";
                break;
            }

            remainderPos[rem] = result.size();
            rem *= 10;
            result += to_string(rem / d);
            rem %= d;
        }

        return result;
    }
};
