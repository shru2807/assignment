#include <iostream>
using namespace std;
int main(){
    int n = 7;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i == 1 || i == n || j == 1 || j == n) || (j >= 3 && j <= 5 && i >= 3 && i <= 5) && (i == 3 || i == 5 || j == 3 || j == 5)){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}