#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 7; i++){
        for(int j = 1; j <= 7; j++){
            if(i == j){
                cout << "\\";
            }
            else if(i+j == 8){
                cout << "/";
            }
            else{
                cout << "*";
            }

        }
        cout << endl;
    }
}