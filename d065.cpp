// 解題思路:
// 三數比較大小
// 引入標頭檔 : algoritihm
// 裡面有max() 取最大值可用
// 因為要取三數大小 所以要先取前面兩樹的大小 在跟後面剩下的比大小
// 寫法為 cin >> a, b, c;  
// d = max(a,b) e = max(d,c) 
// 可以化簡為
// d = max(max(a,b), c) 
// cout <<　d;
//可繼續化簡為
// cout << max(max(a,b),c)

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    cout << max(max(a, b), c);
}
