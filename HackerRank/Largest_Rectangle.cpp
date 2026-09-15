- start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
