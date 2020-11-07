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

    int A[3];

    cin >> A[0] >> A[1] >> A[2];

    sort(A, A + 3);

    cout << A[0] << " " << A[1] << " " << A[2] << endl;

    return 0;
}