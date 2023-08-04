#include <iostream>
#include <string>
using namespace std;
int main()

{
int age;
string sex;
float BMI,w,h;
cout <<"Enter age :";
cin  >> age;
cout << "Gender:";
cin  >> sex;
cout <<"Enter height :";
cin  >> h;
cout <<"Enter weight :";
cin >> w;
BMI = w/((h/100)*(h/100));
     if (BMI <=18.5)cout<<"BMI ="<<BMI<<"kg/m2"<<"Underweight\n";
else if ((BMI >=18.5)&&(BMI <= 25))cout<<"BMI ="<<BMI<<"kg/m2"<<"Normal\n";
else if ((BMI >=25)&&(BMI <= 30))cout<<"BMI ="<<BMI<<"kg/m2"<<"Overweight\n";
else if ((BMI >=30)&&(BMI <= 3.5))cout<<"BMI ="<<BMI<<"kg/m2"<<"Obseity\n";

system("pause");
return(0);
}