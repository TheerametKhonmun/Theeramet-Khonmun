#include <iostream>
#include <string>
#include <time.h>
using namespace std;
void checknum(int r, int g); 
int main() {
    int g, r, t = 0;
    cout << "###Welcome to guessing number game###\n";
    srand(time(NULL));
    r = 1 + rand() % 10;
    cout << "Secret number has been chosen\n";
    do {
        cout << "Guess the number (1 to 10): ";
        cin >> g;
		t++;
        checknum(r, g);
    } while (r != g);
    cout << "You made " << t << " guesses\n";
    system("pause");
    return 0;
}

void checknum(int r, int g  ) { 
    if (g < r)
        cout << "The secret number is higher\n";
    else if (g > r)
        cout << "The secret number is lower\n";
    else
        cout << "Congratulations!\nThe secret number is " << r << endl;
}