class Solution {
    public int romanToInt(String s) {
        // Map to store Roman numeral values
        java.util.Map<Character, Integer> value = new java.util.HashMap<>();
        value.put('I', 1);
        value.put('V', 5);
        value.put('X', 10);
        value.put('L', 50);
        value.put('C', 100);
        value.put('D', 500);
        value.put('M', 1000);

        int ans = 0;
        int n = s.length();

