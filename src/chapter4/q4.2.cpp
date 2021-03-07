#include <iostream>
#include <vector>
using namespace std;

//トリボナッチ数列の第N項の値を求める再帰関数をメモ化して効率化する

vector<long long> memo;

long long toribo(int N)
{
    if(N == 0) return memo[N] = 0;
    if(N == 1) return memo[N] = 0;
    if(N == 2) return memo[N] = 1;

    if(memo[N] != -1) return memo[N];

    return memo[N] = toribo(N - 1) + toribo(N - 2) + toribo(N - 3);
}

int main()
{
    //入力
    int N;
    cin >> N;
    memo.assign(N + 1,-1);

    cout << N << "項目の値:" << toribo(N) << endl;
}