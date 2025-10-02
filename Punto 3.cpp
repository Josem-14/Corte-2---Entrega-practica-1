#include <iostream>
#include <string>
using namespace std;

// Callback functions for different operations
int add(int a, int b)
{
    
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}
int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "SINTAX ERROR" << endl;
    }
}

// Function that performs an operation using a callback
void performOperation(int (*callback)(int, int), int j, int m)
{
    cout << "El resultado de la operacion es: " << callback(j,m) << endl;
}

int main()
{
    int j= 0;
    int m=0;
    string operacion;
    cout<<"Ingrese que tipo de operacion desea realizar (Suma(+), Resta(-), Multplicacion(x,*), Division(/) : ";
    cin>>operacion;
    cout<<"Ingrese el primer numero: ";
    cin>>j;
    cout<<"Ingrese el segundo numero: ";
    cin>>m;
    
    if (operacion == "suma" || operacion == "+") {
        performOperation(add, j, m);
    }
    else if (operacion == "resta" || operacion == "-") {
        performOperation(subtract, j, m);
    }
    else if (operacion == "multiplicacion" || operacion == "x" || operacion == "*") {
        performOperation(multiply, j, m);
    }
    else if (operacion == "division" || operacion == "/") {
        performOperation(divide, j, m);
    }
    else {
        cout << "Operacion no valida" << endl;
    }
    return 0;
}
