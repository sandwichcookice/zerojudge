// d067.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

using namespace std;

int main()
{
    bool leapyear = false;

    int year;

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
        cout << "a leap year" << endl;
    else
        cout << "a normal year" << endl;


}

