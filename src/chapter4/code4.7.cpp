#include <iostream>
#include <vector>
using namespace std;
//フィボナッチ数列の第N項を求めるfor文での実装。
int main()
{
    vector<long long> F(50);
    F[0] = 0, F[1] = 1;
    for(int N = 2; N < 50; ++N){
        F[N] = F[N - 2] + F[N - 1];
        cout << N << "項目の値 = "<< F[N] << endl;
    }
}
