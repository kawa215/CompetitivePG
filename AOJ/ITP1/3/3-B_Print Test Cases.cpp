#include <iostream>
#include<algorithm>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    int x,y;
    while (1)
    {
        cin >> x >> y;

        if (x == 0 && y == 0) break;
        else if (x > y) {
            swap(x,y);
            cout << x << " " << y << "\n";
        }else {
            cout << x << " " << y << "\n";
        }
        /* code */
    }
    // cout << endl;
    

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