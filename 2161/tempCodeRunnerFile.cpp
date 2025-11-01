int n; cin >> n;
    vector<vector<string>> s(n, vector<string>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> s[i][j];
    
    if(n == 1 || n == 2){
        cout <<"YES\n";
        return;
    }

    bool vertical = true;
    bool horizontal = true;

    for(int i = 0; i < n; i++){
        for (int j = 1; j < n - 1; j++){
            if(s[i][j] == '#'){
                if(s[i][j - 1] == '#' && s[i][j + 1] == '#'){
                    cout << "NO\n";
                    return;
                }
            } else {
                if (s[i][j - 1] == '#' && s[i][j + 1] == '#') vertical = false;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 1; j < n - 1; j++){
            if (s[j][i] == '#'){
                if (s[j][i - 1] == '#' && s[j][i + 1] == '#'){
                    cout << "NO\n";
                    return;
                }
            }
            else{
                if (s[j][i - 1] == '#' && s[j][i + 1] == '#')
                    vertical = false;
            }
        }
    }