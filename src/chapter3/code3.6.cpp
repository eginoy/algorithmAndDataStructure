#include <iostream>
#include <vector>
using namespace std;
//部分和問題

int main(){
    //入力を受け取る
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0; i < N; ++i) cin >> a[i];

    //bitは2^N通りの部分集合全体を動きます
    bool exist =false;
    for(int bit = 0; bit < (1 << N); ++bit){
        int sum = 0; //部分集合の和を保持する

        for(int i = 0; i < N; ++i){
            //部分集合の組み合わせの中にiが存在していればsumへ足す
            if(bit & (1 << i)) sum += a[i];
        }

        if(sum == W) exist = true;
    }

    //結果出力
    if(exist){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}