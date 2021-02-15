function code3_3(){
    //線形探索法
    //aの中から最小値を求める
    const a = [4,3,12,7,2,11]
    let INF = 2000000 //十分に大きな値
    let min_value = INF

    for (let i = 0; i < a.length; i++) {
        if(a[i] < min_value){
            min_value = a[i] //最小値を更新
        }
    }
    
    console.log(min_value)
}
code3_3()