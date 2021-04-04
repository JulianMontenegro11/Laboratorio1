#include <iostream>
#include <math.h>
#include <cstdlib>
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
        int contador1;
        float total;
        case 1:
        int horas;
        int minutos;
        int segundos;
        int pi;


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
                while (columna<=3){
                    if(columna==1){
                        cout<<fila;

                    }
                    else {
                        if(columna==2){
                            cout<<"  ";
                         }
                        else{
                            cout<<51-fila;
                            cout<<endl;
                        }

                    }
                  columna++;



                }
                fila++;
              }
            break;


        case 16:
            cout<<"Este programa solicita constente numeros al usuario, cualdo el usuario ingresa el numero 0 el programa nos entrega el promedio de todos los numeros ingresados"<<endl;
            cout<<endl;

            contador1=0;
            X=0;
            total=0;
            while(X==0){
                cout<<"Ingrese un numero (si ingresa el numero 0 el programa parara)"<<endl;
                cin>>N;
                if(N!=0){
                    total=total+N;
                    contador1++;
                }
                else{
                    X++;
                }

            }
            cout<<"El promedio es:"<<total/contador1<<endl;

            break;




        case 18:
            cout<<"Este programa solicita un numero al usuario y nos indica si es el numero es un cuadrado perfecto"<<endl;
            cout<<"Ingrese el numero N"<<endl;
            cin>>N;
            contador1=1;
            while(contador1<=N){
                A=contador1*contador1;
                if(A==N){
                    A=N;
                    cout<<N<<"  es un cuadrado perfecto"<<endl;

                }
                else{
                    if(contador1==N){
                        if(A!=N){
                            cout<<N << " No es en cuadrado perfecto"<< endl;
                        }

                    }
                }
                contador1++;

            }



            break;






        case 20:
            cout<<"Este programa solicita un numero N al usuario y le indica si es un numero polindromo"<<endl;
            cout<<"Ingrese numero N"<<endl;
            cin>>N;

            if(N>100){
                A=N/100;
                C=N%10;
                if(A==C){
                    cout<<N<< " Es un numero palindromo"<<endl;
                }

                else{
                    cout<<N << " No es un numero palindromo"<<endl;
                }
            }



            break;



        case 22:

            cout<<"Este programa solicita al usuario un cantidad entera de segundo y el programa estrega este tiempo en formato de horas, minutos y segundos"<<endl;
            cout<<"Ingrese cantidad de segundos"<<endl;
            cin>>N;
            horas=0;
            minutos=0;
            segundos=0;
            X=0;
            A=0;
            if(horas==0){
                 minutos=N/60;
                 horas=minutos/60;
                 A=horas*60;
                 X=minutos*60;
                 segundos=N-X;
                }
            if(segundos<=60){
                minutos=minutos-A;
            }

            cout<<"El tiempo es:  "<<horas<<":"<<minutos<<":"<<segundos<<endl;



            break;



        case 24:

            cout<<"Este programa realiza un cuadrodo con el caracter '+' con la longitud de sus lados igual al numero N ingresado por el usuario "<<endl;
            cout<<"Ingrese numero N"<<endl;
            cin>>N;
            for (fila=1;fila<=N;fila=fila+1){
                for(columna=1;columna<=N;columna=columna+1){
                    if(columna==1 || fila==1){
                        cout<<"+";
                    }
                    else{
                        if(columna==N || fila==N){
                            cout<<"+";
                        }
                        else{
                            cout<<" ";

                    }
                   }
                }


                cout<<endl;
            }
            break;




        case 26:
            cout<<"Este programa indica que tipo de triangulo forman tres longitudes que ingresa el usuario"<<endl;
            cout<<"Ingrese los lados A,B,C"<<endl;
            cin>>A;
            cin>>B;
            cin>>C;
            if(A+B>C){
                if(A+C>B){
                    if(B+C>A){
                        if(A==B && A==C && B==C){
                            cout<<"Las tres longitudes ingresadas forman un triangulo equilatero"<<endl;
                        }
                        else{
                            if(A!=B && A!=C && B!=C){
                                cout<<"Las tres longitudes ingresadas forman un triangulo escaleno"<<endl;
                            }
                            else{
                                cout<<"Las tres longitudes ingresadas forman un triango isosceles"<<endl;

                            }


                        }
                    }
                }
            }


            break;


        case 28:

            cout << "Ingrese el valor de N: ";
            cin >> N;
            for(int i=1; i<=N; i++) pi+=(2.0*(i%2)-1)/(2*i-1);
            cout << "La aproximacion de pi con n=" << N << " es " << 4*pi << endl;
            break;


       case 30:
            srand((NULL));
                        A = rand() % 100 + 0;
                        do{
                            contador1= 1;
                            cout <<"Ingrese un numero"<< endl;
                            cin >> B;
                            if(A > B){cout << "A es mayor!\n";}
                            else if(A <B){cout << "A es menor!\n";}
                            else{cout << "Es igual, el numero es:" << B << "\nSus intentos son:" << contador1 << endl;}
                        }
                        while(A != B);
            break;

    }
}
