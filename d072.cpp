#include <iostream>

using namespace std;

int main()
{
    bool leapyear = false;

    int year, i;

    cin >> i;

    for (int j = 1; j <= i; j++)
    {
        cin >> year;
        leapyear = false;
        if (year % 4 == 0)
        {
            if (year % 100 != 0)
                leapyear = true;
            else
            {
                if (year % 400 == 0)
                    leapyear = true;
            }
        }

        if (leapyear == true)
            cout << "Case " << j << ": a leap year" << endl;
        else
            cout << "Case " << j << ": a normal year" << endl;
    }

    return 0;

}
