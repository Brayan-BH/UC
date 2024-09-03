/*1.5. Desarrolle un programa que realice la siguiente operación. Se tienen dos vectores de 5 elementos numéricos
cada uno, realizar la resta del Vector A menos el Vector B y almacenar el resultado en un Vector C (C = A -B),
determinar el promedio de la suma de los elementos del Vector C (prom_C).*/
#include<iostream>
using namespace std;

//prototipado

void restaVectores(int *&vectorA, int *&vectorB);

int main(){
    int *datos1 = new int[5];
    int *datos2 = new int[5];
    restaVectores(datos1, datos2);

    delete datos1;
    delete datos2;
    return 0;

}

//Definiciones
void restaVectores(int *&vectorA, int *&vectorB){
    int *resultadoVectorC = new int[5];

    for (int i = 0; i < 5; i++)
    {
        //resta usando rand()
        vectorA[i] = rand() % 10;
        vectorB[i] = rand() % 10;
        cout << vectorA[i] << endl;
        cout << vectorB[i] << endl;
        resultadoVectorC[i] = vectorA[i] - vectorB[i];
        cout << "El resultado de la resta del: " << vectorA[i] << " - " << vectorB[i] << " = " <<resultadoVectorC[i] << endl;
    }
    
    return;
};  
