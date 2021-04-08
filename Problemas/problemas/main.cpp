#include <iostream>

using namespace std;

int main()
{
    int a, dia, mes, res1=0, res2=1, res3=0, suma=0, divi=0, cont=0, n, N, A, B, C, D, E, F, G, H, I, J, L, semilla,contador;
    char letra, z;
    bool stop=false;


    cout << "Ingrese el numero del problema: ";
    cin >> a;

    switch (a) {
    case 1:
        cout << "Problema 1" << endl;

        cout << "Ingresa una letra:" << endl;
        cin >> letra;

        if (isalpha(letra)) {
            z = char (tolower(letra));
            if (z=='a' || z=='e' || z=='i' || z=='o' || z=='u') {
                cout << letra << " es una vocal" << endl;
            }
            else {
                cout << letra << " es una consonante" << endl;
            }
        }
        else {
            cout << "NO es una letra." << endl;
        }
    break;

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

    case 3:
        cout << "Problema 3" << endl;

        cout << "Ingrese dia y mes:" << endl;
        cin >> dia;
        cin >> mes;

        if (dia>=1 && dia<=31 && mes>=1 && mes <= 12) {
            if (mes==2) {
                if (dia<=28) cout << dia << "/" << mes << " es una fecha valida" << endl;
                else if (dia==29) cout << dia << "/" << mes << " es una fecha valida para bisiesto" << endl;
                else cout << dia << "/" << mes << " es una fecha invalida" << endl;
            }
            else if (mes<=7) {
                if (mes%2==1) cout << dia << "/" << mes << " es una fecha valida" << endl;
                else if (dia<=30) cout << dia << "/" << mes << " es una fecha valida" << endl;
                else cout << dia << "/" << mes << " es una fecha invalida" << endl;
            }
            else {
                if (mes%2==0) cout << dia << "/" << mes << " es una fecha valida" << endl;
                else if (dia<=30) cout << dia << "/" << mes << " es una fecha valida" << endl;
                else cout << dia << "/" << mes << " es una fecha invalida" << endl;
            }
        }
        else {
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
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
    break;

    case 5:
        cout << "Problema 5" << endl;

        cout << "Ingrese un numero para determinar el tama" << char(164) << "o de la figura: " << endl;
        cin >> a;
        a -= 1;

        for (int f=0; f<=a; f++) {
            for (int c=0; c<=a; c++) {
                if (c<((a/2)-f) || c>((a/2)+f) || c<(f-(a/2)) || c>(a-(f-(a/2)))) {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
            cout << endl;
        }
    break;

    case 6:
        cout << 7/2 << endl;
    break;

    case 7:
        cout << "Problema 7" << endl;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        do {
            if (res2%2==0) {
                suma += res2;
            }
            res2 += res1;
            res1 = res2-res1;
        }
        while (res2<=a);
        cout << "El resultado de la suma es: " << suma << endl;
    break;

    case 8:
        cout <<"El siguiente programa recibe 3 numeros y entrega la sumatoria de los multiplos de los dos primeros que sean menores al tercero"<<endl;
        cout <<"Ingrese el primer numero: ";
        cin>>A;
        cout<<endl;
        cout<<"Ingrese el segundo numero: ";
        cin>> B;
        cout<<endl;

        cout<<"Ingrese el tercer numero: ";
        cin>>C;
        cout<<endl;
        D=0;
        E=A;
        F=B;
        while (E<C){

            cout<<E<< " + ";
            D=D+E;
            E=E+A;

        }
        while (F<C) {

            if(F%A!=0){
                cout<<F;
                D=D+F;
                F=F+B;
                if(F<C){
                    cout<< " + ";
                }
            }

            else{
                F=F+B;
            }

        }

        cout<< " = "<< D<<endl;

    break;

    case 9:
        cout << "Problema 9" << endl;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        while (a>0) {
            while (stop==false) {
                res2 *= a%10;
                res1 += 1;
                if (res1 >= a%10) {
                    stop = true;
                }
            }
            suma += res2;
            a /= 10;
            res2 = 1;
            stop = false;
            res1 = 0;
        }
        cout << "El resultado de la suma es: " << suma << endl;
    break;

    case 10:
         cout<<"El siguiente programa solicita un numero N al usuario y este le devuelve el N-simo numero primo"<<endl;
         cout<<"ingrese un numero: ";
         cin>>N; /* Posicion N */
         C=0; /* Contador*/
         B=0; /*Divisores*/
         E=1; /* Numero a evaluar */
         while(C<N){
         for (A=1;A<=E;A++){
             if(E%A==0){
                 B++;
             }

         }

             if(B==2){
                 C++;
                 D=E;/*Candidato a imprimir*/
                 /*El numero es primo*/
                 E++;
                 B=0;
             }
             else{
                 E++;/*El numero no es primo*/
                 B=0;
             }

         }
         cout<<"El numero primo en la posicion "<<N<< " es: "<<D<<endl;



    break;

    case 11:
        cout << "Problema 11" << endl;
        res2 = 0;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        /*******************************************************************
        Profe, despues del 16 el programa no imprime nada,
        supongo que es porque se toma demasiado tiempo en terminar :c...
        Cuando lo terminé probé sumando la cantidad de iteraciones que hace


        o sea, What The F***.
        *******************************************************************/

        for (int i=1; stop==false; i++) {
            res1 = a*i;
            for (int j=1; res2<res1; j++) {
                res2 = (a-cont)*j;
                if (res2==res1) {
                    res3 = res2;
                    res2 = 0;
                    j = 0;
                    cont +=1;
                }
                if (res3==res1 && a-cont==1) {
                    stop =true;
                    break;
                }
            }
            cont = 1;
        }
        cout << "El MCM de todos los numeros entre 1 y " << a << " es: " << res1 << endl;
    break;

    case 12:
             cout<<"El siguiente programa solicita a un usuario un numero N y este le devuelve el maximo factor primo"<<endl;
             cout<<"Por favor ingrese un numero: ";
             cin>>N;
             cout<<endl;
             C=0; /* Contador*/
             B=0; /*Divisores*/
             E=1; /* Numero a evaluar */
             while(E<N){
               for (A=1;A<=E;A++){
                  if(E%A==0){
                   B++;


                   }

                }

                 if(B==2){
                    if(N%E==0){
                        D=E;
                    }
                  /*El numero es primo*/
                  E++;
                  B=0;



                 }
                 else{
                   E++;/*El numero no es primo*/
                   B=0;
                  }

            }

        cout<<D<<endl;

    break;

    case 13:
        cout << "Problema 13" << endl;
        res2 = 0;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        for (int i=a-1; i>=1; i--) {
            for (int j=2; j<=i; j++) {
                res1 = i%j;
                if (res1==0 && j!=i) {
                    break;
                }
                if (j==i) {
                    res2 += i;
                }
            }
        }
        cout << "El resultado de la suma es: " << res2 << endl;
    break;

    case 14:
    break;

    case 15:
        cout << "Problema 15" << endl;

        cout << "Ingrese un numero N: ";
        cin >> a;

        for (int f=0; f<a; f++) {
            for (int c=0; c<a; c++) {
                if (f>c && f>=a-c-1) {
                    n = 2*(1+f)-a;
                    cout << n*n-2*(n-1)-c+a-1-f << "\t";

                    res1 = n*n-2*(n-1)-c+a-1-f;
                    res2 = ((a-2*c)*(a-2*c))-(2*((a-1)-(2*c)));
                    if (res1==res2) {
                        suma += res1;
                    }
                }
                else if (f<=c && f>a-c-1) {
                    n = a-1-c;
                    cout << (a-2*(1+n))*(a-2*(1+n))+1+f-(n+1) << "\t";

                    res1 = (a-2*(1+n))*(a-2*(1+n))+1+f-(n+1);
                    res2 = a-1-f;
                    res3 = ((a-2*res2)*(a-2*res2))-3*((a-1)-(2*res2));
                    if (res1==res3) {
                        suma += res1;
                    }
                }
                else if (f<=c && f<=a-c-1) {
                    cout << (a-2*f)*(a-2*f-1)+1+c-f << "\t";

                    res1 = (a-2*f)*(a-2*f-1)+1+c-f;
                    res2 = ((a-2*f)*(a-2*f));
                    res3 = ((a-2*f)*(a-2*f))-((a-1)-(2*f));
                    if (res1==res2 || res1==res3) {
                        suma += res1;
                    }
                }
                else {
                    cout << (a-2*c)*(a-2*c-1)+1-f+c << "\t";
                }
            }
            cout << endl << endl << endl << endl;
        }
        cout << "En una espiral de 5x5, la suma de sus diagonales es: " << suma << endl;
    break;

    case 16:

                      cout << " --PROBLEMA No.16--" << endl ;
                                  cout << endl << " Ingrese un numero k: " ;
                                  cin >> N ;
                                  cout << endl ;

                                  for( int i = 1 ; i < N ; i++ ){

                                          B = i ;
                                          C = 0 ;

                                      do{

                                          if( B %2 == 0 ){

                                              B = B /2 ;


                                          }
                                          else if( B %2 != 0 ){

                                              B = (3*B)+1 ;

                                          }

                                         C++ ;

                                         D = C ;

                                      }
                                      while(B != 1) ;

                                       if( A > D ){

                                           semilla = i-1 ;
                                           A = C ;


                                       }
                                       else if( D > A ){

                                           A = D ;


                                       }


                                      }

                                      cout << " Semilla: " << semilla << endl << endl ;

                                          do{

                                          if( semilla %2 == 0 ){

                                              semilla = semilla /2 ;
                                              cout << " " << semilla ;

                                          }
                                          else if( semilla %2 != 0 ){

                                              semilla = (3*semilla)+1 ;
                                              cout << " " << semilla ;

                                          }

                                       contador++ ;

                                      }
                                      while(semilla != 1) ;

                                      cout << endl << endl << " Terminos: " << contador << endl ;





    break;

    case 17:
        cout << "Problema 17" << endl;

        cout << "Ingrese un numero N:" << endl;
        cin >> a;

        for (int i=1; stop==false; i++) {
            res1 = i*(i+1)/2;
            for (int j=1; j<=res1; j++) {
                res2 = res1 % j;
                if (res2==0) {
                    divi += 1;
                }
            }
            if (divi > a) {
                stop = true;
            }
            else {
                divi = 0;
            }
        }
        cout << "El numero es: " << res1 << " que tiene " << divi << " divisores." << endl;
    break;
    }

    cout << "\n\n\nTrabajo hecho por:" << endl;
    cout << char(26) << "Juan Diego Carrera." << endl;
    cout << char(26) << "Julian Montenegro.\n\n" << endl;
}
}
