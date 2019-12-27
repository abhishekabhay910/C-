#include<iostream>
using namespace std;
class multiply{
int a, b;
public:
friend int multiplication(multiply x);
void set_ab(int i, int j);
};
void multiply::set_ab(int i, int j)
{
a = i;
b = j;
}
int multiplication(multiply x)
{
return x.a * x.b;
}
int main()
{
multiply n;
n.set_ab(12,25);
cout<<multiplication(n);
return 0;
}

