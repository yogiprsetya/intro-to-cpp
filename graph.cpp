#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char simpulA, simpulB, simpulC, simpulD, simpulE, simpulF, simpulG, simpulH;
    int jarak1, jarak2, jarak3, jarak4, jarak5, jarak6, jarak7, jarak8, jarak9, jarak10;

    cout<<"Graf 8 simpul\n";
    cout<<"Simpul Pertama: ";
    cin>>simpulA;
    cout<<"Simpul Kedua: ";
    cin>>simpulB;
    cout<<"Simpul Ketiga: ";
    cin>>simpulC;
    cout<<"Simpul Keempat: ";
    cin>>simpulD;
    cout<<"Simpul Kelima: ";
    cin>>simpulE;
    cout<<"Simpul Keenam: ";
    cin>>simpulF;
    cout<<"Simpul Ketujuh: ";
    cin>>simpulG;
    cout<<"Simpul Kedelapan: ";
    cin>>simpulH;
 
    cout<<"Sisi-sisnya adalah : ";
    cout<<simpulA<<simpulB<<",";
    cout<<simpulA<<simpulC<<",";
    cout<<simpulA<<simpulD<<",";
    cout<<simpulB<<simpulC<<",";
    cout<<simpulB<<simpulE<<",";
    cout<<simpulC<<simpulE<<",";
    cout<<simpulD<<simpulF<<",";
    cout<<simpulE<<simpulG<<",";
    cout<<simpulF<<simpulG<<",";
    cout<<simpulG<<simpulH<<endl<<endl; 
 
    cout<<"Jarak "<<simpulA<<" ke "<<simpulB<<" : ";cin>>jarak1;
    cout<<"Jarak "<<simpulA<<" ke "<<simpulC<<" : ";cin>>jarak2;
    cout<<"Jarak "<<simpulA<<" ke "<<simpulD<<" : ";cin>>jarak3;
    cout<<"Jarak "<<simpulB<<" ke "<<simpulC<<" : ";cin>>jarak4;
    cout<<"Jarak "<<simpulB<<" ke "<<simpulE<<" : ";cin>>jarak5;
    cout<<"Jarak "<<simpulC<<" ke "<<simpulE<<" : ";cin>>jarak6;
    cout<<"Jarak "<<simpulD<<" ke "<<simpulF<<" : ";cin>>jarak7;
    cout<<"Jarak "<<simpulE<<" ke "<<simpulG<<" : ";cin>>jarak8;
    cout<<"Jarak "<<simpulF<<" ke "<<simpulG<<" : ";cin>>jarak9;
    cout<<"Jarak "<<simpulG<<" ke "<<simpulH<<" : ";cin>>jarak10;
    cout<<endl<<endl;
 
    cout<<"Total Jalur Graph = "<<jarak1+jarak2+jarak3+jarak4+jarak5+jarak6+jarak7+jarak8+jarak9+jarak10<<endl<<endl;
    cout<<"Shortest - adfgh = "<<jarak3+jarak7+jarak3+jarak9+jarak10<<endl<<endl;
    cout<<"Longest - acbegh = "<<jarak2+jarak4+jarak5+jarak8+jarak10<<endl<<endl;
    cout<<"Critical path - acbegh = "<<jarak2+jarak4+jarak5+jarak8+jarak10<<endl<<endl;
    
    getch();
    return 0;
}
