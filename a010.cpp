// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 
//各位在國小時都學過因數分解，都瞭解怎麼樣用紙筆計算出結果，現在由你來敎電腦做因數分解。
//
//因數分解就是把一個數字，切分為數個質數的乘積，如 12 = 2 ^ 2 * 3
//
//其中, 次方的符號以 ^ 來表示

/*解題思路: 短除法
* 例: 10 做分解 = 2*5
*  n 取餘數 (i) 如果餘數為0 則 n / i 持續到 n % i != 0
*  如果餘數!= 0 則 i ++ 
*  持續到 i == n
*/

#include <iostream>

using namespace std;

int main()
{
    
    int n, count=0,t=0;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        count = 0;
        while (n % i == 0)
        {
            if (count > 0)
            {
                n = n / i;
                count += 1;
                if (n % i != 0) 
                {
                    cout << "^";
                    cout << count;
                }
            }
            else
            {
                if (t != 0)
                    cout << " * ";
                cout << i;
                n = n / i;
                count += 1;
                t += 1;
            }
        }
    }

}
