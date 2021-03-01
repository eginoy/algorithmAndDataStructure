#include <iostream>
#include <vector>
using namespace std;
//フィボナッチ数列の第N項を求める再帰関数。
int fibo(int N){
    //再帰関数を呼び出したことを報告する。
    cout << "fibo("<< N << ")を呼び出しました" << endl;

    //ベースケース
    if(N == 0){
        return 0;
    }else if(N == 1){
        return 1;
    }

    //再帰呼び出し
    int result = fibo(N - 1) + fibo(N - 2);
    cout << N << "項目 = " << result << endl;

    return result;
}

int main()
{
    cout << fibo(6) << endl;
}
