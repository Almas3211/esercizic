#include <iostream>
using namespace std; 

int main() {

int m[3][3];

int i,j,p=1,max=0;

for (i=0;i<3;i++) {
    for (j=0;i<3;j++) {
        cout << "inserisci un numero nell posizione " <<i<< " e " <<j<<endl;
        cin >> m[i][j];
    }
      
}
for (i=0;i<3;i++) { 
    for (j=0;i<3;j++) {
        if (m[i]==m[j]) { 
            p=p*m[i][j];
            if(m[i][j]>max) { 
                max=m[i][j];
            }
            }

    }
    
}
cout<<"Il prodotto dei numeri sulla diagonale è di ";cout<<p;
cout<<"Il max è ";cout<<max;

}
