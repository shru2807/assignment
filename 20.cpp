#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 4; i++){
        char s = 'A'; 
        int n = 1;
        for(int j = 1; j <= 8; j++){
            if(i+j >= 5 && j-i < 5){
                if(j < 5){
                    cout << s;
                    s++;}
                else{
                    cout << n;
                    n++;
                }
            
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}