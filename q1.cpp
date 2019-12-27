#include<iostream>
using namespace std;
class matrix{
	int mat[3][3];
	public:
	void get();
	void show();
	void show1();
	friend matrix trans(matrix x);
};
void matrix::get()
{
	int i,j;
	cout<<"Enter the matrix\n";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>mat[i][j];
}
void matrix::show()
{
	int i,j;
	cout<<"Entered matrix\n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	cout<<mat[i][j]<<"\t";}
	cout<<"\n";
	}
}
void matrix::show1()
{
	int i,j;
	cout<<"Transposed matrix\n";
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	cout<<mat[i][j]<<"\t";}
	cout<<"\n";
	}
}
matrix trans(matrix ob1)
{
	matrix x;
	int i,j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{	x.mat[i][j]=ob1.mat[j][i];	}
	}
	return x;
}
int main()
{
	matrix ob1, ob2;
	ob1.get();
	ob1.show();
	ob2=trans(ob1);
	ob2.show1();
	return 0;
}
