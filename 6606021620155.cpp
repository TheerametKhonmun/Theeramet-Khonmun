#include <iostream>
using namespace std;
void CalCircle();
void Rectangle();
int main()
{   char ch;
	do{
		cout<< "Program Calculate of Area."<<endl;
		cout<<"****************************"<<endl;
		cout<<"1. Circle "<<endl;
		cout<<"2. Rectangle"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Choose Menu :";
		cin>>ch;
		if (ch == '1') CalCircle();
		else if (ch == '2')cout <<"Retangle"<<endl;
			else if (ch =='3') cout <<"Exit"<<endl;
				else cout <<"Wrong Menu"<<endl;
	}while(ch != '3');
	system ("pause");
	return 0;
}
void CalCircle()
{
	float Radius , Area,Circumference;
	cout<<"Input radius :";
	cin>> Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;;
	cout<<endl;
	cout<<"Area of Circle :"<<Area <<endl;
	cout<<"Circumference of Circle :"<<Circumference<<endl;
	cout<<"Diameter of Circle :" <<(2*Radius)<<endl;
}
void Rectangle()
{
	float wide ,high,Area;
	cout<<"Input wide :";
	cin>>wide;
	cout<<"Input  high : ";
	cin>>high;
	Area = wide*high;
	cout<<"Area of Rectangle :"<<Area<<endl;
}