#include <iostream>
using namespace std;
int main(){
    int n = 21;
    int mid = n/2;
    int a;
    for(int i = 1; i <= n; i++){
        i <= mid ? a = i-1 : a = n-i;
        // int a = i-1;
        for(int j = 1; j <= n; j++){
            if(j >= mid+2-i && j <= mid+i && j >= i-mid && j <= mid+n-i+1){
                cout << a%10 << " ";  
                j <= mid ? a++ : a--;
            }
            else{
                cout << "  ";
            }  
        }
        
        cout << endl;
    }
}

