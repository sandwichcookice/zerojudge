#include <iostream>

using namespace std;

int main()
{
    bool leapyear = false;

    int year;

    while (scanf("%d",&year) != EOF)
    {
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
            cout << "a leap year" << endl;
        else
            cout << "a normal year" << endl;

    }


}
