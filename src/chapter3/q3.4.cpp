#include <iostream>
#include <vector>
using namespace std;
//章末問題3.4
//与えられたN個の整数から値を2つ選んで差を取り、その差の最大値をとる(O(N)の計算量で)
int INF = 200000000;
int main()
{
    //入力を受け取る
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    int min_value = INF;
    int max_value = -INF;
    for (int i = 0; i < N; ++i)
    {
       if(min_value > a[i]) min_value = a[i];
       if(max_value < a[i]) max_value = a[i];
    }

    //結果出力
    cout << max_value - min_value << endl;
}