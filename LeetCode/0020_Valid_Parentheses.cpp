                if (ch == ')' && st.top() != '
                (') return false;
                if (ch == ']' && st.top() != '
                [') return false;
                if (ch == '}' && st.top() != '
                {') return false;

                st.pop();
            }
        }

        return st.empty();
    }
};
