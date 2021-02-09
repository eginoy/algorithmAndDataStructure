
function code3_1(){
    //線形探索法
    //aの中からNを探す
    const a = [4,3,12,7,11]
    const N = 7

    let exists = false
    for (let i = 0; i < a.length; i++) {
        if(a[i] === N){
            exists = true //見つかったらフラグをtrueにする
        }
    }
    
    console.log(exists)
}
code3_1()