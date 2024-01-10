#include <iostream>

using namespace std;

int main()
{
    int time = 0;

    int x = 0, y = 0, z = 0; //x=3k, y=3k+1, z=3k+2

    cin >> time;

    for (int i = 0; i < time; i++)
    {
        int mub = 0;
        cin >> mub;
        mub = mub % 3;
        switch (mub)
        {
        case 0:
            x++;
            break;
        case 1:
            y++;
            break;
        case 2:
            z++;
            break;
        default:
            break;
        }
    }

    printf("%d %d %d", x, y, z);

    return 0;
}
