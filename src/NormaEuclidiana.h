#include <iostream>
#include <cmath>
using namespace std;

#ifndef NORMAEUCLIDIANA_H_INCLUDED
#define NORMAEUCLIDIANA_H_INCLUDED

class NormaEuclidiana
{
private:
    float *vet;
    int dimensao;
public:
    NormaEuclidiana();
    ~NormaEuclidiana();
    void calcularNorma();
    float calcularNorma_FuncaoInterna(float *vet, int dimensao);
};

#endif // NORMAEUCLIDIANA_H_INCLUDED

NormaEuclidiana::NormaEuclidiana(){}

NormaEuclidiana::~NormaEuclidiana(){
    delete[] vet;
}

void NormaEuclidiana::calcularNorma()
{   
    cout << "De o numero de dimensoes do vetor: "<< endl;
    cin >> dimensao;
    vet = new float[dimensao];
    cout << endl<< "De os valores do vetor: "<< endl;
    for (int i = 0; i < dimensao; i++)
    {
        cin >> vet[i];
    }

    float soma = 0;
    for (int i = 0; i < dimensao; i++)
    {
        soma += vet[i] * vet[i];
    }
    float norma = sqrt(soma);

    cout << endl << "Norma Euclidiana do vetor (magnitude): " << norma << endl;
}

float NormaEuclidiana::calcularNorma_FuncaoInterna(float *vet, int dimensao)
{
    float soma = 0;
    for (int i = 0; i < dimensao; i++)
    {
        soma += vet[i] * vet[i];
    }
    return sqrt(soma);
}