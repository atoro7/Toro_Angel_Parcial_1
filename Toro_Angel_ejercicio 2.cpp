#include <iostream>

using namespace std;

int main(){

    int a;
    bool x = false;

    cout<<"Ingrese un anio: "; cin>>a;

    if(a%4==0){

        x = true;

        if(a%100==0){

        x = false;

            if(a%400==0){

                x = true;
            }
        }
    }

    if(x==false){

        cout<<"\nNo es bisiesto"<<endl;
    }
    else if(x==true){

        cout<<"\nEs bisiesto"<<endl;
    }

    return 0;
}
