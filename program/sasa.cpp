
#include <iostream>
using namespace std;
#define SIZE 50
// This creates the class stack.
class stack {
int stck[SIZE];
int tos;
public:
void init();
void push(int i);
int pop();
};
void stack::init()
{
tos = 0;
}
void stack::push(int i)
{
if(tos==SIZE) {
cout << "Stack is full.\n";
return;
}
stck[tos] = i;
tos++;
}
int stack::pop()
{
if(tos==0) {
cout << "Stack underflow.\n";
return 0;
}
tos--;


return stck[tos];
}
int main()
{
stack stack1, stack2;
// create two stack objects
//stack1.init();
int i=0;
stack1.init();

while( i<=10)
{
stack1.push(1);
stack1.push(3);
stack1.push(55);
stack1.push(5);
stack1.push(4);
stack1.push(1);
stack1.push(3);
stack1.push(4);
stack1.push(9);
i++;
}
cout<<"stack 1"<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;
cout<<stack1.pop()<<endl;

//cout<<stack2.pop()<<endl;

//cout<<stack2.pop()<<endl;

return 0;
}

