#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 9; j++){
            if(i+j <= 5 || j-i > 4){
            cout << " ";
           }
           else{
            cout << "*";
           }
        }
        
        
        
        
        cout << endl;
    }
}