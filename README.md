# algorithmAndDataStructure
書籍、アルゴリズムとデータ構造のサンプルコード写経リポジトリ  
dockerでC++の実行環境用意している。  

## 動作確認環境
- Docker version 20.10.2, build 2291f61  
- docker-compose version 1.24.1, build 4667896b

## 実行方法
リポジトリのクローン  
`git clone git@github.com:eginoy/algorithmAndDataStructure.git`  
`cd algorithmAndDataStructure`  

dockerイメージ作成、起動  
`docker-compose up -d`  

作成、起動したコンテナに入る  
`docker-compose exec cppdev /bin/sh`

コンテナ内でcppのビルドと実行
(code3.1.cppをビルドして実行する場合)  
`cd chapter3`  

ビルド  
`g++ code3.1.cpp -o code3.1`  

実行  
`g++ ./code3.1`  

### 参考
https://qiita.com/yuzutarogo/items/d60ba007eae969be53ae