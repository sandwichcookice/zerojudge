#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //公式解 (-b +- b^2 - 4 * a * c) / 2 * a
    // sqrt() <== 求平方根 *需include cmath

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    float discriminant = b * b - 4 * a * c, x1, x2;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two different roots x1=" << x1 << " , x2=" << x2;
    }
    else if (discriminant == 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "Two same roots x=" << x1;
    }
    else
        cout << "No real root";

    return 0;
}
