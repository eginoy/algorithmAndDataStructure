#include <iostream>
#include <vector>
using namespace std;
//1からNまでの総和を求める再帰関数
int func(int N){
    if(N == 0){
        return 0;
    }else{
        return N + func(N - 1);
    }
}

int main()
{
    //結果出力
    cout << func(5) << endl;
}
