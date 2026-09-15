
            int height = h[st.top()];
            st.pop();

            int width;

            if (st.empty()) {
                width = i;
            } else {
                width = i - st.top() - 1;
            }

            long long area = 1LL * height * 
            width;

            maxArea = max(maxArea, area);
        }

        st.push(i);
    }

    return maxArea;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split(rtrim