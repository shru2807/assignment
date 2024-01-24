#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 4; i++){
        char s = 'A'; 
        for(int j = 1; j <= 7; j++){
            if(i+j >= 5 && j-i < 4){
                cout << s;
                j < 4 ? s++ : s--;
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}