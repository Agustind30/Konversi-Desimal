#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    float a,b;
    int kode;
    	cout << " Agustin Dwinurcahyani \n";
    	cout << " D4 Manajemen Informatika \n";
    	cout << "=============================== \n";
    	cout << " Selamat Datang di Promgram Konversi Desimal \n\n";
    	
 long desimal, pembagi=10737423498, bit;
        cout<<"Nilai Desimal : ";
        cin>>desimal;

                cout<<"Hexadesimal = "<<hex<<desimal<<endl;
                cout<<"Oktal       = "<<oct<<desimal<<endl;
                cout<<"Biner       = ";
        while(pembagi>desimal) pembagi/=2;
        do{
                bit=desimal/pembagi;
                cout<<bit;
                desimal=desimal%pembagi;
                pembagi/=2;
        }
        while(pembagi>=1);
        cout<<"\n";

        return 0;  
}
