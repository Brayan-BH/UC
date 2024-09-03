/*Llenar un Vector A de 6 elementos numéricos y determinar suma de todos sus elementos, promedio de los
elementos y cuantos elementos están por encima del promedio. Realice la misma operación para un Vector B.
Imprima el promedio de A y de B, indique cual es el mayor de los promedios.*/

#include <iostream>
using namespace std;

// definiciones
void llenarPromedio(int *&vectorA, int *&vectorB);

int main()
{

    int *datos1 = new int[7];
    int *datos2 = new int[7];
    llenarPromedio(datos1, datos2);

    delete datos1;
    delete datos2;
}

// definiciones
void llenarPromedio(int *&vectorA, int *&vectorB)
{
    int sumaA = 0;
    int sumaB = 0;
    float promedioA = 0;
    float promedioB = 0;
    int elementosPorEncimaA = 0;
    int elementosPorEncimaB = 0;

    for (int i = 0; i < 7; i++)
    {
        vectorA[i] = rand() % 100;
        vectorB[i] = rand() % 100;

        sumaA += vectorA[i];
        sumaB += vectorB[i];

        promedioA = sumaA / 7;
        promedioB = sumaB / 7;

        cout << "vectorA[" << i << "] = " << vectorA[i] << ", " << "vectorA[" << i << "]" << " = " << vectorB[i] << endl;

        if (promedioA > vectorA[i])
        {
            i++;
            cout << "\nEl elemento " << i++ << " está por encima del promedio de A " << promedioA << endl;
        }
        if (promedioB > vectorB[i])
        {
            i++;
            cout << "\nEl elemento " << i++ << " está por debajo del promedio de B " << promedioB << endl;
        }
    }

    cout << "La suma de los vectores A[] es: " << sumaA << endl;
    cout << "La suma de los vectores B[] es: " << sumaB << endl;
    cout << "El promedio de los vectores A[] es: " << promedioA << endl;
    cout << "El promedio de los vectores B[] es: " << promedioB << endl;

    if (promedioA > promedioB)
    {
        // Promedio de A es mayor que el promedio de B
        cout << "El promedio de A = " << promedioA << " es mayor que el promedio de B = " << promedioB << endl;
    }
    else
    {
        // Promedio de B es mayor que el promedio de A
        cout << "El promedio de B = " << promedioB << " es mayor que el promedio de A = " << promedioA << endl;
    }
};
