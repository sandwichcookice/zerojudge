// 解題思路 :
// 要看輸入數值為奇數或是偶數 可以用 輸入數%2 <= 輸入數除2取餘數 如果餘數 != 0 那麼就是奇數
//

#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    if (a % 2 != 0)
        cout << "Odd";
    else
        cout << "Even";

    return 0;
}