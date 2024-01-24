#include <iostream>
using namespace std;
int main(){
    int n = 6;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= i){
                if(j % 2 == 0){
                    cout << "0";
                }
                else{
                    cout << "1";
                }
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}