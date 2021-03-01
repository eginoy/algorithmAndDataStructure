#include <iostream>
#include <vector>
using namespace std;
//ユークリッドの互除法で整数m,nの最大公約数を求める
int GCD(int m, int n){
    //ベースケース
    if(n == 0){
        return m;
    }

    //再帰呼び出し
    return GCD(n,m % n);
}

int main()
{
    cout << GCD(51,15) << endl; //3
    cout << GCD(15,51) << endl; //3
}
