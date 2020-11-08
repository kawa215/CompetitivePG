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
	char ch;
	int a[26]={};

	while (cin >> ch) {
		ch=tolower(ch);
		if(isalpha(ch)){a[ch-'a']++;}
	}
	for (int i = 0; i < 26; ++i) {
		printf("%c : %d\n",i+'a',a[i]);
	}
	return 0;
}