//Jose Miguel Sedano 
//Angye Valentina Garcia

#include <iostream>
#include <string>
using namespace std;

// Callback funct   ions for different operations
float add(float a, float b)
{
    
    return a + b;
}

float multiply(float a, float b)
{
    return a * b;
}

float subtract(float a, float b)
{
    return a - b;
}
float divide(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "SINTAX ERROR" << endl;
        return 0;
    }
}

// Function that performs an operation using a callback
void performOperation(float (*callback)(float, float), float j, float m)
{
    cout << "El resultado de la operacion es: " << callback(j,m) << endl;
}

int main()
{
    float j= 0;
    float m=0;
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
