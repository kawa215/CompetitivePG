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

	string s;
	int n;
	string com;

	cin >> s >> n;

	while (n--)
	{
		int a, b;
		cin >> com >> a >> b;
		if (com == "replace")
		{
			string rep;
			cin >> rep;
			// int r = 0;

			// rep(i, s.size())
			// {
			// 	if (i >= a && i <= b)
			// 	{
			// 		s[i] = rep[r++];
			// 	}
			// }
			s.replace(a, b - a + 1, rep);
		}
		else if (com == "reverse")
		{
			// rep(i, s.size())
			// {
			// 	if (i >= a && i <= b)
			// 	{
			// 		char temp;
			// 		temp = s[i];
			// 		s[i] = s[b];
			// 		s[b] = temp;
			// 		b--;
			// 	}
			// }
			reverse(s.begin() + a, s.begin() + b + 1);
		}
		else
		{
			string t = s.substr(a, b - a + 1);
			cout << t << endl;
			// rep(i, s.size())
			// {
			// 	if (i >= a && i <= b)
			// 	{
			// 		cout << s[i];
			// 	}
			// }
			// cout <<<< endl;
		}
	}

	// cout << int(s.begin() << endl;
	return 0;
}