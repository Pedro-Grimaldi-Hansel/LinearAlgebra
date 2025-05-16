#ifndef NORMAEUCLIDIANA_H_INCLUDED
#define NORMAEUCLIDIANA_H_INCLUDED

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class NormaEuclidiana
{
public:
    double normaEuclidiana(vector<double>);
};

double NormaEuclidiana::normaEuclidiana(vector<double> vet)
{
    double sum = 0.0;
    for(int i = 0; i < vet.size(); i++)
    {
        vet[i] = pow(vet[i], 2); 
        sum += vet[i];   
    }
    double result = sqrt(sum);
    return result;
}

#endif // NORMAEUCLIDIANA_H_INCLUDED
