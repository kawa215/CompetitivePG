#include <iostream>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    int a, b;
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    cin >> a >> b;
    if (a == b)
    {
        cout << "a == b" << endl;
    }
    else if (a > b)
    {
        cout << "a > b" << endl;
    }
    else
    {
        cout << "a < b"
             << endl;
    }

    return 0;
}