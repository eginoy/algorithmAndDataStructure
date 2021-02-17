#include <iostream>
#include <vector>
using namespace std;
//最小値を求める
const int INF = 2000000; //十分大きい値で初期化

int main(){
    //入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    //線形探索
    int min_value = INF;
    for (int i = 0; i < N; i++)
    {
        if(a[i] < min_value) {
            min_value = a[i];
        }
    }
    
    //結果出力
    cout << min_value << endl;
}