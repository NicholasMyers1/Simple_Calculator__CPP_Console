#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main()
{float a,b,c;
char val,returnmain;
cout<<"Welcome to the calculator!\n";
cout<<"Decimals can only go to the 5th position past '0', negatives are allowed!\n";
cout<<"Enter the first number you would like to be compiled together: ";
cin>>a;
system("CLS");
cout<<"First number entered: "<<a<<"\n";;
cout<<"Enter the 2nd number: ";
cin>>b;
system("CLS");cout<<"First number entered: "<<a<<"\n"<<"Second number entered: "<<b<<"\n";
//
cout<<"Enter what you would like to do to the numbers in the order you put them!\n"
"You can use:\n"
"'+' or '1' for addition,\n"
"'-' or '2' for subtraction,\n"
"'*' or '3' for multiplication,\n"
"'/' or '4' for division,\n"
"'<' or '5' for greater than,\n"
"'>' or '6' for less than.\n"
"'%' or '7' for percentage (of both numbers).\n"
"'.' or '8' for square root (of both numbers).\n"
": ";
cin>>val;
//+
if (val == '+' || val == '1')
{c = a + b;a + b;cout<<a<<" + "<<b<<" = "<<c<<"\n";Sleep(1000);}
//-
if (val == '-' || val == '2')
{c = a - b;a - b;cout<<a<<" - "<<b<<" = "<<c<<"\n";Sleep(1000);}
//*
if (val == '*' || val == '3')
{c = a * b;a * b;cout<<a<<" * "<<b<<" = "<<c<<"\n";Sleep(1000);}
///
if (val == '/' || val == '4')
{c = a / b;a / b;cout<<a<<" / "<<b<<" = "<<c<<"\n";Sleep(1000);}
//<
if (val == '<' || val == '5')
{c = a < b;a < b;cout<<a<<" < "<<b<<"\n";
if (c == 1){cout<<"True!\n";}
if (c == 0){cout<<"False!\n"<<a<<" > "<<b<<""<<"\n";}
if (a == b || c != 1 && c != 0){cout<<"False!\n"<<a<<" = "<<b<<"\nTrue!";}
Sleep(1000);}
//>
if (val == '>' || val == '6')
{c = a > b;a > b;cout<<a<<" > "<<b<<"\n";
if (c == 1){cout<<"True!\n";}
if (c == 0){cout<<"False!\n"<<a<<" < "<<b<<"\n";}
if (a == b || c != 1 && c != 0){cout<<"False!\n"<<a<<" = "<<b<<"\nTrue!";}
Sleep(1000);}
//%
if (val == '%' || val == '7')
{float percentage;cout<<"Enter the percentage you would like to get: ";cin>>percentage;
if (percentage == percentage){c = a * b / percentage;cout<<"Your percentage is: "<<c<<"%\n";}}
//sqrt
if (val == '.' || val == '8')
{c = a + b;cout<<"The sqrt of "<<c;
c = sqrt(c);cout<<" is: "<<c<<"\n";}
//
////end part
cout<<"If you type anything other than '1' or 'CTRL' + 'C'\n"
"you get a blank screen and if a blank screen shows up type '1' and enter!";
cout<<"\nType '1' to reset the calculator or 'CTRL' + 'C' to exit: ";
cin>>returnmain;
if (returnmain == '1'){system("CLS");return main();}
//error state for floats
system("CLS");
while (!(cin>>returnmain))
{cin.clear();
string error;
cin>> error;
system("CLS");
cout<< "Error: You have entered an invalid value!\nResetting!";Sleep(1000);
system("CLS");return main();}cin.clear();
//
cout<<"Exiting...";
}
