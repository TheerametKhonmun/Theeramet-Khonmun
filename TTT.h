#include<iostream>
#include<string>
using namespace std;
int main()	
{
	string name;
	float salary,sale,commission;
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter salary:";
	cin>>salary;
	cout<<"Enter sale:";
	cin>>sale;
	cout<<"Enter commission:";
	cin>>commission;
	cout<<"----------Output--------\n";
	cout<<"your name"<<name<<endl;
	cout<<"Total Revenue="<<salary+(sale*(commission/100))<<"bath"<<endl;
	system("pause"); 
	return (0);
}