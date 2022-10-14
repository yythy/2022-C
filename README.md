# 2022-C
程式設計
# week06

## 06-1
上週教簡單的畫星星, 重點其實是要先把樓層的鷹架印出來。下週要考「畫金字塔」, 所以老師在 CodeBlocks 先示範上週的畫星星後, 模仿它的鷹架, 先把 1樓 1星, 2樓3星, 3樓5星, 4樓7星, 5樓9星 畫出來。
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int st =i*2-1;
        printf("%d樓,%d星\n",i,st);
    }
}
```

## 06-2
有了前一個作業的練習, 我們了解, 要先把樓層鷹架架好, 再去思考有幾個空格、有幾個星星。經過觀察 1樓4空格1星, 2樓3空格3星, 3樓2空格5星, 4樓1空格7星, 5樓0空格9星, 所以 i樓+space空格=5, space空格 = 5-i; 就可以把5層樓的金字塔建出來了。
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int sp =5-i;
        int st =i*2-1;
        for (int k=0;k<sp;k++){
            printf(" ");
        }
        for (int k=0;k<st;k++){
            printf("*");
    }
    printf("%d¼Ó,%dªÅ®æ,%d¬P\n",i,sp,st);
}
}
```

## 06-3
小學有教「約分」可以把分數約分。不過要找到最大公因數。要怎麼找最大公因數呢? 反正電腦很快嘛, 就交給電腦來暴力算。
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數:");
    int a,b,C;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) C=i;
    }
    printf("找到Ans:%d",C);
}
```

## 06-4
小學在做約分時, 有些題目特別難算, 像是 51/68 可約分成 3/4, 有些小朋友不會知道。57/76 也可以約分成 3/4 天啊好難。其實, 這些題目, 剛好與減法有關。你把 68-51=17 再看看能不能約分。這引出國中、高中教的「輾轉相除法」有關。大的a, 中的b, 取餘數得到小的c=a%b, 如果 c是0, 恭喜你 b就是答案。可以離開迴圈了。
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入兩個數:");
    int a,b,C;
    scanf("%d %d",&a,&b);

    while(1){
        C = a%b;
        printf("a:%d b:%d c:%d");
        if( C==0 ) break;
        a = b;
        b = C;
    }
    printf("中的是:%d",b);
}
```

## 06-5
在第3節課, 老師花了點時間講解(剛剛輾轉相除法)裡面的 break 什麼意思? c = a%b 什麼意思? while(1) 什麼意思? 為了能更清楚了解 while(1) 為什麼是「一直做」的迴圈, 老師利用一堆 if(1) ... if(2) ... 讓大家了解, 其實所有的數值幾乎都成立, 只有 0 是不成立。
```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999)printf("-999成立\n");
    if(-3)printf("-3成立\n");
    if(-2)printf("-2成立\n");
    if(-1)printf("-1成立\n");
    if(0)printf("0不成立\n");
    if(1)printf("1成立\n");
    if(2)printf("2成立\n");
    if(3)printf("3成立\n");
    if(999)printf("999成立\n");
}
```
