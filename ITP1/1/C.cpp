#include <iostream>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    int x, y, S, R;
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());

    cin >> x >> y;
    S = x * y;
    R = x * 2 + y * 2;
    cout << S << " " << R << endl;

    return 0;
}