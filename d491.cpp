/* 解題思路:
*  同 b490  不過在前面加入一個條件 如果 a > b 那麼 兩數交換
*  如果不是， 則跳過。
* 
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, x = 0;
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            x = x + i;
        }
    }

    cout << x;

    return 0;
}
