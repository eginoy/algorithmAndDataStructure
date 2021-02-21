#include <iostream>
#include <vector>
using namespace std;
//章末問題3.2
//与えられたN個の整数からa[i] = vをいくつ含むか求める。

int main()
{
    //入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int found_count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v) ++found_count;
    }

    //結果出力
    cout << found_count << endl;
}