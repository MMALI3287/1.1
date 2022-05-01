#include <iostream>
using namespace std;
void cbv(int a, int b)
{
    a = 10;
    b = 20;
}
void cbr(int &a, int &b)
{
    a = 12;
    b = 23;
}
void cba(int *a, int *b)
{
    *a = 22;
    *b = 33;
}
int main()
{
    int a = 1;
    int b = 2;
    cout << "Before cbv" << endl
         << a << " " << b << endl;
    cbv(a, b);

    cout << "After cbv" << endl
         << a << " " << b << endl;
    cout << "Before cbr" << endl
         << a << " " << b << endl;
    cbr(a, b);
    cout << "After cbr" << endl
         << a << " " << b << endl;
    cout << "Before cba" << endl
         << a << " " << b << endl;
    cba(&a, &b);
    cout << "After cba" << endl
         << a << " " << b << endl;
}