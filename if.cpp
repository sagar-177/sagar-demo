#include <iostream>
using namespace std;
int main()
{

int age;    
cout << "ENTER YOUR AGE : ";
cin >> age;

if(age >= 18)
{
    cout << "YOU ARE ELIGIBLE TO VOTE";
} else 
{
    cout << "YOU AR'NT ELIGIBLE TO VOTE";
}
    return 0;
}