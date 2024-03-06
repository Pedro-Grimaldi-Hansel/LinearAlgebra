#include <iostream>

#include "src/TransformacaoLinear.h"
#include "src/AdicaoDeVetores.h"
#include "src/SubtracaoDeVetores.h"
#include "src/MultiplicacaoPorEscalar.h"
#include "src/DivisaoPorEscalar.h"
#include "src/NormaEuclidiana.h"
#include "src/Normalizacao.h"

using namespace std;

int main()
{
    cout << endl << "Dadas as opcoes:"<< endl; 
    cout << "0 - Sair" << endl;
    cout << "1 - Adicao de Vetores" << endl;
    cout << "2 - Subtracao de Vetores" << endl;
    cout << "3 - Multiplicacao de Vetor por Escalar" << endl;
    cout << "4 - Divisao de Vetor por Escalar" << endl;
    cout << "5 - Calculo da Norma Euclidiana" << endl;
    cout << "6 - Normalizacao de Vetor" << endl;
    cout << "7 - Transformacao Linear de Vetores" << endl;
    cout << endl << "Escolha a operacao a ser realizada: ";
    int opcao;
    cin >> opcao;
    cout << endl;
    if (opcao < 0 || opcao > 4)
    {
        cout << "Opcao invalida! Insira a opcao novamente:";
        cin >> opcao;
        cout << endl;
    }
    switch (opcao)  
    {   
        case 0:
        {   
            cout << "Saindo do programa..."<< endl;
            return 0;

            break;
        }

        case 1:
        {   
            AdicaoDeVetores adicaoDeVetores;
            adicaoDeVetores.adicionarVetores();

            break;
        }

        case 2:
        {   
            SubtracaoDeVetores subtracaoDeVetores;
            subtracaoDeVetores.subtrairVetores();

            break;
        }

        case 3:
        {            
            MultiplicacaoPorEscalar multiplicacaoPorEscalar;
            multiplicacaoPorEscalar.multiplicarPorEscalar();

            break;
        }

        case 4:
        {            
            DivisaoPorEscalar divisaoPorEscalar;
            divisaoPorEscalar.dividirPorEscalar();

            break;
        }

        case 5:
        {
            NormaEuclidiana normaEuclidiana;
            normaEuclidiana.calcularNorma();
            break;
        }

        case 6:
        {
            
            

            break;
        }

        case 7:
        {
            float a, b, c, d, x, y;

            cout << "De os valores do vetor de entrada: "<< endl;
            cin >> x >> y;

            cout << "Digite os valores da matriz 2x2 (a b c d): "<< endl;
            cin >> a >> b >> c >> d;

            TransformacaoLinear transformacaoLinear(a,b,c,d);
            transformacaoLinear.aplicarTransformacaoLinear(x, y);
            transformacaoLinear.imprimirResultado();            

            break;
        }
        
        default:
            break;
        }
    return 0;

}
