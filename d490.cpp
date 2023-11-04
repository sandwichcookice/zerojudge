/* 解題思路 : 
*  用迴圈來處理共有幾次， 如果 此數可以被2所整除(就代表為偶數) 便將其相加
* 
*/


#include <iostream>

using namespace std;

int main()
{
    int a, b, x=0;
    scanf("%d %d", &a, &b);
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