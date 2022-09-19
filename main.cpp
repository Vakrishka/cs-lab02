//
//  main.cpp
//  project
//
//  Created by Вадим on 07.09.2022.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    if (a<b)
            cout <<"Min = " << a << '\n';
        else
            cout <<"Min = " << b << '\n';

    cout << "Sum: " << a + b << endl;
    cout << "Raz: " << a - b << endl;
    cout << "Proiz: " <<a*b<< endl;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
}
