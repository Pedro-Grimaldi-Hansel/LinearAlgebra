#include <iostream>

#include "src/TransformacaoLinear.h"
#include "src/AdicaoDeVetores.h"
#include "src/MultiplicacaoPorEscalar.h"
#include "src/NormaEuclidiana.h"
#include "src/Normalizacao.h"
#include "src/ProdutoEscalar.h"
#include "src/ProdutoVetorial.h"

using namespace std;

int main()
{
    cout << endl << "Dadas as opcoes:"<< endl; 
    cout << "0 - Sair" << endl;
    cout << "1 - Adicao de Vetores" << endl;
    cout << "2 - Multiplicacao de Vetor por Escalar" << endl;
    cout << "3 - Calculo da Norma Euclidiana" << endl;
    cout << "4 - Normalizacao de Vetor" << endl;
    cout << "5 - Produto Escalar" << endl;
    cout << "6 - Produto Vetorial" << endl;
    cout << "7 - Transformacao Linear de Vetores" << endl;
    cout << endl << "Escolha a operacao a ser realizada: ";
    int opcao;
    cin >> opcao;
    cout << endl;

    while (opcao < 0 || opcao > 9)
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
        }

        case 1:
        {   
            vector<double> vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
            vector<double> vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");

            if(vet1.size() != vet2.size() ) {
                cout << "\nErro: Vetores de diferentes dimensoes. A operacao de adicao nao pode ser realizada adicione novamente os vetores.\n\n";
                vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
                vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");
            }

            vector<double> result = AdicaoDeVetores::adicionarVetores(vet1, vet2);
            cout << "\nResultado da soma: ";
            LeitorDeVetores::printVector(result);
            cout << endl;

            break;
        }

        case 2:
        {   
            vector<double> vet = LeitorDeVetores::readVector("Digite o vetor no formato (x,y,z,...): ");
            double escalar;
            cout << "Digite o escalar sem parenteses: ";
            cin >> escalar;
            cout << escalar << endl;
            vector<double> result = MultiplicacaoPorEscalar::multiplicarPorEscalar(vet, escalar);
            cout << "\nResultado da multiplicacao: ";
            LeitorDeVetores::printVector(result);
            cout << endl;

            break;
        }

        case 3:
        {            
            vector<double> vet = LeitorDeVetores::readVector("Digite o vetor no formato (x,y,z,...): ");
            double resultado = NormaEuclidiana::normaEuclidiana(vet);
            cout << "\nResultado da norma euclidiana: " << resultado << endl;

            break; 
        }

        case 4:
        {            
            vector<double> vet = LeitorDeVetores::readVector("Digite o vetor no formato (x,y,z,...): ");
            vector <double> result = Normalizacao::normalizarVetor(vet);
            cout << "\nResultado da normalizacao: ";
            LeitorDeVetores::printVector(result);
            cout << endl;

            break;
        }

        case 5:
        {
            vector<double> vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
            vector<double> vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");

            if(vet1.size() != vet2.size() ) {
                cout << "\nErro: Vetores de diferentes dimensoes. O produto escalar nao pode ser calculado, adicione novamente os vetores.\n\n";
                vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z,...): ");
                vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z,...): ");
            }

            double result = ProdutoEscalar::produtoEscalar(vet1, vet2);
            cout << "\nResultado do produto escalar: " << result << endl;

            break;
        }

        case 6:
        {
            vector<double> vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor de 3 dimensoes no formato (x,y,z): ");
            vector<double> vet2 = LeitorDeVetores::readVector("Digite o segundo vetor de 3 dimensoes no formato (x,y,z): ");

            if(vet1.size() != vet2.size() ) {
                cout << "\nErro: Vetores de diferentes dimensoes. O produto vetorial nao pode ser calculado, adicione novamente os vetores de 3 dimensoes.\n\n";
                vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z): ");
                vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z): ");
            }
            if(vet1.size() != 3 || vet2.size() != 3 ) {
                cout << "\nErro: Ambos os vetores tem que ter 3 dimensoes.\n\n";
                vet1 = LeitorDeVetores::readVector("Digite o primeiro vetor no formato (x,y,z): ");
                vet2 = LeitorDeVetores::readVector("Digite o segundo vetor no formato (x,y,z): ");
            }

            vector<double> result = ProdutoVetorial::produtoVetorial(vet1, vet2);
            cout << "\nResultado do produto vetorial: ";
            LeitorDeVetores::printVector(result);
            cout << endl;

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
            break;
        }

        default:
            break;
        }
    return 0;

}
