#include <iostream>
#include <vector>
using namespace std;
//章末問題3.5
//与えられたN個の整数がすべて偶数なら2で割った値に置き換えるという操作を操作が行えなくなるまで行い、
//何回操作を行うことになるかを求める

int how_many_times_divide_two(int n){
    int count = 0;
    while(n % 2 == 0){
        ++count;
        n = n / 2;
    }
    return count;
}

int main()
{
    //入力を受け取る
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    int min_count = 2000000000;
    for(auto n : a){
        int count = how_many_times_divide_two(n);
        if(min_count > count) min_count = count;
    }

    //結果出力
    cout << min_count << endl;
}
