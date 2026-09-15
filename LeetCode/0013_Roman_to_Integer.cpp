        for (int i = 0; i < s.length(); i++) {

            if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
                ans -= value[s[i]];
            }
            else {
                ans += value[s[i]];
            }
        }

        return ans;
    }
};
