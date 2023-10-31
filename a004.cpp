#include <iostream>

using namespace std;

int main()
{
    bool leapyear=false;

    int year;

    while (cin >> year)
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
            cout << "閏年" << endl;
        else
            cout << "平年" << endl;

    }

    
}
