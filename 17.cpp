#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(i+j > 6 && j < i+4 && i-4 < j && j < 14-i){
                cout << " ";
            }
            else{
                cout << "*";
            }
        }
        cout << endl;
    }
}