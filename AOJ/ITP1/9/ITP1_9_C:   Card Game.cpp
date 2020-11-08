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
	int n;
	string a, b;
	int res[2] = {};

	cin >> n;
	rep(i, n)
	{
		cin >> a >> b;
		if (a > b)
			res[0]+=3;
		else if (a == b)
		{
			res[0]++;
			res[1]++;
		}
		else
			res[1]+=3;
	}

	cout << res[0] << " " << res[1] << endl;

	return 0;
}