#include <iostream> 
#include <string> 
using namespace std; 
void ParseName(string &FirstName,string &LastName, const string FullName); 
int main() 
{	string Name = "Stroustrup, Bjarne"; 
	string LastName, FirstName; 
	ParseName(FirstName,LastName,Name); 
	Name = FirstName + " " + LastName; 
	cout << "Name : " << Name << endl; 
	check_char(FirstName);
	system("pause");
return(0); 
} 
void ParseName(string &FirstName,string &LastName, const string FullName) 
{
	int I = FullName.find(","); 
	LastName = FullName.substr(0,I); 
	FirstName = FullName.substr(I+2,FullName.size()); 
	 
}
void check_char(string FirstName)
{ for(int i = 0;i<=FirstName.length();i++)
{ cout<<FirstName.at(1)<<endl;
}
