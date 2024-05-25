#ifndef VARIAVEIS_H // Se não definido
#define VARIAVEIS_H // Defina

FILE* arquivo;  // Variável para manipulação de arquivos
#define tamanho 100 // Tamanho máximo de elementos
#define arquivoFechar fclose(arquivo);  // Fecha o arquivo
#define arquivoLeitura arquivo = fopen(nomedoarquivo, "rb"); // Abre o arquivo para leitura
#define arquivoLeitura2 arquivo = fopen(nomedoarquivo2, "rb");   // Abre o arquivo para leitura
#define arquivoLeitura3 arquivo = fopen(nomedoarquivo3, "rb");   // Abre o arquivo para leitura
#define arquivoEditar arquivo = fopen(nomedoarquivo, "ab");  // Abre o arquivo para edição

int elementoArray = 1;  // Elemento do array
int tecla = 0;  // Variável para armazenar a tecla pressionada
char array[tamanho][tamanho];   // Array para armazenar as informações

struct informacoesLivros {  // Estrutura para armazenar as informações dos livros
    char nome[50];
    char genero[3];
    char emprestimo;
};


struct informacoesClientes {    // Estrutura para armazenar as informações dos clientes
    char nome2[50]; // Nome do cliente
    char cpf[12];   // CPF do cliente
    char telefone[11];  // Telefone do cliente
    char dataDeNascimento[8];   // Data de nascimento do cliente
    int emprestimo; // Quantidade de empréstimos
};  // Fim da estrutura

struct informacoesClientes clientes[tamanho];   // Array de estruturas para armazenar as informações dos clientes

struct informacoesLivros livros[tamanho];   // Array de estruturas para armazenar as informações dos livros

#endif  // Fim do ifndef