#include <iostream>
using namespace std;
int main(){
    for(int i = 0; i < 4; i++){
        char s = 'A';
        for(int j = i; j >= 0; j--){
            if(j <= i){
                cout << char(s+j);
            }
            else{
                cout << " ";
            }
            
        }
        
        cout << endl;
    }
}

 
