// e700.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 
// 
//星座	日期
//水瓶座	1 / 21 ~2 / 19 ==> 121 / 219
//雙魚座	2 / 20 ~3 / 20 ==> 220 / 320
//牡羊座	3 / 21 ~4 / 20 ==> 321 / 420
//金牛座	4 / 21 ~5 / 21 ==> 421 / 521
//雙子座	5 / 22 ~6 / 21 ==> 522 / 621
//巨蟹座	6 / 22 ~7 / 22 ==> 622 / 722
//獅子座	7 / 23 ~8 / 21 ==> 723 / 821
//處女座	8 / 22 ~9 / 23 ==> 822 / 923
//天秤座	9 / 24 ~10 / 23 => 924 / 1023
//天蠍座	10 / 24 ~11 / 22 > 1024/ 1122
//射手座	11 / 23 ~12 / 22 > 1123/ 1222
//摩羯座	12 / 23 ~1 / 20 => 1223 / 120
//
//

#include <iostream>

using namespace std;


int main()
{
    int m, d;

    while (scanf("%d/%d", &m, &d) != EOF)
    {
        d += 100 * m;

        if (d >= 121 && d <= 219)
            cout << "水瓶座" << endl;
        else if (d >= 220 && d <= 320)
            cout << "雙魚座" << endl;
        else if (d >= 321 && d <= 420)
            cout << "牡羊座" << endl;
        else if (d >= 421 && d <= 521)
            cout << "金牛座" << endl;
        else if (d >= 522 && d <= 621)
            cout << "雙子座" << endl;
        else if (d >= 622 && d <= 722)
            cout << "巨蟹座" << endl;
        else if (d >= 723 && d <= 821)
            cout << "獅子座" << endl;
        else if (d >= 822 && d <= 923)
            cout << "處女座" << endl;
        else if (d >= 924 && d <= 1023)
            cout << "天秤座" << endl;
        else if (d >= 1024 && d <= 1122)
            cout << "天蠍座" << endl;
        else if (d >= 1123 && d <= 1222)
            cout << "射手座" << endl;
        else
            cout << "摩羯座" << endl;
    }

    return 0;
}

/*
switch (m)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            default:
                break;
        }
*/
