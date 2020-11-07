#include <iostream>
#include <algorithm>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    while (1)
    {
        int n, x;
        cin >> n;
        int number[n];
        int num2020[4];
        int count = 0;

        num2020[0] = 2;
        num2020[1] = 0;
        num2020[2] = 2;
        num2020[3] = 0;

        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> number[i];
        }

        for (x = 0; x < n; x++)
        {
            if (number[x] == num2020[0])
            {
                if (number[x + 1] == num2020[1])
                {
                    if (number[x + 2] == num2020[2])
                    {
                        if (number[x + 3] == num2020[3])
                        {
                            count++;
                        }
                    }
                }
            }
        }

        cout <<count << endl;
        // cout << "min:" << min << endl;
        // cout << "all:" << all << endl;
    }

    return 0;
}

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// int a,b;
// while(cin>>a>>b,a||b){
// if(a>b)swap(a,b);
// cout<<a<<" "<<b<<endl;
// }
// }