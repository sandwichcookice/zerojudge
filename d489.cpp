﻿/*
*   輸入說明  
    輸入只有一行，含有三個以空白隔開的正整數，代表伏林的三角形土地的三邊長。

    輸出說明
    請輸出一個整數，代表伏林的土地的價值。其價值會是一個介於 1 和 2147483647 之間的整數。

    土地價格便是以土地面積的平方來計算的

    解題思路 : 已知三角形三邊長 , 求面積 => 海龍公式
    √s(s-a)(s-b)(s-c) // s = a + b + c/2

    已知土地價格為面積之平方 所以可以將公式簡化為 => s(s-a)(s-b)(s-c) 
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, s;

    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c) / 2;

    cout << s * ((s - a) * (s - b) * (s - c));

}

