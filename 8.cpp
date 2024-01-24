#include <iostream>
using namespace std;
int main()
{
    
    for(int i = 1; i <= 4; i++){
        int k = 0;
        for(int j = 1; j <= 7; j++){
            
            if(i+j <= 4 || j-i > 3){
                
            cout << " ";
           }
           else{
                
                if(j < 5){
                    k++;
                    cout << k;
                    

                }
                    
                else{
                    --k;
                    cout << k;
                    

                }
                    
           }
        }
        
        
        
        
        cout << endl;
    }
}

