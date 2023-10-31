#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int hl = str.length();
    for (int i = 0; i < hl; i++)
        str[i] -= 7;

    cout << str;

    return 0;

}
