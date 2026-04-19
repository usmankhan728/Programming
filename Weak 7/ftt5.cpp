#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, dsct, rt1, rt2;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    cout << "enter the value of c : ";
    cin >> c;

    dsct = (b * b) - (4 * a * c); // this is discemenent i find
    if (dsct > 0)
    {
        rt1 = (-b + sqrt(dsct)) / (2 * a); // quatratic eq amd for underoot i call library
        rt2 = (-b - sqrt(dsct)) / (2 * a);
        cout << "the solution are " << rt1 << " and " << rt2 << endl;
    }
    else if (dsct == 0)
    {
        rt1 = -b / (2 * a);
        cout << "one real solution is " << rt1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagP = sqrt(-dsct) / (2 * a);
        cout << "complex solution is (" << realPart << " + " << imagP << ") and (" << realPart << " - " << imagP << ")" << endl;
    }
    return 0;
}