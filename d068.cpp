// d068.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 
// 要求 : 不使用 if
//

#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;

    w = w - (w > 50);

    cout << w;

    return 0;
}