#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

using namespace std;

// C version
// int main(int argc, char *argv[])
// {
//     double r, s;
//     r = atof(argv[1]);
//     s = sin(r);
//     printf("Hello World! sin(%g)=%g\n", r, s);
//     return 0;
// }

// C++ version
int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        cout << "Bad input: " << argv[0] << " you need to a number" << endl;
        exit(1);
    }
    double r = atof(argv[1]);
    double s = sin(r);
    cout << "Hello World! sin(" << r << ")=" << s << endl;
    return 0;
}