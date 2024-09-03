/*1.5.1. Continuando el ejercicio anterior, multiplique los valores que se encuentren en las posiciones impares del
vector A (mult_impar_A), realice lo mismo para el vector B (mult_impar_B), determine cuál de los 2 valores
es mayor.*/
#include <iostream>
using namespace std;

// prototipado

void multiplicacionVectores(int *&vectorA, int *&vectorB);

int main()
{
    int *datos1 = new int[5];
    int *datos2 = new int[5];
    multiplicacionVectores(datos1, datos2);

    delete datos1;
    delete datos2;
    return 0;
}

// Definiciones
void multiplicacionVectores(int *&vectorA, int *&vectorB)
{
    int mult_impar_A = 1;
    int mult_impar_B = 1;

    for (int i = 0; i < 5; i++)
    {
        vectorA[i] = (rand() % 100) * 2 - 1;
        vectorB[i] = ((rand() % 100) * 2) - 1;
        cout << "vectorA[" << i << "] = " << vectorA[i] << ", vectorB[" << i << "] = " << vectorB[i] << endl;

        if (i % 2 == 1)
        {
           mult_impar_A *= vectorA[i];
           mult_impar_B *= vectorB[i];
        }
    }
    // Mostramos las multiplicaciones
    cout << "Multiplicación de posiciones impares en vectorA: " << mult_impar_A << endl;
    cout << "Multiplicación de posiciones impares en vectorB: " << mult_impar_B << endl;

    // Comparamos los productos
    if (mult_impar_A > mult_impar_B)
    {
        cout << "El mayor es la multiplicación de vectorA: " << mult_impar_A << endl;
    }
    else if (mult_impar_B > mult_impar_A)
    {
        cout << "El mayor es la multiplicación de vectorB: " << mult_impar_B << endl;
    }
    else
    {
        cout << "Ambos productos son iguales: " << mult_impar_A << endl;
    }
};
