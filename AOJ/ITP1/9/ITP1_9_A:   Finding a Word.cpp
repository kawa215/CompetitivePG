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
	string W, T;
	int count = 0;

	cin >> W;
	while (cin >> T) {
		if(T == "END_OF_TEXT")break;
		transform(T.begin(), T.end(), T.begin(), ::tolower);
		if(T == W)count++;
	}
	cout << count << endl;

	return 0;
}