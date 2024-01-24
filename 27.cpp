#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 5; i++){
        int a = i;
        for(int j = 1; j <= 9; j++){
            if(j <= 4+i && j >= 6-i){
                cout << a;
                j <= 4 ? a-- : a++;
            }
            else{
                cout << " ";
            }
            
            
        }
        
        cout << endl;
    }
}

 
