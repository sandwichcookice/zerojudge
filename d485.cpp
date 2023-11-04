// 解題思路:
// 如果不用if 只使用算術運算子 來寫的話 可以寫成 range( a~b ) 假設為 4~10 其中的偶數為 4 , 6 , 8 , 10 是四個 
// 所以計算如下 
// ( 10 / 2 ) + 1(對文文來說，0也算偶數) = 6 
// ( 4 / 2 ) = 2 
// 6 - 2 = 4
// 換個例題 range( 0 ~ 10 ) 有 0, 2 , 4 , 6 , 8 , 10 有六個整數
// ( 10 / 2 ) + 1 = 6
//  ( 0 / 2 ) = 0
//  6 - 0 = 6
// 
//  long long c => 因為計算過程中可能導致溢位所以需要long long。
//

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    long long c = floor(b / 2) - ceil(a / 2) + 1;
    cout << c;
}
