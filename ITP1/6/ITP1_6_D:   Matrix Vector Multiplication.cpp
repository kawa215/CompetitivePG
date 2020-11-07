#include <iostream>
#include<algorithm>
// 追加１
#include <fstream>
using namespace std;

int main()
{
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());

    int a,b,c;
    int count = 0;
    cin >> a >> b >> c;
    for (int i = a ; i <= b ; i++){
        if( c % i == 0) count++;
    }
    cout << count << endl;

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