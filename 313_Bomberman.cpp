#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'bomberMan' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING_ARRAY grid
 */

vector<string> bomberMan(int n, vector<string> grid)
{
    // int t=0;
    int r = grid[0].size() - 1;
    int c = grid.size() - 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (auto j : grid)
            {
                for (auto k : j)
                {
                    if (k == '.')
                    {
                        k = i + '0';
                    }
                    // cout<<k;
                }
            }
        }
        // cout<<i;
        if (i % 3 == 0)
        {
            for (int j = 0; j < grid.size(); j++)
            {
                for (int k = 0; k < grid[j].size(); k++)
                {
                    cout << grid[j][k];
                    if (grid.at(j).at(k) == '0')
                    {
                        cout << grid[j][k];
                        if (j == 0 && k == 0)
                        {
                            grid[j][k] = '.';
                            grid[j + 1][k] = '.';
                            grid[j][k + 1] = '.';
                        }
                        else if (j == 0 && k == grid[j].size() - 1)
                        {
                            grid[j][k] = '.';
                            grid[j + 1][k] = '.';
                            grid[j][k - 1] = '.';
                        }
                        else if (j == 0 && (k > 0 && k < r))
                        {
                            grid[j][k] = '.';
                            grid[j + 1][k] = '.';
                            grid[j][k + 1] = '.';
                            grid[j][k - 1] = '.';
                        }
                        else if ((j > 0 && j < c) && k == 0)
                        {
                            grid[j][k] = '.';
                            grid[j + 1][k] = '.';
                            grid[j][k + 1] = '.';
                            grid[j - 1][k] = '.';
                        }
                        else if ((j > 0 && j < c) && k == r)
                        {
                            grid[j][k] = '.';
                            grid[j + 1][k] = '.';
                            grid[j][k - 1] = '.';
                            grid[j - 1][k] = '.';
                        }
                        else if ((j > 0 && j < c) && (k > 0 && k < r))
                        {
                            grid[j][k] = '.';
                            grid[j + 1][k] = '.';
                            grid[j][k + 1] = '.';
                            grid[j - 1][k] = '.';
                            grid[j][k - 1] = '.';
                        }
                        else if (j == c && k == 0)
                        {
                            grid[j][k] = '.';
                            // grid[j+1][k]='.';
                            grid[j][k + 1] = '.';
                            grid[j - 1][k] = '.';
                        }
                        else if (j == c && (k > 0 && k < r))
                        {
                            grid[j][k] = '.';
                            grid[j][k - 1] = '.';
                            grid[j][k + 1] = '.';
                            grid[j - 1][k] = '.';
                        }
                        else if (j == c && k == r)
                        {
                            grid[j][k] = '.';
                            // grid[j+1][k]='.';
                            grid[j][k - 1] = '.';
                            grid[j - 1][k] = '.';
                        }
                    }
                }
            }
        }
    }
    return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int r = stoi(first_multiple_input[0]);

    int c = stoi(first_multiple_input[1]);

    int n = stoi(first_multiple_input[2]);

    vector<string> grid(r);

    for (int i = 0; i < r; i++)
    {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = bomberMan(n, grid);

    for (size_t i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
