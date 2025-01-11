#include <iostream>
using namespace std; 

int main() {

int m[2][3];

int i,j,p=1;

for (i=0;i<3;i++) {
    for (j=0;i<3;j++) {
        cout << "inserisci un numero nell posizione " <<i<< " e " <<j<<;
        cin >> m[i][j];
    }
}
for (i=0;i<3;i++) { 
    for (j=0;i<3,j++) {
        if (m[i]==m[j]) { 
            p=p*m[i][j];
            }

    }
    
}
cout << "il prodotto dei numeri è "; cout <<p;

}
