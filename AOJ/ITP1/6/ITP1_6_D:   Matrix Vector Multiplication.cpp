#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    int n, m;

    cin >> n >> m;

    int a[n][m];

    int b[m];
    int c[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    rep(i, m)
    {
        cin >> b[i];
    }


    rep(i, n)
    {
        c[i] = 0;
    }

    rep(i, n)
    {
        rep(j, m)
        {
            c[i] += a[i][j] * b[j];
        }
    }

    rep(i, n)
    {
        cout << c[i] << endl;
    }

    return 0;
}