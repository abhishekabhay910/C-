#include<iostream>
using namespace std;
class tim{
	int hour, min, sec;
	public:
	tim(int x)
	{	sec=x;
	}
	void cal();
	void show();
};
void tim::cal()
{
	min=sec/60;
	hour=min/60;
	min=min%60;
	sec=sec%60;
}
void tim::show()
{
	cout<<hour<<"hour "<<min<<"minute "<<sec<<"sec ";
}
int main()
{
	int x;
	cout<<"Enter time in second\n";
	cin>>x;
	tim ob(x);
	ob.cal();
	ob.show();
	return 0;
}
