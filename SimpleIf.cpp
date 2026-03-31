#include <iostream>
using namespace std;

int main(){
    int x;

    srand( time(0) );
    x = rand() % 10;

    if (x == 5){
        x = x + 1;
        cout << "x value has been corrected to : " << x << endl;
    }

    cout << "The given number = " << x;
}
