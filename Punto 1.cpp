//Jose Miguel Sedano 
//Angie Valentina Garcia 


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;  
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> nums[i];
    }

    int v; 
    cout << "Ingrese el número objetivo: ";
    cin >> v;

    int m, j; 
    int a;    

    for (m = 0; m < n; m++) {
        for (a = 0; a < n; a++) {
            if (m != a) {  
                if (nums[m] + nums[a] == v) {
                    j = a;
                    cout << "[" << m << ", " << j << "]" << endl;
                    return 0; 
                }
            }
        }
    }

    return 0;
}
