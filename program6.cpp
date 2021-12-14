// Calculates the mean and standard deviation two ways
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    float sum, sumsq2, xbar, sigma1, sigma2;
    float x[127];

    for (int i = 0; i < 127; i++)
    {
        x[i] = i + 100000;
    }

    sum = 0;
    sumsq2 = 0;
    // textbook algorithm that calculates sum(x^2) + xbar*sum(x)
    for (int i = 0; i < 127; i++)
    {
        sum += x[i];
        sumsq2 += pow((double)x[i], 2.);
    }

    xbar = sum / 127;
    sigma1 = sqrt((sumsq2 - sum * xbar) / 126.);
    // second method that calculates (x-xbar)^2 to reduce overflow errors
    sumsq2 = 0;
    for (int i = 0; i < 127; i++)
    {
        sumsq2 += pow((double)(x[i] - xbar), 2.);
    }
    sigma2 = sqrt(sumsq2 / 126);
    cout << "xbar = " << xbar << " sigma1 = " << sigma1 << " sigma2 = " << sigma2 << endl;
    return 0;
}