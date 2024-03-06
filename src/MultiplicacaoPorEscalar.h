#include <iostream>
using namespace std;

#ifndef MULTIPLICACAOPORESCALAR_H_INCLUDED
#define MULTIPLICACAOPORESCALAR_H_INCLUDED

class MultiplicacaoPorEscalar
{
private:
    float *vet;
    int dimensao;

public:
    MultiplicacaoPorEscalar();
    ~MultiplicacaoPorEscalar();
    void multiplicarPorEscalar();
};

#endif // MULTIPLICACAOPORESCALAR_H_INCLUDED

MultiplicacaoPorEscalar::MultiplicacaoPorEscalar(){}

MultiplicacaoPorEscalar::~MultiplicacaoPorEscalar()
{
    delete[] vet;
}

void MultiplicacaoPorEscalar::multiplicarPorEscalar()
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

    float *resultado = new float[dimensao];
    for (int i = 0; i < dimensao; i++)
    {
        resultado[i] = vet[i] * escalar;
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

