#include <iostream>
#include <vector>
using namespace std;
//章末問題3.1
//与えられたN個の整数からa[i] = vを満たすiを探し、条件を満たすiが複数ある場合は最大値のiを返す。

int main()
{
    //入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    int found_id = -1;
    for (int i = 0; i < N; ++i)
    {
        if (a[i] == v & found_id < i)
            found_id = i;
    }

    //結果出力
    cout << found_id << endl;
}