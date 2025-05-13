#ifndef LEITORDEVETORES_H_INCLUDED
#define LEITORDEVETORES_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <regex>

using namespace std;

class LeitorDeVetores {
public:
    static vector<double> lerVetor(const string& prompt);
    static vector<double> parseVetor(const string& entrada);
    static void imprimirVetor(const vector<double>& v);
};

inline vector<double> LeitorDeVetores::lerVetor(const string& prompt) {
    string entrada;
    vector<double> vetor;
    int tentativas = 0;
    const int maxTentativas = 3; // Limite opcional de tentativas

    do {
        if (tentativas > 0) {
            cout << "Erro: Entrada inválida! Tente novamente.\n";
            if (tentativas == maxTentativas) {
                cout << "Número máximo de tentativas excedido. Encerrando leitura.\n";
                return {}; // Retorna um vetor vazio após muitas tentativas
            }
        }

        cout << prompt;
        cin.sync(); // Garante que o buffer está completamente limpo antes da leitura
        getline(cin, entrada);

        vetor = parseVetor(entrada);
        tentativas++;

    } while (vetor.empty()); // Continua até uma entrada válida

    return vetor;
}

inline vector<double> LeitorDeVetores::parseVetor(const string& entrada) {
    vector<double> vetor;
    string limpando = entrada;

    // Remove caracteres indesejados, permitindo apenas números, vírgulas e o sinal de menos (- para números negativos)
    limpando = regex_replace(limpando, regex("[^0-9.,-]"), "");
    cout << "Entrada limpa: " << limpando << endl;

    if (limpando.empty()) { 
        cout << "Erro: Entrada inválida! Insira apenas números separados por vírgula.\n";
        return {};
    }

    stringstream ss(limpando);
    string valor;
    bool entradaValida = false;

    while (getline(ss, valor, ',')) {
        valor.erase(0, valor.find_first_not_of(" \t"));
        valor.erase(valor.find_last_not_of(" \t") + 1);

        if (valor.empty()) { 
            cout << "Erro: Um dos valores está vazio! Digite novamente.\n";
            return {};
        }

        try {
            vetor.push_back(stod(valor));
            entradaValida = true;
        } catch (...) {
            cout << "Erro: Valor inválido detectado (" << valor << "). Digite corretamente.\n";
            return {};
        }
    }

    if (!entradaValida) {
        cout << "Erro: Nenhum número válido foi inserido! Tente novamente.\n";
        return {};
    }

    return vetor;
}

inline void LeitorDeVetores::imprimirVetor(const vector<double>& v) {
    cout << "(";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << ")";
}

#endif // LEITORDEVETORES_H_INCLUDED
