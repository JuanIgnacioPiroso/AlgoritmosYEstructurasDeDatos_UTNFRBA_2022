#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int array[5];
    int i;
    int *p = array;
    cout << "Ingrese 5 numeros " << endl;
    cin >> *p;
    cin >> *(p+1);
    cin >> *(p+2);
    cin >> *(p+3);
    cin >> *(p+4);

    cout << "Usted ingreso: " << endl;

    for (int i = 4; i >= 0; i--)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}