function main(){
    //線形探索法
    //aの中からNを探す
    a = [4,3,12,7,11]
    N = 7

    var exists = false
    for (let i = 0; i < a.length; i++) {
        if(a[i] === N){
            exists = true //見つかったらフラグをtrueにする
        }
    }
    
    console.log(exits)
}
main()