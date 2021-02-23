#include <iostream>
#include <vector>
using namespace std;
//章末問題3.6
int main()
{
    //入力を受け取る
    int K,N;
    cin >> K >> N;
    int pair_count = 0;

    for(int x = 0; x <= K; x++){
        for(int y = 0; y <= K; y++){
            int z = N - x - y ;
            if(z >= 0 && z <= K){
                ++pair_count;
            }
        }
    }

    //結果出力
    cout << pair_count << endl;
}
