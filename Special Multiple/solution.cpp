#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER n as parameter.
 */

/*------------------ Solution Starts here ----------------------*/
string solve(int n) {
    if (n == 1) return "9";
    
    queue<string> q;
    set<int> visited;
    
    q.push("9");
    visited.insert(9 % n);
    
    while (!q.empty()){
        string num = q.front();
        q.pop();
        
        long long current = stoll(num);
        if (current % n == 0){
            return num;
        }
        
        string next_num = num + "0";
        int next_rem = stoll(next_num) % n;
        if (visited.find(next_rem) == visited.end()){
            q.push(next_num);
            visited.insert(next_rem);
        }
        
        next_num = num + "9";
        next_rem = stoll(next_num) % n;
        if (visited.find(next_rem) == visited.end()){
            q.push(next_num);
            visited.insert(next_rem);
        }
    }
    return "-1";
}

/*------------------ Solution Ends here ----------------------*/
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
