#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
int num[4],total=0,max=0,min=0;
string name[4];
for(int i=0;i<=3;i++)
{	cout<<"Name["<<i<<"]:";
	cin>>name [i];
	cout<<"Score["<<i<<"]:";
	cin>>num[i];
}
	cout<<"-------------------------"<<endl;
	cout<<"Name		Score"<<endl;
	cout<<"-------------------------"<<endl;
for(int i=0;i < 4;i++){
	cout<<name[i]<<"		"<<num[i]<<endl;
	total = total + num[i];
	if(num[i] > max)
		max = num[i];
	min=num[0];
}
{for(int i=0; i<4;i++)
	if(num[i] < min)
		min = num[i];
}
	cout<<"-------------------------"<<endl;
	cout<<"Max Score= "<<max<<endl;
	cout<<"Min Score= "<<min<<endl;
	cout<<"Total Score = "<<total<<endl;
	cout<<"Average Score = "<<(float)total/4<<endl;
	
	system("pause");
	return 0;
}