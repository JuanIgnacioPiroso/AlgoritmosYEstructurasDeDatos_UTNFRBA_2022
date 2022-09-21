#include <iostream>
#include <conio.h>
using namespace std;

int *findMax(int data[], int n);

int main ()
{
    int n;
    int i;
    int *p;

    cout << "Ingrese la cantidad de valores" << endl;
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor " << i+1 << endl;
        cin >> array[i];
    }

    p = findMax(array,n);
    cout << "El valor maximo es: " << *p;
    

    
    return 0;
}

int *findMax(int data[], int n)
{
    int *max = data;
    int i;
    for (int i = 0; i < n; i++)
    {
        if (*max <*(max+i))
        {
            *max=*(max+i);
        }
        
    }
    return max;
    
}