#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main()
{
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());

    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 32;
        else if ('A' <= str[i] && str[i] <= 'Z')
            str[i] += 32;
    }

    cout << str << std::endl;

    return 0;
}