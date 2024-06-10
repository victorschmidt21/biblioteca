#ifndef VARIAVEIS_H // Se não definido
#define VARIAVEIS_H // Defina

FILE* arquivo;  // Variável para manipulação de arquivos
#define tamanho 100 // Tamanho máximo de elementos
#define arquivoFechar fclose(arquivo);  // Fecha o arquivo
#define arquivoLeitura arquivo = fopen(nomedoarquivo, "rb"); // Abre o arquivo para leitura
#define arquivoEditar1 arquivo = fopen(nomedoarquivo, "rb+");
#define arquivoEditar2 arquivo = fopen(nomedoarquivo2, "rb+");
#define arquivoEditar3 arquivo = fopen(nomedoarquivo3, "rb+");
#define arquivoEditar4 arquivo = fopen(nomedoarquivo4, "rb+");
#define arquivoEditar5 arquivo = fopen(nomedoarquivo5, "rb+");  
#define arquivoEditar arquivo = fopen(nomedoarquivo, "ab");  // Abre o arquivo para edição

int elementoArrayLivro = 1;
int elementoArrayCliente = 1;  // Elemento do array
int tecla = 0;  // Variável para armazenar a tecla pressionada
char array[tamanho][tamanho];   // Array para armazenar as informações

struct informacoesLivros {  // Estrutura para armazenar as informações dos livros
    char nome[50];
    char genero[3];
    char genero2[20];
    char nomeAutor[50];
    char numeroPag[10];
    char emprestimo[3];
};


struct informacoesClientes {    // Estrutura para armazenar as informações dos clientes
    char nome2[50];
    char cpf[20];   // CPF do cliente
    char telefone[20];  // Telefone do cliente
    char dataDeNascimento[15];   // Data de nascimento do cliente
    char emprestimo2[3]; // Quantidade de empréstimos
};  // Fim da estrutura

struct informacoesClientes clientes[tamanho];   // Array de estruturas para armazenar as informações dos clientes

struct informacoesLivros livros[tamanho];   // Array de estruturas para armazenar as informações dos livros

#endif  // Fim do ifndef