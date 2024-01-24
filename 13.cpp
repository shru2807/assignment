#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 4; i++){
        int n = i;
        for(int j = 1; j <= 7; j++){
            
            if(j >= 5-i && j < 4+i){
                cout << n;
                j < 4 ? n++ : n--;}
            else{
                cout << " ";}

        }
        cout << endl;
    }
}