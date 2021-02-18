#include <iostream>
#include <vector>
using namespace std;
//ペアの和の最小値を求める(K以上の範囲)
const int INF = 2000000; //十分大きい値で初期化

int main(){
    //入力を受け取る
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; ++i) cin >> a[i];
    for(int i = 0; i < N; ++i) cin >> b[i];

    //線形探索
    int min_value = INF;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            int current_check_val = a[i] + b[j];
            
            //和がK未満の場合にチェック
            if(current_check_val > K){
                //最小値の更新
                if(current_check_val < min_value) min_value = current_check_val;
            }
        }
    }

    //結果出力
    cout << min_value << endl;
}