#include <iostream>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    int a, b, c;
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    cin >> a >> b >> c;
    if (a < b)
    {
        if (b < c)
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}