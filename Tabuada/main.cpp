#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int valor = 0;
    cout << "Qual a tabuada desejada?" << endl;
    cin >> valor;

    for (int i = 1; i <= 10; i++) {
        cout << i << " X " << valor << " = " << i*valor << endl;
    }

    cout << endl;
    cout << "Tabuada finalizada!" << endl;

    system("pause");

    return 0;
}
