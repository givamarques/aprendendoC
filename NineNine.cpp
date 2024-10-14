#include <iostream> //Inclui o cabeçalho <iostream>, que contém declarações para entrada e saída padrão (como cin e cout)
#include <vector> //Inclui o cabeçalho <vector>, que contém declarações para o tipo de dados vector, um contêiner dinâmico que pode armazenar uma sequência de elementos.
#include <string> //Inclui o cabeçalho <string>, que contém declarações para o tipo de dados string, usado para representar sequências de caracteres.

using namespace std; //Esta linha diz ao compilador para usar o namespace padrão std, que contém a maioria dos nomes de tipos e funções do C++.

int main() //Esta linha define a função principal do programa, onde a execução começa.
{
    int n = 1; //Declara uma variável inteira chamada n e a inicializa com o valor 1.
    string frase = "Contando ate 99: "; //Declara uma variável string chamada frase e a inicializa com a string "Contando ate 1 bi: ".

    while (n < 100) { //Inicia um loop while que continuará a ser executado enquanto a condição n < 1'000'000'000 for verdadeira.
        cout << frase << n << endl; //Imprime a string frase seguida pelo valor atual de n e uma nova linha na saída padrão.
        //cout eh usado para imprimir dados na tela. endl cria uma quebra de linha
        n++; //Incrementa o valor de n em 1.
    }

    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso.
}