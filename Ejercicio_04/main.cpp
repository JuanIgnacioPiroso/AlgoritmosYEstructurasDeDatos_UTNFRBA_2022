#include <iostream>
#include <conio.h>
using namespace std;

int *ordenaAscendente(int *p, int n);

int main ()
{
    int n;


    cout << "Ingrese la cantidad de elementos del array" << endl;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i << endl;
        cin >> *(arr+i);
    }

    int *p=ordenaAscendente(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << *(p+i) << endl;
    }
    delete [] arr;
    

    
    return 0;
}

int *ordenaAscendente(int *p, int n)
{
    int i;
    int j;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (*(p+j) < *(p+i))
            {
                int temp = *(p+j);
                *(p+j) = *(p+i);
                *(p+i)=temp;
            }
            
        }
        
    }
    return p;
    
}