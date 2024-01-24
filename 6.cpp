#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(i+j <= 5){
            cout << " ";
           }
           else{
            cout << "* ";
           }
        }
        for(int k = 6; k <= i-1; k++){
            cout << "* ";
        }
        
        
        
        cout << endl;
    }
}