#include <iostream>
using namespace std;

int main(){
    int n = 7;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            
            if(i+j <= 8){
                if(i==1)
                    cout << n-j;
                else
                    cout << n-i-j+1;
                
            }
                
        }
        cout << endl;
    }

}