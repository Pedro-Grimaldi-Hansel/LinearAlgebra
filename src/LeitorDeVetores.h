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
    static vector<double> readVector(const string& prompt);
    static vector<double> parseVector(const string& entry);
    static void printVector(const vector<double>& v);
};

inline vector<double> LeitorDeVetores::readVector(const string& prompt) {
    string entry;
    vector<double> vector;
    int attempts = 0;
    const int maxAttempts = 3;

    do {
        if (attempts > 0) {
            cout << "Erro: Entrada inválida! Tente novamente.\n";
            if (attempts == maxAttempts) {
                cout << "Número máximo de tentativas excedido. Encerrando leitura.\n";
                return {};
            }
        }

        cout << prompt;
        cin.sync();
        getline(cin, entry);

        vector = parseVector(entry);
        attempts++;

    } while (vector.empty());

    return vector;
}

inline vector<double> LeitorDeVetores::parseVector(const string& entry) {
    vector<double> vector;
    string inputProcessed = entry;


    inputProcessed = regex_replace(inputProcessed, regex("[^0-9.,-]"), "");

    if (inputProcessed.empty()) { 
        cout << "Erro: Entrada inválida! Insira apenas números separados por vírgula.\n";
        return {};
    }

    stringstream ss(inputProcessed);
    string value;
    bool validEntry = false;

    while (getline(ss, value, ',')) {
        value.erase(0, value.find_first_not_of(" \t"));
        value.erase(value.find_last_not_of(" \t") + 1);

        if (value.empty()) { 
            cout << "Erro: Um dos valores está vazio! Digite novamente.\n";
            return {};
        }

        try {
            vector.push_back(stod(value));
            validEntry = true;
        } catch (...) {
            cout << "Erro: Valor inválido detectado (" << value << "). Digite corretamente.\n";
            return {};
        }
    }

    if (!validEntry) {
        cout << "Erro: Nenhum número válido foi inserido! Tente novamente.\n";
        return {};
    }

    return vector;
}

inline void LeitorDeVetores::printVector(const vector<double>& v) {
    cout << "(";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ", ";
    }
    cout << ")";
}

#endif // LEITORDEVETORES_H_INCLUDED
