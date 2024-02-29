#include <iostream>
using namespace std;

#ifndef ADICAODEVETORES_H_INCLUDED
#define ADICAODEVETORES_H_INCLUDED

class AdicaoDeVetores
{
private:
    float vet2D_1[2];
    float vet2D_2[2];
    float vet3D_1[3];
    float vet3D_2[3];

public:
    AdicaoDeVetores();
    ~AdicaoDeVetores();
    void adicionarVetores2D(float x1, float y1, float x2, float y2);
    void adicionarVetores3D(float x1, float y1, float z1, float x2, float y2, float z2);
};

#endif // ADICAODEVETORES_H_INCLUDED

AdicaoDeVetores::AdicaoDeVetores(){}

AdicaoDeVetores::~AdicaoDeVetores(){}

void AdicaoDeVetores::adicionarVetores2D(float x1, float y1, float x2, float y2)
{
    vet2D_1[0] = x1;
    vet2D_1[1] = y1;
    vet2D_2[0] = x2;
    vet2D_2[1] = y2;

    cout << "Vetor 1: [" << vet2D_1[0] << ", " << vet2D_1[1] << "]" << endl;
    cout << "Vetor 2: [" << vet2D_2[0] << ", " << vet2D_2[1] << "]" << endl;

    cout << "Resultado: [" << vet2D_1[0] + vet2D_2[0] << ", " << vet2D_1[1] + vet2D_2[1] << "]" << endl;
}

void AdicaoDeVetores::adicionarVetores3D(float x1, float y1, float z1, float x2, float y2, float z2)
{
    vet3D_1[0] = x1;
    vet3D_1[1] = y1;
    vet3D_1[2] = z1;
    vet3D_2[0] = x2;
    vet3D_2[1] = y2;
    vet3D_2[2] = z2;

    cout << "Vetor 1: [" << vet3D_1[0] << ", " << vet3D_1[1] << ", " << vet3D_1[2] << "]" << endl;
    cout << "Vetor 2: [" << vet3D_2[0] << ", " << vet3D_2[1] << ", " << vet3D_2[2] << "]" << endl;

    cout << "Resultado: [" << vet3D_1[0] + vet3D_2[0] << ", " << vet3D_1[1] + vet3D_2[1] << ", " << vet3D_1[2] + vet3D_2[2] << "]" << endl;
}