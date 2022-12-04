# Gitチュートリアル
GitHubの使い方を学ぶために本チュートリアルを活用します

## :memo: コミットメッセージ
- １行目　　：コミットする変更内容の要約
- ２行目　　：空行
- ３行目以降：変更理由や詳細内容

## :computer: コードの挿入
for文で１～１０の総和を求めるサンプルプログラム
```c:sample.c
#include <stdio.h>
int main(void)
{
    int i;
    int sum = 0;
    
    for(i = 1 ;i <= 10 ;i++ )
    {
        sum = sum + i;
    }
    printf("sum=%d\n",sum);
    return(0);
}
```

## :link: リンクの挿入
[Google](https://www.google.co.jp/)

## :ballot_box_with_check: チェックリスト
- [ ] チェックリスト１
- [x] チェックリスト２

## :bulb: Tips
- ブランチの作成と移動をセットで実行するコマンド
```
git checkout -b ブランチ名
```
このコマンドは下記2つのコマンドを実行するのと同じ
```
git branch ブランチ名
git checkout ブランチ名
```

## :soccer: 日本代表の試合日程
1. 2022/11/23(Wed)
2. 2022/11/27(Sun)
3. 2022/12/2(Fri)