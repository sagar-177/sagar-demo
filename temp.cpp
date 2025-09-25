#include <iostream>
using namespace std;

int main() {

int c,f,x;

cout << "Enter your Choice : 1-2 = ";
cin >> x;

switch(x)
{
    case 1:
    cout << "Enter Temperature in Fahrenheit : ";
    cin >> f;
  c = (f-32)*5/9;
    cout << "Temperatur in celcius : " << c << endl;
break;
    case 2:
    cout << "Enter Temperatur in Celcius : ";
    cin >> c;
    f = 9*c/5 + 32;
    cout << "Temperatur in Fahrenheit : " << f;
    break;
}

    return 0;
}