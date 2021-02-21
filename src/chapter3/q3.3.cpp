#include <iostream>
#include <vector>
using namespace std;
//章末問題3.3
//与えられたN個(N >= 2)の整数から2番目に小さい値を返す。(O(N)の計算量で)
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
    int second_min_value = INF;
    for (int i = 0; i < N; ++i)
    {
        if(min_value > a[i]){
            second_min_value = min_value;
            min_value = a[i];
        }else if(second_min_value > a[i]){
            second_min_value = a[i];
        }
    }

    //結果出力
    cout << second_min_value << endl;
}