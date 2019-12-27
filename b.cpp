#include<iostream>
using namespace std;
class perimeter
{
	int a,b,result;
    	public:
       	perimeter(int l){a=l;b=0; result=4*l; }
       	perimeter(int l, int w){ a=l;b=w; result=2*(l+b); }
       	void displayperimeter()
	{
        cout<<"\nPerimeter "<<result;
       	}
	void displaymember()
	{
	if(b==0) cout<<"\nlength of side of square= "<<a;
	else cout<<"\nlength of rectangle= "<<a<<"\nbreadth of rectangle= "<<b;
	}
};
int main()
{
    	perimeter p1(11), p2(36,5);
    	cout<<"Perimeter when one argument is passed.";
    	p1.displayperimeter();
	p1.displaymember();
    	cout<<"\nPerimeter when two arguments is passed.";
    	p2.displayperimeter();
	p2.displaymember();
    	return 0;
}
