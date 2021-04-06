#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){

    short a;
    int A, B, N, C, X, resultado, fila, columna, contador1, horas, minutos, segundos, pi, res=0, res2=0;
    int end=100, start=0;
    double c, d, Pi=3.1416;
    float total;
    bool stop=false;
    char e;
    string f;

    cout << "ingresa la opcion que desea" << endl;

    cin >> a;

    switch (a) {

        case 1:
        cout << "Ejercicio 1" << endl;

        cout << "Ingrese un numero a y despues un numero b:" << endl;
        cin >> A;
        cin >> B;
        cout << "El el residuo de la divison " << A << "/" << B << " es: " << A%B << endl;

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
        cout << "Ejercicio 3" << endl;

        cout << "Ingrese un numero a y despues un numero b:" << endl;
        cin >> A;
        cin >> B;
        if (A>B) {
            cout << "El mayor es: " << A << endl;
        }
        else if (A<B) {
            cout << "El mayor es: " << B << endl;
        }
        else {
            cout << "Los numeros son iguales '" << A << " = " << B << "'." << endl;
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
        cout << "Ejercicio 5" << endl;

        cout << "Ingrese un numero a y despues un numero b:" << endl;
        cin >> c;
        cin >> d;

        if ((c/d - int(c/d)) >= double (0.5)){
            cout << c << "/" << d << "=" << int (c/d) + 1 << endl;
        }
        else {
            cout << c << "/" << d << "=" << int (c/d) << endl;
        }
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
        cout << "Ejercicio 7" << endl;

        cout << "Ingrese un numero N: ";
        cin >> A;

        for (int i=0; i<=A; i++){
            res += i;
        }
        cout << "La sumatoria desde 0 hasta " << A << " es: " << res << endl;
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
        cout << "Ejercicio 9" << endl;

        cout << "Ingrese un numero N correspondiente al radio de un circulo: " << endl;
        cin >> c;

        cout << "Perimetro: " << 2.0*Pi*c << endl;
        cout << "Area: " << Pi*c*c << endl;
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
        cout << "Ejercicio 11" << endl;

        cout << "Ingrese un numero N: " << endl;
        cin >> A;

        for (int i=1; i<=10; i++){
            cout << i << "x" << A << "=" << i*A << endl;
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
        cout << "Ejercicio 13" << endl;

        cout << "Ingrese un numero N: " << endl;
        cin >> A;

        cout << "Los divisores de " << A << " son:" << endl;
        for (int i=1; i<=A; i++){
            if (A%i==0) {
                cout << i << endl;
            }
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

        case 15:
        cout << "Ejercicio 15" << endl;

        do {
            cout << "Ingrese un numero: ";
            cin >> A;
            res += A;
            if (A==0) {
                stop = true;
            }
        }
        while (stop == false);
        cout << "El resultado de la sumatoria es: " << res << endl;
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

        case 17:
        cout << "Ejercicio 17" << endl;

        do {
            cout << "Ingrese un numero: ";
            cin >> A;
            if (A > res) {
                res = A;
            }
            if (A==0) {
                stop = true;
            }
        }
        while (stop == false);
        cout << "El numero mayor fue: " << res << endl;
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

        case 19:
        cout << "Ejercicio 9" << endl;

        cout << "Ingrese un numero N: ";
        cin >> A;

        for (int i=2; i<=A; i++) {
            res = A%i;
            if (res==0 && i!=A) {
                cout << A << " NO es un numero primo." << endl;
                break;
            }
            if (i==A) {
                cout << A << " es un numero primo." << endl;
            }
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

        case 21:
        cout << "Ejercicio 21" << endl;

        cout << "Ingrese una letra:" << endl;
        cin >> e;

        if (islower(e)) {
            cout << "Letra convertida: " << char (toupper(e)) << endl;
        }
        else {
            cout << "Letra convertida: " << char (tolower(e)) << endl;
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

        case 23:
        cout << "Ejercicio 23" << endl;

        cout << "Ingrese un numero A y luego un numero B: " << endl;
        cin >> A;
        cin >> B;

        for (int i=1; stop==false; i++) {
            res = A*i;
            for (int j=1; res2<=res; j++) {
                res2 = B*j;
                if (res == res2) {
                    stop = true;
                }
            }
        }
        cout << "El MCM de " << A << " y " << B << " es: " << res << endl;
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

        case 25:
        cout << "Ejercicio 25" << endl;

        cout << "Ingrese un numero: " << endl;
        cin >> B;
        A = B;

        while (A>0) {
            A /= 10;
            res +=1;
        }

        if (B == 0) cout << B << " tiene 1 digito." << endl;
        else cout << B << " tiene " << res << " digitos." << endl;
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

        case 27:
        cout << "Ejercicio 27" << endl;

        cout << "Ingrese un numero: ";
        cin >> A;
        cout << "Ingrese '+' para sumar, '-' para restar, '*' para multiplicar o '/' para dividir: ";
        cin >> f;
        cout << "Ingrese otro numero: ";
        cin >> B;

        if (f=="+") {
            cout << A << "+" << B << "=" << A+B << endl;
        }
        else if (f=="-") {
            cout << A << "-" << B << "=" << A-B << endl;
        }
        else if (f=="*") {
            cout << A << "x" << B << "=" << A*B << endl;
        }
        else if (f=="/") {
            cout << A << "/" << B << "=" << A/B << endl;
        }
        break;

        case 28:

            cout << "Ingrese el valor de N: ";
            cin >> N;
            for(int i=1; i<=N; i++) pi+=(2.0*(i%2)-1)/(2*i-1);
            cout << "La aproximacion de pi con n=" << N << " es " << 4*pi << endl;
            break;

    case 29:
    cout << "Ejercicio 29" << endl;

    do {
        srand(time(NULL));
        A = rand() % (end-start+1)+start;

        cout << "ingrese '<' si el numero pensado es menor." << endl;
        cout << "ingrese '>' si el numero pensado es mayor." << endl;
        cout << "ingrese '=' si el numero pensado es el que esta en pantalla." << endl << endl;

        cout << A << endl;
        cin >> f;

        if (f=="<") {
            end = A;
        }
        else if (f==">") {
            start = A;
        }
        else {
            stop = true;
        }
    }
    while (stop==false);
    cout << "Tu numero pensado es: " << A << endl;
    break;

       case 30:
        contador1 = 0;
            srand(time(NULL));
                        A = rand() % 100 + 0;
                        do{
                            contador1++;
                            cout <<"Ingrese un numero"<< endl;
                            cin >> B;
                            if(A > B){cout << "A es mayor!\n";}
                            else if(A <B){cout << "A es menor!\n";}
                            else{cout << "Es igual, el numero es:" << B << "\nSus intentos son:" << contador1 << endl;}
                        }
                        while(A != B);
            break;
    }
    cout << "\n\n\nTrabajo hecho por:" << endl;
    cout << char(26) << "Julian Montenegro." << endl;
    cout << char(26) << "Juan Diego Carrera.\n\n" << endl;
}
