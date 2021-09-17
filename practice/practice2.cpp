#include <iostream>
using namespace std;
// This function can only throw ints, chars, and doubles.
void Xhandler(int test) throw( char)
{
if(test==0) throw test; // throw int
if(test==1) throw 'a'; // throw char
if(test==2) throw 123.23; // throw double
}
int main()
{
cout << "start\n";
try{
Xhandler(0); //
}
catch(int i) {
cout << "Caught i";
}
catch(char c) {
cout << "Caught c";
}
catch(double d) {
cout << "Caught";
}
}
