#include<iostream>
#include<string>
using namespace std;
int main()
{
	int q,w,e;
	string t1,t2,t3;
	cout<<"RUN : ทดสอบด้วยการป้อน A , B ,C ตามลำดับ\n";
	cout<<"Enter character :";
	cin >> t1;
	cout<<"Enter Character :";
	cin >> t2;
	cout<<"Enter Character :";
	cin >> t3;
	if (t1=="A")
		q=10;
	else if (t1=="B")
		q=20;
	else if (t1=="C")
		q=30;
	if (t2=="A")
		w=10;
	else if (t2=="B"
		)w=20;
	else if (t2=="C")
		w=30;
	if (t3=="A")
		e=10;
	else if (t3=="B")
		e=20;
	else if (t3=="C")
		e=30;
	cout <<t1<<"="<<q<<"'"<<t2<<"="<<w<<"'"<<t3<<"="<<e<<endl;
	cout <<t1<<"+"<<t2<<"+"<<t3<<"="<<q<<"+"<<w<<"+"<<e<<"="<<q+w+e<<endl;

    system("pause");
	return(0);
}
