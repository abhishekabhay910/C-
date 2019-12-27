#include<iostream>
using namespace std;
class building {
int rooms;
int floors;
public:
void set_rooms(int num);
int get_rooms();
void set_floors(int num);
int get_floors();
};
class house : public building {
int bedrooms;
public:
void set_bedrooms(int num);
int get_bedrooms();
};
void building::set_rooms(int num)
{
rooms = num;
}
void building::set_floors(int num)
{
floors = num;
}
int building::get_rooms()
{
return rooms;
}
int building::get_floors()
{
return floors;
}
void house::set_bedrooms(int num)
{
bedrooms = num;
}
int house::get_bedrooms()
{
return bedrooms;
}
int main()
{ house h;
h.set_rooms(12);
h.set_floors(3);
h.set_bedrooms(5);
cout<<"house has "<<h.get_rooms()<<" rooms";
cout<<"\nhouse has "<<h.get_floors()<<" floors";
cout<<"\nhouse has "<<h.get_bedrooms()<<" bedrooms";
return 0;
}
