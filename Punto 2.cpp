//Jose Miguel Sedano 
//Angie Valentina Garcia 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int n = 0;
    int i = 0;
    int j = n - 1;
    int palin = 1; 
    cout << "Ingrese un número: ";
    cin >> x;
    

    while (x[n] != '\0') {
        n++;
    }

    while (i < j && palin == 1) {
        if (x[i] != x[j]) {
            palin = 0; 
        }
        i++;
        j--;
    }

    if (palin == 1) {
        cout << "El numero, " << x << " ,es palindromo." << endl;
    } else {
        cout << "El numero " << x << " no es palindromo." << endl;
    }

    return 0;
}
