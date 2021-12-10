#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i;
    int terms[32];
    int number = atoi(argv[1]);

    for (int i = 0; i < 32; i++)
    {
        terms[i] = 0;
    }
    for (int i = 0; i < 32; i++)
    {
        terms[i] = number % 2;
        number /= 2;
    }

    cout << "Number of bytes used= " << sizeof(number) << endl;
    for (int i = 0; i < 32; i++)
    {
        cout << "Term nr: " << i << " Value= " << terms[i];
        cout << endl;
    }
    return 0;
}