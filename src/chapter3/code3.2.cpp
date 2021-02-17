#include <iostream>
#include <vector>
using namespace std;

//特定の要素の存在する添字(インデックス)を取得する
int main(){
    //入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    //線形探索
    int found_id = -1; //インデックスとしてありえない数値で初期化
    for (int i = 0; i < N; i++){
        if(a[i] == v){
            found_id = i; //見つけた添字を記録
            break;
        }
    }
    
    //結果出力(-1のときは見つかっていない)
    cout << found_id << endl;
}