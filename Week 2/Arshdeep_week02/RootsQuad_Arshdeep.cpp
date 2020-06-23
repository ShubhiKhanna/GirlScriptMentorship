#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int test, a, b, c;
    double x1, x2, d;
    cin >> test;
    while (test--)
    {
        cin >> a >> b >> c;
        d = (b * b) - (4 * a * c);
        if (d == 0)
        {
            x1 = x2 = (-b) / (2 * a);
        }
        if (d < 0)
        {
            cout << "\n Roots are Imaginary\n";
        }
        if (d > 0)
        {
            x1 = ((-b) + sqrt(d)) / (2 * a);
            x2 = ((-b) - sqrt(d)) / (2 * a);
            cout << x1 << " " << x2 << endl;
            // printf("\nx1 = %f", x1);
            // printf("\nx2 = %f\n", x2);
        }
    }
}