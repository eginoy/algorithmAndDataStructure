function code3_2(){
    //線形探索法
    //条件を満たすものが存在する場所も知る
    //aの中からNを探す
    const a = [4,3,12,7,11]
    const N = 7

    var found_id = -1 //ありえない値で初期化しておく
    for (let i = 0; i < a.length; i++) {
        if(a[i] === N){
            found_id = i //見つけた添字を記録
            break
        }
    }
    
    console.log(found_id)
}
code3_2()