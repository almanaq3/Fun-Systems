#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Função para contar palavra
int countWords(const string& text){
    int wordCount = 0;
    bool inWord = false;

    for (char c : text){
        if (isspace(c)){
            inWord = false;

        }else if (!inWord) {
            inWord = true;
            ++wordCount;
        }
    }

    return wordCount;
}

int main(){
    string input;

    while (true) {
        cout << "Digite um texto (digite 'Sair' para encerrar): ";
        getline(cin, input);

        if (input == "Sair") {
            break;
        }

        int numWords = countWords(input);
        cout << "Numero de palavras no texto: " << numWords << endl;
    }

    cout << "Sistema encerrado com sucesso!" << endl;

    return 0;
}