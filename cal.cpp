#include <iostream>
using namespace std;
int main()
{
int a,x,y;
cout << "ENTER X = ";
cin >> x;

cout << "ENTER Y = ";
cin >> y;

cout << "ENTER YOUR CHOICE 1-4 : ";
cin >> a;

switch(a)
{
case 1:
cout << "ADDITION = " << x+y;
break;

case 2:
cout << "SUBTRACTION = " << x-y;
break;

case 3:
cout << "MULTIPLICATION = " << x*y;
break;

case 4:
cout << "DIVISION = " << x/y;
break;

}
return 0;
}