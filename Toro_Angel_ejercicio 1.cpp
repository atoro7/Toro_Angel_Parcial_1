#include <iostream>

using namespace std;

int main(){

    int n1, n2;
    int suma, resta, mult, div;

    cout<<"Digite el primer numero: "; cin>>n1;
    cout<<"Digite el segundo numero: "; cin>>n2;

    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;

    if(n2!=0){

        div = n1 / n2;
        cout<<"\nLa division entre los numero es: "<<div<<endl;
    }
    else{
        cout<<"\nNo se puede divir por 0"<<endl;
    }

     cout<<"La suma entre los numero es: "<<suma<<endl;
    cout<<"La resta entre los numero es: "<<resta<<endl;
    cout<<"La multiplicacion entre los numero es: "<<mult<<endl;

    return 0;
}
