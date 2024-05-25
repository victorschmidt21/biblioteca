#include <stdio.h>  //biblioteca para usar printf e scanf
#include <stdlib.h>   //biblioteca para usar system
#include <string.h>    //biblioteca para usar strings
#include "variaveis.h"  //biblioteca com as variaveis
#include <windows.h>    //biblioteca para usar acentos
#include <locale.h>     //biblioteca para usar acentos

int voltarMenu()    //funcao para voltar ao menu
{
    printf("Pressione enter para voltar ao menu.\n");   //imprimir na tela
    getchar();  //ler o enter
    system("cls");  //limpar a tela
    menu();  //voltar ao menu
}

int leituraLivro(char *nomedoarquivo) {
    char livros1[50];
    int i = 0;
    arquivoLeitura;
    while (fread(&livros1, sizeof(livros1), 1, arquivo)) {
                 strcpy(livros[i].nome, livros1);
                 i++;
                 
    }
    elementoArray = i;
    arquivoFechar;

    return 0;
}

int leituraGenero(char *nomedoarquivo) {
    char genero[3];
    int i = 0;
    arquivoLeitura;
    while (fread(&genero, sizeof(genero), 1, arquivo)) {
                 strcpy(livros[i].genero, genero);
                 i++;
                 
    }
    arquivoFechar;

    return 0;
}

int cadastrarLivro(char *nomedoarquivo)     //funcao para cadastrar o livro]

{
    char nomes[50];  //definir um tamanho para o nome
    printf("digite o nome do livro: "); //imprimir na tela
    fgets(nomes, 50, stdin); //ler o nome
    fflush(stdin);  //limpar o buffer

    arquivoEditar;  //abrir o arquivo

    fwrite(&nomes, sizeof(nomes), 1, arquivo);   //escrever no arquivo

    arquivoFechar;  //fechar o arquivo

    return 0;
}

int cadastrarGenero(char *nomedoarquivo)    //funcao para cadastrar o genero]
{ 
    char genero[3];
    int num;
    do
    {
    printf("Selecione o genero do livro\n");    //imprimir na tela
    printf("[1] Romance     [2] Terror     [3] Contos\n");  
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
    fgets(genero, 10, stdin);   //ler o genero
    num = strtol(genero, NULL, 10);
    } while (num<0 || num>9);
    

    fflush(stdin);  //limpar o buffer

    arquivoEditar;  //abrir o arquivo


    fwrite(&genero, sizeof(genero), 1, arquivo);  //escrever no arquivo

    arquivoFechar;  //fechar o arquivo

    printf("Livro cadastrado com sucesso!\n");  //imprimir na tela
    return 0;
}

int livrosEmprestados()   //funcao para listar os livros emprestados
{
    printf("LIVROS EMPRESTADOS\n\n");   //imprimir na tela
    printf("Codigo|| Nome do Livro\n"); 
    for (int i = 0; i < (elementoArray); i++)   //loop para percorrer o array
    {
        if (livros[i].emprestimo == 1)  //condicao para verificar se o livro esta emprestado
        {
            printf("%d     || %s\n", i, livros[i].nome);    //imprimir na tela
        }
        else    //condicao para verificar se o livro nao esta emprestado
        {
            continue;   //continuar
        }
    }
    return 0;
}

int cadastrarCliente(char *nomedoarquivo)//funcao para cadastrar o cliente
{

    char nome2[50];//definir um tamano para o nome
    fgets(nome2, 50, stdin);
    printf("digite o nome do Cliente: \n");//imprimir na tela
    fgets(nome2, 50, stdin);//ler o nome
    fflush(stdin);//limpar o buffer

    arquivoEditar;//abrir o arquivo

    fwrite(&nome2, sizeof(nome2), 1, arquivo);  //   escrever no arquivo

    arquivoFechar;//fechar o arquivo

    return 0;//retornar 0
}

int cadastrarCpf(char *nomedoarquivo)//funcao para cadastrar o cpf
{
    char cpf[12];//definir um tamanho para o cpf
    fgets(cpf, 12, stdin);   //ler o cpf
    fflush(stdin);         //limpar o buffer
       
    printf("digite o CPF do Cliente: \n");  //imprimir na tela
    fgets(cpf, 12, stdin);      //ler o cpf
    fflush(stdin);      //limpar o buffer

    arquivoEditar;    //abrir o arquivo

    fwrite(&cpf, sizeof(cpf), 1, arquivo);    //escrever no arquivo

    arquivoFechar;  //fechar o arquivo

    return 0;
}

int cadastrartelefone(char *nomedoarquivo)    //funcao para cadastrar o telefone
{
    char telefone[11];  //definir um tamanho para o telefone
    printf("Digite o telefone do Cliente: \n");  //imprimir na tela
    fgets(telefone, 11, stdin);  //ler o telefone
    fflush(stdin);  //limpar o buffer

    arquivoEditar;  //abrir o arquivo

    fwrite(&telefone, sizeof(telefone), 1, arquivo);  //escrever no arquivo

    arquivoFechar;  //fechar o arquivo

    return 0;   //retornar 0
}

int listaClientes() //funcao para listar os clientes
{
    printf("Clientes:\n");  //imprimir na tela
    printf("Codigo|| Nome do Cliente\n\n"); 
    for (int i = 0; i < (elementoArray); i++)   //loop para percorrer o array
    {
        printf("%d     || %s\n", i, clientes[i].nome2); //imprimir na tela
    }

    return 0;
}

int generos()
{
    int codigo; //definir um codigo
    char s1[2]="1";
    char s2[2]="2";
    char s3[2]="3";
    char s4[2]="4";
    char s5[2]="5";
    char s6[2]="6";
    char s7[2]="7";
    char s8[2]="8";
    char s9[2]="9";
    printf("GENEROS\n\n");  //imprimir na tela
    printf("selecione o genero do livro\n");
    printf("[1] Romance     [2] Terror     [3] Contos\n");  
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n\n");
    scanf("%d", &codigo);   //ler o codigo
    switch (codigo) //condicao para verificar o codigo
    {
    case 1: //caso o codigo seja 1
        system("cls");
        printf("LIVROS DO GENERO ROMANCE:\n\n");        
        printf("Codigo|| Nome do Livro\n");  

    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s1) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

    case 2: //caso o codigo seja 2
        system("cls");
        printf("LIVROS DO GENERO TERROR:\n\n");   //imprimir na tela
        printf("Codigo|| Nome do Livro\n");   

    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s2) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;      //quebrar
    case 3:
        system("cls");
        printf("LIVROS DO GENERO CONTOS:\n\n");  //imprimir na tela
        printf("Codigo|| Nome do Livro\n");          

    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s3) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    
        break;  //quebrar
    case 4:    //caso o codigo seja 4
        system("cls");
        printf("LIVROS DO GENERO BIOGRAFIA:\n\n");  //imprimir na tela
        printf("Codigo|| Nome do Livro\n");
    
    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s4) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;  
    case 5: //caso o codigo seja 5
        system("cls");
        printf("LIVROS DO GENERO AUTOAJUDA:\n\n");  //imprimir na tela
        printf("Codigo|| Nome do Livro\n");
    
    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s5) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;
    case 6:
        system("cls");
        printf("LIVROS DO GENERO TRUE CRIME:\n\n");
        printf("Codigo|| Nome do Livro\n");
    
    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s6) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    
        break;
    case 7:
        system("cls");
        printf("LIVROS DO GENERO FICCAO:\n\n");
        printf("Codigo|| Nome do Livro\n");
    
    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s7) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    case 8:
        system("cls");
        printf("LIVROS DO GENERO POESIA:\n\n");
        printf("Codigo|| Nome do Livro\n");
    
    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s8) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    case 9:
        system("cls");
        printf("LIVROS DO GENERO INFANTIL:\n\n");
        printf("Codigo|| Nome do Livro\n");
    
    for (int i = 0; i < elementoArray; i++)
            if (strstr(livros[i].genero,s9) != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    default:    //caso o codigo seja invalido
        printf("Insira um codigo valido!\n");   //imprimir na tela
        break;  //quebrar
    }
    system("pause");    //pausar o sistema
    return 0;
}

int menuBiblioteca()    //funcao para o menu da biblioteca
{
    int selecao;        //definir uma selecao
    printf("Selecione a opcao desejada: \n");   //imprimir na tela
    printf("[1] Todos os livros \n");
    printf("[2] Generos \n");
    printf("[3] Livros emprestados \n");
    printf("[4] Voltar para o Menu \n");
    scanf("%i", &tecla);    //ler a tecla
    fflush(stdin);  //limpar o buffer

    switch (tecla)  //condicao para verificar a tecla
    {
    case 1: //caso a tecla seja 1
        system("cls");
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        Biblioteca();   //chamar a funcao
        break;  //quebrar
    case 2:
        system("cls");
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        generos();
        break;
    case 3:
        system("cls");
        livrosEmprestados();
        break;
    case 4:
        menu();
    default:
        printf("Codigo invalido. Tente novamente!"); 
        menuBiblioteca();   //chamar a funcao
        break;  //quebrar
    }
}

int Biblioteca() 
{
    printf("TODOS OS LIVROS\n\n");

    for (int i = 0; i < elementoArray; i++) 
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }

    return 0;

}

int emprestimoLivro()   //funcao para o emprestimo do livro
{
    int codigo; //definir um codigo

    printf("EMPRESTIMO\n\n");   //imprimir na tela
    int sentinela = 0;  //definir uma sentinela
    while (sentinela == 0)  //condicao para verificar a sentinela
    {   

        printf("Digite o codigo do livro: \n"); //imprimir na tela
        scanf("%d", &codigo);   //ler o codigo
        for (int i = 1; i < elementoArray; i++)  //loop para percorrer o array
        {

            if (livros[i].emprestimo == 1)  //condicao para verificar se o livro esta emprestado
            {
                printf("O livro %s ja esta emprestado.", livros[i].nome);  //imprimir na tela
                int condicao = 0;   //definir uma condicao
                printf("(1)Tentar novamente              (2)Voltar ao menu");   //imprimir na tela
                scanf("%i", &condicao); //ler a condicao
                fflush(stdin);  //limpar o buffer
                if (condicao == 1)  //condicao para verificar a condicao
                {
                    break;  //quebrar
                }
                else    //condicao para verificar a condicao
                {
                    menu(); //voltar ao menu
                }
            }
            if (codigo < 0 || codigo >= elementoArray)  //condicao para verificar o codigo
            {
                printf("Digite um codigo valido!\n");   //imprimir na tela
                break;  //quebrar
            }
            if (codigo == i)    //condicao para verificar o codigo
            {
                printf("\nLivro escolhido: \n");    //imprimir na tela
                printf("%s", livros[i].nome);   //imprimir na tela
                livros[i].emprestimo = 1;   //definir o emprestimo
                sentinela = 1;  //definir a sentinela
                break;  //quebrar
            }
        }
    }
    int sentinela2 = 0; //definir uma sentinela

    while (sentinela2 == 0) //condicao para verificar a sentinela
    {

        printf("Digite o codigo do Cliente: \n");   //imprimir na tela
        scanf("%d", &codigo);   //ler o codigo
        for (int i = 0; i < elementoArray; i++)  //loop para percorrer o array
        {
            if (clientes[codigo].emprestimo == 1)   //condicao para verificar se o cliente esta com o livro
            {
                printf("O cliente ");   //imprimir na tela
                printf("%s ja possui um emprestimo.", clientes[codigo].nome2);  //imprimir na tela
                int condicao = 0;   //definir uma condicao
                printf("(1)Tentar novamente              (2)Voltar ao menu\n"); //imprimir na tela
                scanf("%i", &condicao); //ler a condicao
                fflush(stdin);  //limpar o buffer
                if (condicao == 1)  //condicao para verificar a condicao
                {
                    break;  //quebrar
                }
                else    //condicao para verificar a condicao
                {
                    menu(); //voltar ao menu
                }
            }
            if (codigo < 0 || codigo >= elementoArray)  //condicao para verificar o codigo
            {
                printf("Digite um codigo valido!\n");       //imprimir na tela
                break;
            }
            if (codigo == i)    //condicao para verificar o codigo
            {
                printf("\nCliente escolhido: \n\n");    //imprimir na tela
                printf("%s", clientes[i].nome2);    //imprimir na tela
                clientes[i].emprestimo = 1; //definir o emprestimo
                sentinela2 = 1; //definir a sentinela
                break;  //quebrar
            }
        }
    }
    printf("Empréstimo realizado com sucesso!!\n"); //imprimir na tela
    menu(); //voltar ao menu
    return 0;   //retornar 0
}

int devolucao()
{
    int codigo;
    printf("\nDEVOLUÇÃO\n");

    int sentinela = 0;
    while (sentinela == 0)
    {
        printf("Digite o código do livro.\n");
        scanf("%i", &codigo);
        for (int i = 1; i < elementoArray; i++)
        {
            if (livros[i].emprestimo == 0)
            {
                int condicao2 = 0;
                printf("O livro ");
                printf("%s não esta emprestado.\n", livros[i].nome);
                printf("(1)Tentar novamente              (2)Voltar ao menu\n");
                scanf("%i", &condicao2);
                fflush(stdin);
                if (condicao2 == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }

            if (codigo < 0 || codigo >= elementoArray)
            {
                printf("Digite um código válido!\n");
                break;
            }
            if (codigo == i)
            {
                printf("\nLivro devolvido: ");
                printf("%s", livros[i].nome);
                livros[i].emprestimo = 0;
                sentinela = 1;
                break;
            }
        }
    }

    int sentinela2 = 0;
    while (sentinela2 == 0)
    {

        printf("Digite o código do Cliente: \n");
        scanf("%d", &codigo);
        for (int i = 0; i < elementoArray; i++)
        {
            if (clientes[i].emprestimo == 0)
            {
                int condicao = 0;
                printf("O cliente %s não possui empréstimo.\n", clientes[i].nome2);
                printf("[1]Tentar novamente              [2]Voltar ao menu\n");
                scanf("%i", &condicao);
                fflush(stdin);
                if (condicao == 1)
                {
                    break;
                }
                else
                {
                    menu();
                }
            }
            if (codigo < 0 || codigo >= elementoArray)
            {
                printf("Digite um código válido!\n");
                break;
            }
            if (codigo == i)
            {
                printf("\nCliente devolução: ");
                printf("%s\n", clientes[i].nome2);
                clientes[i].emprestimo = 0;
                sentinela2 = 1;
                break;
            }
        }
        printf("Devolução realizado com sucesso!!\n");
        menu();
        return 0;
    }
}

int menu()
{
    int tecla;
    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Biblioteca \n");
    printf("[2] Cadastrar Livro \n");
    printf("[3] Clientes Cadastrados \n");
    printf("[4] Cadastrar Clientes \n");
    printf("[5] Empréstimo de livros \n");
    printf("[6] Devolução de livros \n");
    printf("[7] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);
    switch (tecla)
    {
    case 1:
        system("cls");
        menuBiblioteca();
        voltarMenu();
        break;
    case 2:
        cadastrarLivro("livros.bin");
        cadastrarGenero("genero.bin");
        voltarMenu();
        break;
    case 3:
        system("cls");
        listaClientes();
        char resposta;
        printf("\nDeseja entrar um novo cliente? (s/n): ");
        scanf(" %c", &resposta);
        if (resposta == 's' || resposta == 'S') {
        cadastrarCliente("cliente.bin");
        cadastrarCpf("cpf.bin");
        voltarMenu();
        } else {
        
          voltarMenu();
        }
        break;
    case 4:
        cadastrarCliente("cliente.bin");
        cadastrarCpf("cpf.bin");
        cadastrartelefone("telefone.bin");
        voltarMenu();
        break;
    case 5:
        emprestimoLivro("livros.bin");
        voltarMenu();
        break;
    case 6:
        devolucao("livros.bin");
        voltarMenu();
        break;
    case 7:
        system("cls");
        printf("SISTEMA ENCERRADO!");
        exit(0);
        break;
    case 8:
        system("cls");
        leituraLivro("livros.bin");
        voltarMenu();
    default:
        system("cls");
        printf("Opção inválida \n\n");
        menu();
        break;

        return 0;
    }
}

void inicio()
{
    printf("\n\n   \t\t\t\t\tSEJA BEM-VINDO A BIBLIOTECA BPK\n\n");
    printf("\t\t\t\t\tPRESSIONE ENTER PARA CONTINUAR");
    getchar();
    fflush(stdin);
    system("cls");
    menu();
}

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    inicio();
    return 0;
}