#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    string s;
    while (cin >> s)
    {
        int i, c = 0;
        if (s[0] == '0')
            break;
        for (i = 0; i < s.size(); i++)
            c += s[i] - '0';
        cout << c << endl;
    }

    return 0;
}