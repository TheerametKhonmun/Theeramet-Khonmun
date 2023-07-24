#include <iostream> 
#include <string>
using namespace std; 
int main() 
{ float p;
cout<<"Input C++ Score :";
cin>>p;
cout <<"You "<<((p>=56)?"pass with score ":"fail with score ")<<p<<";"<<endl;
system("pause");
return(0);
}
