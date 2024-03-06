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
    NormaEuclidiana(int dimensoes);
    ~NormaEuclidiana();
    void calcularNorma();
};

#endif // NORMAEUCLIDIANA_H_INCLUDED

NormaEuclidiana::NormaEuclidiana(int dimensoes)
{
    dimensao = dimensoes;
    vet = new float[dimensoes];
}

NormaEuclidiana::~NormaEuclidiana(){
    delete[] vet;
}

void NormaEuclidiana::calcularNorma()
{
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

    cout << "Norma Euclidiana do vetor (magnitude): " << norma << endl;
}