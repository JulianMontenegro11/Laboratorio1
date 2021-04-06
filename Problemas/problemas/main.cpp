#include <iostream>

using namespace std;

int main()
{
    short a;
    int N, A, B, C, D, E, F, G, H, I, J, K, L;
    cout<<"Por favor elija el problema que desea validar"<<endl;
    cin>>a;
    switch (a) {

    case 2:
        cout<<"Este programa permite determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada."<<endl<<endl;;
        cout<<"Por favor ingrese el valor a calcular"<<endl<<endl;

        cin>> N;
        A=0;
        B=0;
        C=0;
        D=0;
        E=0;
        F=0;
        G=0;
        H=0;
        I=0;
        J=0;
        L=50; /*faltante*/
        while (L==50){
            if(N>50000){
                A=N/50000; /* A=billetes de 50 mil */
                N=N-(A*50000);
            }
            else{
                if(N<50000 && N>20000){
                    B=N/20000; /* B= Billetes de 20000 */
                    N=N-(B*20000);
                }
                else{
                    if(N<20000 && N>10000){
                        C=N/10000; /* C= Billetes de 10000 */
                        N=N-(C*10000);
                    }
                    else{
                        if(N<10000 && N>5000){
                            D=N/5000; /* D= Billetes de 5000 */
                            N=N-(D*5000);
                        }
                        else{
                            if(N<5000 && N>2000){
                                E=N/2000; /* E= Billetes de 2000 */
                                N=N-(E*2000);
                            }
                            else{
                                if(N<2000 && N>1000){
                                    F=N/1000; /* F = Billetes de 1000 */
                                    N=N-(F*1000);
                                }
                                else{
                                    if(N<1000 && N>500){
                                        G=N/500; /* G = monedas de 500*/
                                        N=N-(G*500);
                                    }
                                    else{
                                        if(N<500 && N>200){
                                            H=N/200; /* H = monedas de 200 */
                                            N=N-(H*200);
                                        }
                                        else{
                                            if(N<200 && N>100){
                                                I=N/100; /* I = monedas de 100 */
                                                N=N-(I*100);
                                            }
                                            else{
                                                if(N<100 && N>50){
                                                    J=N/50; /* J= monedas de 50 */
                                                    N=N-(J*50);
                                                }
                                                else{
                                                    if(N<50){
                                                        L=N;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        cout<<"Billetes de 50.000 : "<<A<<endl;
        cout<<"Billetes de 20.000 : "<<B<<endl;
        cout<<"Billetes de 10.000 : "<<C<<endl;
        cout<<"Billetes de 5.000 : "<<D<<endl;
        cout<<"Billetes de 2.000 : "<<E<<endl;
        cout<<"Billetes de 1.000 : "<<F<<endl;
        cout<<"Monedas de 500 : "<<G<<endl;
        cout<<"Monedas de 200 : "<<H<<endl;
        cout<<"Monedas de 100 : "<<I<<endl;
        cout<<"Monedas de 50 : "<<J<<endl;
        cout<<"Faltante : "<<L<<endl;


        break;

    case 4:
        cout<< "El siguient programa realiza la sumatoria de dos tiempos ingresados y entrega la hora correspondiente"<<endl;
        cout<< "Por favor ingrese el tiempo inicial en formato de enteros:  ";
        cin>> A;
        cout<<endl;
        cout<<"Por favor ingrese el tiempo final en formato de enteros:  ";
        cin>>B;
        cout<<endl;

        C=A%100; /* minutos del primer tiempo*/
        D=A/100; /* hora del primer tiempo*/
        E=B%100; /* minutos del segundo tiempo*/
        F=B/100; /* hora del segundo tiempo*/

        G=D+F; /* Suma de horas*/
        H=C+E; /* Suma de minutos*/

        I=H/60;
        H=H-(I*60);
        G=G+I;

        if(G<=24){
            cout<<"La hora es: "<<G<<H<<endl;
        }
        else{
            cout<<G<<H<<" No es una hora valida"<<endl;
        }




        break;

    }
    cout << "\n\n\nTrabajo hecho por:" << endl;
    cout << char(26) << "Julian Montenegro." << endl;
    cout << char(26) << "Juan Diego Carrera.\n\n" << endl;
}
