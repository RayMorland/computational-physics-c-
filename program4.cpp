// Program to calculate exp(-x)
#include <iostream>
#include <math.h>

using namespace std;

#define TYPE double
#define PHASE(a) (1 - 2 * (abs(a) % 2))
#define TRUNCATION 1.0E-10

TYPE factorial(int n);

int main()
{
    int n;
    TYPE x, term, sum;
    for (x = 0.0; x < 100.0; x += 10.0)
    {
        sum = 0.0;
        n = 0;
        term = 1;
        while (fabs(term) > TRUNCATION)
        {
            term = PHASE(n) * (TYPE)pow((TYPE)x, (TYPE)n) / factorial(n);
            sum += term;
            n++;
        }
        cout << "x = " << x << " exp = " << exp(-x) << " series = " << sum;
        cout << " number of terms = " << n << endl;
    }
    return 0;
}

TYPE factorial(int n)
{
    int loop;
    TYPE fac;
    for (loop = 1, fac = 1.0; loop <= n; loop++)
    {
        fac *= loop;
    }
    return fac;
}