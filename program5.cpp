#include <iostream>
#include <math.h>

using namespace std;

#define TRUNCATION 1.0E-10

int main()
{
    int loop, n;
    double x, term, sum;

    for (loop = 0; loop <= 100; loop += 5)
    {
        x = (double)loop;
        sum = 1.0;
        term = 1;
        n = 1;
        while (fabs(term) > TRUNCATION)
        {
            term *= -x / ((double)n);
            sum += term;
            n++;
        }
        cout << "x = " << x << " exp = " << exp(-x) << " series = " << sum;
        cout << " number of terms = " << n << endl;
    }
