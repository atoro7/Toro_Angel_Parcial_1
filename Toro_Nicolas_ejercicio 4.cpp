#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n, ponderacion;
    float nota;
    float suma1=0, suma2=0, promedioP=0 ;
    string nom;

    cout<<"Ingresar cantidad de materias: "; cin>>n;

    for(int i=1; i<=n; i++){

        cout<<"\nNombre de la materia: "; cin>>nom;
        cout<<"Nota: "; cin>>nota;
        cout<<"Ponderacion: "; cin>>ponderacion;

        suma1 += (nota*ponderacion);
        suma2 += (ponderacion);
    }
    promedioP = suma1/suma2;

    cout<<fixed<<setprecision(2)<<promedioP;

    return 0;
}
