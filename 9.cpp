#include <iostream>
using namespace std;

int main() {
    char a;
    for (int i = 1; i <= 4; i++) {
        a = 'A';
        for (int j = 1; j <= 7; j++) {
            if (j > 5 - i && j < 3 + i) {
                
                cout << " ";
            } else {
                cout << a;
                if(j == 5-i && i != 1) continue;
                (j < 4) ? a++ : a--;
               
            }
        }
        cout << endl;
    }
    return 0;
}

// void ReverseCharBridge(int n) 
// { 
//     for (int i = 0; i < n; i++)  
//     { 
//         for (int j = 'A'; j < 'A' + (2 * n) - 1; j++)  
//         { 
//             if (j >= ('A' + n - 1) + i) 
//                 cout << (char)(('A' + n - 1) -  
//                                (j % ('A' + n - 1))); 
//             else if (j <= ('A' + n - 1) - i) 
//                 cout << (char)j; 
//             else
//                 cout << " "; 
//         } 
//         cout << endl; 
//     } 
// } 



// another way