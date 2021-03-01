#include <iostream>
#include <vector>
using namespace std;
//fibo(N)の答えをメモ化する配列
vector<long long> memo;

long long fibo(int N){
    //ベースケース
    if(N == 0){
        return 0;
    }else if(N == 1){
        return 1;
    }
    //memoをチェック(すでに計算済みならば答えをリターンする)
    if(memo[N] != -1) return memo[N];

    //答えをmemo化しながら再帰呼び出し
    return memo[N] = fibo( N - 1 ) + fibo(N - 2);
}

int main()
{
    int a;
    cin >> a;
    //memo化用配列を-1で初期化する
    memo.assign(a,-1);

    //fibo49を呼び出す
    fibo(a - 1);

    // memo[0], ... ,memo[49]に答えが格納されている
    for(int N = 2; N < a; N++){
        cout << N << "項目:" << memo[N] << endl;
    }
}