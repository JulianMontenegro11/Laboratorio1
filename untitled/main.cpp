#include <iostream>
#include <math.h>
using namespace std;

int main(){

    short a;
    cout << "ingresa la opcion que desea" << endl;

    cin >> a;

    switch (a) {
        int A;
        int B;
        int N;
        int C;
        int X;
        int resultado;
        float perimetro;
        float area;
        int R;
        int fila;
        int columna;
        case 1:


            cout << "este programa devuelve e residuo de una division";
            cout << "ingrese A y B :";

                cin >> A >> B;

                cout<< "El residuo de A/B es :"<< A%B << endl;

        break;

        case 2:

            cout << " Este orograma nos dice si un numero es par o impar"<<endl;
            cout << "Ingrese un numero:"<<endl;
                cin >> N;

                if (N%2 == 0){
                    cout << "El numero es par";
                    cout << endl;
                }
        break;

        case 3:

            cout << "Este programa nos dice cuel es e numero mas grande entre dos ingresados"<<endl;
            cout << "Ingrese os numeros A y B:"<<endl;
            cin >> A;
            cin >> B;

           if (A < B){
               cout << B << " es mayor" << endl;
           }

           else{
               cout << A <<" es mayor" << endl;
              }

        break;

        case 4:
            cout<<"Este programa nos dice cual es el numero mas pequeño entre dos ingresados"<<endl;
            cout<<"Ingrese los numero A y B"<< endl;
            cin>>A>>B;
            if(A<B){
                cout<<"El numero menor es "<<A<<endl;
            }
            else{
                cout<<"El numero menor es "<<B<<endl;
            }

        break;

        case 5:
            cout<<"Este programa entrega la parte entera de una division"<<endl;
            cout<<"Ingrese los numeros A y B"<<endl;
            cin>>A>>B;

            C=A/B;

            cout<<C<<endl;


         break;

         case 6:

            resultado=0;
            cout<<"Este programa entrega la potencia de A elevado a la B"<<endl;
            cout<<"Ingrese la base"<<endl;
            cin>>A;

            cout<<"Ingrese el exponente"<<endl;
            cin>>B;

           X=1;

            while (X<B){
                if(resultado<A){
                    resultado=A*A;
                }
                else{
                    resultado=resultado*A;
                }
                X++;
            }
            cout<< resultado<<endl;

            break;
        case 7:
            cout<<"Este programa permite realizar la sumatoria desde 0 hasta el numero 'N' ingresado"<<endl;
            resultado=0;
            X=1;
            cout <<"Ingrese el numero N"<<endl;
            cin>>N;
            while(X<=N){
                resultado=resultado+X;
                X++;
            }
            cout<<resultado<<endl;
            break;
         case 8:
            cout<<"Este programa muestra el factorial de un numero N ingresado"<<endl;
            resultado=1;
            X=1;
            cout<<"Ingrese el numero N"<<endl;
            cin>>N;

            while(X<=N){
                resultado=resultado*X;
                X++;
            }
            cout<<resultado<<endl;
            break;
          case 9:
            cout<<"Este programa muestra el perimetro y el area de un circulo al ingresar el valor del radio"<<endl;
            cout<<"Ingrese el readio N"<<endl;
            cin>>N;
            perimetro= 2*3.1416*N;
            R=N*N;
            area=3.1416*R;

            cout<<"El perimetro es: "<<perimetro<<endl;
            cout<<"El area es: "<<area<<endl;

            break;
          case 10:
            cout<<"Este programa muestra todos los multiplos menores de 100 del numero N ingresado"<<endl;
            cout<<"Ingrese el numero N"<<endl;
            cin>>N;
            X=1;
            cout<<"los multiplos son:"<<endl;
            while(X<=100){
                if(X%N==0){
                    cout<<X<<endl;
                }
                X++;
            }

            break;
        case 11:
            cout<<"Este programa entrega las tablas de multiplicar del numero ingresado hasta el 10"<<endl;
            cout<<"Ingresa el numero"<<endl;
            cin>>N;
            X=1;
            while(X<=10){
                cout<<N<<"X"<<X<<"="<<N*X<<endl;
                X++;
            }
            break;
         case 12:
            cout<<"Este programa entrega la potencia de un numero ingresado de grado 1 hasta el grado 5"<<endl;
            cout<<"Ingrese el numero N"<<endl;
            cin>>N;
            X=1;
            while(X<=5){
                cout<<N<<"^"<<X<<"= "<<pow(N,X)<<endl;

                X++;
            }

            break;
        case 13:
            cout<<"Este programa nos muestra cuales son los divisores de un numero N ingresado"<<endl;
            cout<<"Ingrese el numero N"<<endl;
            cin>>N;
            X=1;
            cout<<"los Divisores son:"<<endl;
            while(X<=N){
                if(N%X==0){
                    cout<<X<<endl;
                }
                X++;
            }
            break;
        case 14:
            fila=1;
            while (fila<=50) {
                columna=1;
                while (columna<3){
                    if(columna==1){
                        cout<<fila;
                        columna++;
                    }
                    else{
                        cout<<51-fila;
                        cout<<endl;

                    }


                }
                fila++;
              }
            break;

    }
}