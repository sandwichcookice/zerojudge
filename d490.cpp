/* ���D��� : 
*  �ΰj��ӳB�z�@���X���A �p�G ���ƥi�H�Q2�Ҿ㰣(�N�N������) �K�N��ۥ[
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