# Gitチュートリアル
for learning how to use GitHub
- practice00

## :memo: コミットメッセージ
- １行目　　：コミットする変更内容の要約
- ２行目　　：空行
- ３行目以降：変更理由や詳細内容

（記載例）
:shirt: README.mdの修正
（空行）
文言の修正

## :computer: コードの挿入
- for文で１～１０の総和を求めるサンプルプログラム
'''c:sample.c
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
'''

## :link: リンクの挿入
[Google](https://www.google.co.jp/)

## :ballot_box_with_check: チェックリスト
- [ ] チェックリスト１
- [x] チェックリスト２