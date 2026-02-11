#include <iostream>
using namespace std;

main()
{
    int a, b, z;

    cout << "Enter number one : ";
    cin >> a;
    cout << "Enter number two : ";
    cin >> b;

    z = a > b ? a : b;

    cout << "max : " << z;
}
