class Solution {
  public:
    int sameMod(vector<int> &arr) {
        // code here
        int n = arr.size();

        int g = 0;

        // Find GCD of differences
        for (int i = 1; i < n; i++) {
            g = gcd(g, abs(arr[i] - arr[0]));
        }

        // All elements are equal
        if (g == 0)
            return -1;

        // Count divisors of g
        int count = 0;

        for (int i = 1; i * i <= g; i++) {
            if (g % i == 0) {
                count++;

                // i and g/i are two different divisors
                if (i != g / i)
                    count++;
            }
        }

        return count;
    }
};

