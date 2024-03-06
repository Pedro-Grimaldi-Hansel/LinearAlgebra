#include <iostream>
using namespace std;

#ifndef DIVISAOPORESCALAR_H_INCLUDED
#define DIVISAOPORESCALAR_H_INCLUDED

class DivisaoPorEscalar
{
private:
    float *vet;
    int dimensao;

public:
    DivisaoPorEscalar();
    ~DivisaoPorEscalar();
    void dividirPorEscalar();
    float* divisaoPorEscalar_FuncaoInterna(int dimensao, float *vet, float escalar);
};

#endif // DIVISAOPORESCALAR_H_INCLUDED

DivisaoPorEscalar::DivisaoPorEscalar(){}

DivisaoPorEscalar::~DivisaoPorEscalar()
{
    delete[] vet;
}

void DivisaoPorEscalar::dividirPorEscalar()
{   
    cout << "De o numero de dimensoes do vetor: "<< endl;
    cin >> dimensao;

    vet = new float[dimensao];

    cout << endl<< "De os valores do vetor: "<< endl;
    for (int i = 0; i < dimensao; i++)
    {
        cin >> vet[i];
    }

    float escalar;
    cout << endl << "De o valor do escalar: "<< endl;
    cin >> escalar;

    while (escalar == 0)
    {
        cout << "Nao e possivel dividir por zero, de outro valor para o escalar:" << endl;
        cin >> escalar;
    }

    float *resultado = new float[dimensao];
    for (int i = 0; i < dimensao; i++)
    {
        resultado[i] = vet[i] / escalar;
    }
    cout << endl << "Vetor resultante: [";
    for (int i = 0; i < dimensao; i++)
    {
        if (dimensao - 1 == i)
        {
            cout << resultado[i] << "]" << endl;
        }
        if (dimensao - 1 != i)
        {
            cout << resultado[i] << ", ";
        }
    }
    delete[] resultado;
}

float* DivisaoPorEscalar::divisaoPorEscalar_FuncaoInterna(int dimensao, float *vet, float escalar)
{
    if (escalar == 0)
    {
        cout << "Nao e possivel dividir por zero!" << endl;
        return 0;
    }
    
    float *resultado = new float[dimensao];
    for (int i = 0; i < dimensao; i++)
    {
        resultado[i] = vet[i] / escalar;
    }

    return resultado;
}