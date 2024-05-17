#include <iostream>

using namespace std;

int main(){

    int n;
    unsigned long long factorial=1;

    do{

        cout<<"\nIngresar un numero: "; cin>>n;

        if(n<0){

            cout<<"\nERROR"<<endl;
        }


    }while(n<0);

     if(n==0){

            cout<<"Cualquier numero multiplicado por 0 es 0"<<endl;

        }

     else{
            for(int i=1; i<=n; i++){

            factorial *= i;

     }
    cout<<"El factorial es: "<<factorial<<endl;
     }
    return 0;
}
