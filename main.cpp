#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / D = " << a / b << '\n';
         if (a<b)
            cout << b;
         else
            cout << a;
         if(b<a)
            cout << b;
         else
            cout << a;
}
