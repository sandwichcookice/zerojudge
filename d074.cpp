#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int a[9];

    cin >> i;
    int x = 0;
    for (j = 0;j <= i-1; j++)
    {
        cin >> a[j];
        if (x < a[j])
            x = a[j];
    }
        
    cout << j;

}
