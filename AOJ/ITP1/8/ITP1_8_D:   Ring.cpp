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
	string s, p;

	cin >> s >> p;
	//円はつなげれば表現できる
	s = s + s;

	// cout << int(s.find(p)) << endl;

	//文字列はfindで検索 インデックスが返り
	if (s.find(p) != -1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}