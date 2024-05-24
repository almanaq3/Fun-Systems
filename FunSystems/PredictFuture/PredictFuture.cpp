#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

// Funcao para gerar a previsao com base nas frases
string gerarPrevisao(int ano, const string& nome){
    string temas[] = {
        "voce ganhara uma fortuna inesperada.",
        "voce encontrara o amor da sua vida.",
        "voce viajara para um lugar exotico.",
        "voce tera uma grande oportunidade profissional.",
        "voce fara uma descoberta importante.",
        "voce enfrentara um desafio significativo.",
        "voce tera um ano de muita saude e felicidade.",
        "voce ajudara muitas pessoas com seu trabalho.",
        "Voce recebera um reconhecimento publico por suas realizacoes.",
        "Um antigo sonho finalmente se realizara para voce.",
        "Uma pessoa importante entrara em sua vida para guia-lo em direcao ao sucesso.",
        "Voce sera agraciado com uma inspiracao divina que transformara sua vida.",
        "Um novo hobby ou interesse trara muita alegria e satisfacao para sua vida diaria.",
        "Sua criatividade atingira novos patamares, abrindo portas para oportunidades unicas.",
        "Um velho problema sera resolvido de forma surpreendente, trazendo alivio e paz de espirito.",
        "Uma amizade que parecia perdida sera reavivada, trazendo consigo momentos de camaradagem inesqueciveis.",
        "Uma viagem inesperada levara voce a descobrir um novo talento ou paixao.",
        "Uma conexao espiritual profunda trara clareza e direcao para sua jornada pessoal.",
        "Voce sera abencoado com uma oportunidade de fazer uma grande diferenca na vida de alguem.",
        "Uma onda de sorte ira impulsiona-lo em direcao aos seus objetivos mais ambiciosos.",
        "Um momento de introspeccao revelara o verdadeiro proposito de sua existencia.",
        "Um gesto de bondade que voce fizer sera recompensado de maneira inesperada.",
        "Uma nova conexao social abrira portas para um circulo de amigos inspiradores.",
        "Voce sera reconhecido como um lider em sua comunidade, trazendo mudancas positivas.",
        "Um desafio emocionante o aguarda, preparando-o para um crescimento pessoal significativo.",
        "Uma oportunidade de viagem de ultima hora trara aventuras inesqueciveis e memorias preciosas.",
        "Um encontro casual levara a uma colaboracao profissional lucrativa e gratificante.",
        "Uma reviravolta do destino revelara um novo caminho cheio de possibilidades emocionantes.",
    };

    int indice = rand() % 28; // Seleciona um tema aleatorio entre as 28 frases
    return "Em " +  to_string(ano) + ", " + nome + ", " + temas[indice];
}

int main(){
    // Inicializa o gerador de numeros aleatorios
    srand(static_cast <unsigned int> (time(0)));

    // Variaveis para armazenar nome, ano e sn
    string nome; int ano; char sn;

    do {
        // Inputs
        cout << "Digite o nome da pessoa: ";
        getline(cin, nome);

        if(!nome.empty()){
            cout << "Digite o ano que deseja saber o futuro: ";
            cin >> ano;

            // Limpar o buffer de entrada do input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Gerar Previsao
            string previsao = gerarPrevisao(ano, nome);

            cout << previsao << endl;   

            cout << "Deseja Continuar? (s/n): ";
            cin >> sn;
        }

    } while (sn == 's' || sn == 'S');
    
    cout << "Jogo terminado!";

    return 0;
}
