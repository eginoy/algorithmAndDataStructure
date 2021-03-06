#include <iostream>
#include <vector>
using namespace std;

//トリボナッチ数列の第N項の値を求める再帰関数を求める
long long toribo(int N)
{
    if(N == 0) return 0;
    if(N == 1) return 0;
    if(N == 2) return 1;

    return toribo(N - 1) + toribo(N - 2) + toribo(N - 3);
}

int main()
{
    //入力
    int N;
    cin >> N;
    cout << N << "項目の値:" << toribo(N) << endl;
}