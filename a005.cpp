#include <iostream>

using namespace std;

int main()
{
    
    int time;
    int a[5];

    cin >> time;

    for (int i = 0; i < time; i++)
    {
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        if (a[3] - a[2] == a[2] - a[1])
            a[4] = a[3] + (a[3] - a[2]);
        else
            a[4] = a[3] * (a[3] / a[2]);

        for (int i = 0; i < 5; i++)
            cout << a[i] << " ";
        cout << endl;
    }



}
