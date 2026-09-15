#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& 
    strs) {
        if (strs.empty()) return "";

        // Sort the vector lexicographically
        sort(strs.begin(), strs.end());

