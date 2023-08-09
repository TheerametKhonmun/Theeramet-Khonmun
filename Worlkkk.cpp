#include <iostream>
#include<string>
using namespace std;
int main() 
{
    
	int choice;
        cout << "1.Align Left" <<endl;
        cout << "2.Align Right" <<endl;
        cout << "3.Center" <<endl;
        cout << "4.Exit\n";
		cout<<"*******************\n";
		cout << "Select Menu No. :";
        cin >> choice;
		do{

    switch (choice) {
        case 1:
            int height1;
            cout << "Input number of line: ";
            cin >> height1;

            for (int i = 1; i <= height1; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*"; 
                }
                cout << endl;
            }
            break;
        case 2:
            int height2;
            cout << "Input number of line: ";
            cin >> height2;

            for (int i = 1; i <= height2; i++) {
                for (int j = 1; j <= height2 - i; j++) {
                    cout << " "; 
                }
                for (int k = 1; k <= i; k++) {
                    cout << "*"; 
                }
                cout << endl;
            }
            break;
		  case 3:
            int height3;
            cout << "Input number of line: ";
            cin >> height3;

            for (int i = 1; i <= height3; i++) {
                for (int j = 1; j <=height3 - i; j++) {
                    cout <<" "; 
                }
                for (int k = 1; k <=i*2-1 ; k++) {
                    cout << "*"; 
                }
                cout << endl;
            }
            break;
      
            cout << "Exit." << endl;
            break;
    }
		}while(false);
	system("pause");
    return 0;
}
