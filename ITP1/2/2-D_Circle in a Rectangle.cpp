#include <iostream>
#include<algorithm>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    int a, b, c;
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    int W,H,x,y,r;

    cin >> W >> H >> x >> y >> r;

    if (x + r > W || x - r < 0) cout << "No" << endl;
    else if (y + r > H || y - r < 0) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}