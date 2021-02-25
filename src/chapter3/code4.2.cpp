#include <iostream>
#include <vector>
using namespace std;
//1からNまでの総和を求める再帰関数
//挙動を確認するためのプログラム
int func(int N){
    // 再帰関数を呼び出したことを確認
    cout << "func(" << N << ")を呼び出しました" << endl;
    if(N == 0) return 0;

    //再帰的に答えを求めて出力
    int result = N + func(N - 1);
    cout << N <<"までの和 = " << result << endl;
    return result;
}

int main()
{
    //再帰関数の呼び出し
    func(5);
}
