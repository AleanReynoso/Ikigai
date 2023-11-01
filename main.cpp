#include <iostream>
#include <cmath>
using std:: cout;
using std:: endl;
using std :: cin;
int main()
{
    cout << sqrt(4) << endl;
    int x = 0;
    float y;
    cout << x << endl;
    /*cin >> y;
    cout << "el valor de y es: " << y << endl;*/
    if (x == 0 && y != 0)
    {
        cout << "x es igual a 0" << endl;
    }
    else
    {
        cout << "x es diferente de 0" << endl;
    }
    for (int i = 0 ; i < 10 ; i = i+2)
    {
        cout << i << endl;
    }
    y = 0;
    while (y < 3)
    {
        cout << "el valor de y es: " << y << endl;
        y = y+1;
    }
    int z = 0;
    do {
        cout << "Dentro de un ciclo infinito" << endl;
        z ++;
        if (z == 3)
        {
            break;
        }
    }while (true);

}