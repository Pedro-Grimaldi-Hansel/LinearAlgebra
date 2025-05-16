#ifndef MULTIPLICACAOPORESCALAR_H_INCLUDED
#define MULTIPLICACAOPORESCALAR_H_INCLUDED

#include <iostream>
#include "LeitorDeVetores.h"

using namespace std;

class MultiplicacaoPorEscalar
{
public:
    static vector<double> multiplicarPorEscalar(vector<double>, double);
};

inline vector<double> MultiplicacaoPorEscalar::multiplicarPorEscalar(vector<double> vet, double escalar)
{
    vector<double> resultado(vet.size());
    for (size_t i = 0; i < vet.size(); i++)
    {
        resultado[i] = vet[i] * escalar;
    }
    return resultado;
}

#endif // MULTIPLICACAOPORESCALAR_H_INCLUDED


