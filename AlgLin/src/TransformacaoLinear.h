#include <iostream>
using namespace std;

#ifndef TRANSFORMACAOLINEAR_H_INCLUDED
#define TRANSFORMACAOLINEAR_H_INCLUDED

class TransformacaoLinear
{
private:
    float vetorEntrada[2]; //vetor de entrada
    float vetorSaida[2]; //vetor de saida
    float matriz[2][2]; //matriz de transformacao

public:
    TransformacaoLinear(float a, float b, float c, float d);
    ~TransformacaoLinear();
    void aplicarTransformacaoLinear(float x, float y); // método para definir o vetor de entrada e aplicar a transformacao linear 
    void imprimirResultado(); // método para imprimir o vetor de saída
};

#endif // TRANSFORMACAOLINEAR_H_INCLUDED

using namespace std;

TransformacaoLinear::TransformacaoLinear(float a, float b, float c, float d)
{
    // Inicializa a matriz de transformação
    matriz[0][0] = a;
    matriz[0][1] = b;
    matriz[1][0] = c;
    matriz[1][1] = d;
}

TransformacaoLinear::~TransformacaoLinear()
{
}

void TransformacaoLinear::aplicarTransformacaoLinear(float x, float y)
{
    // Define o vetor de entrada
    vetorEntrada[0] = x;
    vetorEntrada[1] = y;

     // Adicione impressões para depuração
    cout << "Matriz de Transformacao:" << endl;
    cout << matriz[0][0] << " " << matriz[0][1] << endl;
    cout << matriz[1][0] << " " << matriz[1][1] << endl;

    cout << "Vetor de Entrada: [" << vetorEntrada[0] << ", " << vetorEntrada[1] << "]" << endl;

    // Calcula o vetor de saída
    vetorSaida[0] = (matriz[0][0] * vetorEntrada[0]) + (matriz[0][1] * vetorEntrada[1]);
    vetorSaida[1]= (matriz[1][0] * vetorEntrada[0]) + (matriz[1][1] * vetorEntrada[1]);
}

void TransformacaoLinear::imprimirResultado()
{
    cout << "Resultado: [" << vetorSaida[0] << ", " << vetorSaida[1] << "]" << endl;
}