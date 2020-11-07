#include <iostream>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    int timeS,h,m,s;
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    cin >> timeS;
    cout << timeS/3600 << ":" << timeS%3600/60 << ":" << timeS %60 <<endl;

    return 0;
}