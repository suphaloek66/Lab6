#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int e = 0;
    int o = 0;
    while ( i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        if ( i%2 == 0 and i != 0 ){
            e = e+1;
        }
        else if( i%2 != 0){
            o = o+1;
        }
    }
    cout << "#Even numbers = "<< e << endl;
    cout << "#Odd numbers = "<< o << endl;
    return 0;
}
