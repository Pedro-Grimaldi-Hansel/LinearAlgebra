#include <iostream>
using namespace std;

#ifndef PRODUTOESCALAR_H_INCLUDED
#define PRODUTOESCALAR_H_INCLUDED

class ProdutoEscalar
{
private:
    float *vet1;
    float *vet2;
    int dimensao;
public:
    ProdutoEscalar();
    ~ProdutoEscalar();
};

#endif // PRODUTOESCALAR_H_INCLUDED

ProdutoEscalar::ProdutoEscalar()
{
}

ProdutoEscalar::~ProdutoEscalar()
{
}
