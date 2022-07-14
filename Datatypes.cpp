#include <iostream>
#include <string>
using namespace std;

//this mf is also case sensitive

int main() {
   string nam1 = "ooo";
   int num1 = 0;
   short num2 = 0;
   long num3 = 5;
   double num4 = 658777897;
   char o = 'g'; // use one ' ' here double wont work.
   const float num6 = 6.09f; // with const you cant modify it.
   bool istall = true;

   cout << nam1 << num1 << num2 << num3 <<  num6 << o << !istall << endl;
   cout << !istall;
   

    //casting
    cout << int(num6) << endl ;

    //pointers - memory address of variables

    cout << &num4;


    return 0;
}
