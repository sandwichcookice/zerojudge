#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    bool b = false;
    int x = 0;

    while (true)
    {
        cin >> str;
        if (str[0] == '0' && str.length() == 1 || b == true)
            break;
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = toupper(str[i]);
            switch (str[i])
            {
            case 'A':
                x += 1;
                break;
            case 'B':
                x += 2;
                break;
            case 'C':
                x += 3;
                break;
            case 'D':
                x += 4;
                break;
            case 'E':
                x += 5;
                break;
            case 'F':
                x += 6;
                break;
            case 'G':
                x += 7;
                break;
            case 'H':
                x += 8;
                break;
            case 'I':
                x += 9;
                break;
            case 'J':
                x += 10;
                break;
            case 'K':
                x += 11;
                break;
            case 'L':
                x += 12;
                break;
            case 'M':
                x += 13;
                break;
            case 'N':
                x += 14;
                break;
            case 'O':
                x += 15;
                break;
            case 'P':
                x += 16;
                break;
            case 'Q':
                x += 17;
                break;
            case 'R':
                x += 18;
                break;
            case 'S':
                x += 19;
                break;
            case 'T':
                x += 20;
                break;
            case 'U':
                x += 21;
                break;
            case 'V':
                x += 22;
                break;
            case 'W':
                x += 23;
                break;
            case 'X':
                x += 24;
                break;
            case 'Y':
                x += 25;
                break;
            case 'Z':
                x += 26;
                break;
            default:
                b = true;
                break;
            }
        }

        if (b == true)
        {
            cout << "Fail" << endl;
        }
        else
            cout << x << endl;
        x = 0;
        b = false;
    }

}
