#include<iostream>
using namespace std;
class prime{
	int sum;
	public:
	prime()
	{
	sum=0;
	}
	void show()
	{	cout<<"The sum of all prime number from 1 to 100 is:-"<<sum;
	}
	void cal();
};
void prime::cal()
{
	int num,i,count;
	for(num=1;num<=100;num++)
	{
	count=0;
	for(i=2;i<=num/2;i++)
	{
	if(num%i==0)
		{
		count++;break;
		}
	}
	if(count==0 && num!=1)
	sum=sum+num;
	}
}
int main()
{
	prime ob;
	ob.cal();
	ob.show();
	return 0;
}
