#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include <windows.h>
#include <locale.h>
#include <conio.h>

void voltarMenu()
{
    printf("Pressione enter para voltar ao menu.\n");
    getchar();
    system("cls");
    menu();
    return;
}

void leituraLivro(char *nomedoarquivo)
{
    char livros1[50];
    int i = 0;
    arquivoLeitura;
    while (fread(&livros1, sizeof(livros1), 1, arquivo))
    {
        strcpy(livros[i].nome, livros1);
        i++;
    }
    elementoArrayLivro = i;
    arquivoFechar;

    return;
}

void leituraEmprestrimoLivro(char *nomedoarquivo)
{
    char emprestimo[3];
    int i = 0;
    arquivoLeitura;
    while (fread(&emprestimo, sizeof(emprestimo), 1, arquivo))
    {
        strcpy(livros[i].emprestimo, emprestimo);
        i++;
    }

    arquivoFechar;
    return;
}

void leituraEmprestrimoCliente(char *nomedoarquivo)
{
    char emprestimo[3];
    int i = 0;
    arquivoLeitura;
    while (fread(&emprestimo, sizeof(emprestimo), 1, arquivo))
    {
        strcpy(clientes[i].emprestimo2, emprestimo);
        i++;
    }

    arquivoFechar;
    return;
}

void leituraAutor(char *nomedoarquivo)
{
    char autor1[50];
    int i = 0;
    arquivoLeitura;
    while (fread(&autor1, sizeof(autor1), 1, arquivo))
    {
        strcpy(livros[i].nomeAutor, autor1);
        i++;
    }
    arquivoFechar;

    return;
}

void leituraPAG(char *nomedoarquivo)
{
    char numeroPag[10];
    int i = 0;
    arquivoLeitura;
    while (fread(&numeroPag, sizeof(numeroPag), 1, arquivo))
    {
        strcpy(livros[i].numeroPag, numeroPag);
        i++;
    }
    arquivoFechar;
    return;
}

void leituraGenero(char *nomedoarquivo)
{
    char genero[3];
    int i = 0;
    int num;
    arquivoLeitura;
    while (fread(&genero, sizeof(genero), 1, arquivo))
    {
        strcpy(livros[i].genero, genero);
        num = strtol(genero, NULL, 10);
        switch (num)
        {
        case 1:
            strcpy(livros[i].genero2, "Romance");
            break;
        case 2:
            strcpy(livros[i].genero2, "Terror");
            break;
        case 3:
            strcpy(livros[i].genero2, "Contos");
            break;
        case 4:
            strcpy(livros[i].genero2, "Biografia");
            break;
        case 5:
            strcpy(livros[i].genero2, "Autoajuda");
            break;
        case 6:
            strcpy(livros[i].genero2, "True Crime");
            break;
        case 7:
            strcpy(livros[i].genero2, "Ficção");
            break;
        case 8:
            strcpy(livros[i].genero2, "Poesia");
            break;
        case 9:
            strcpy(livros[i].genero2, "Infantil");
            break;
        default:
            break;
        }
        i++;
    }
    arquivoFechar;
    return;
}

void leituraClientes(char *nomedoarquivo)
{
    char clientes1[20];
    int i = 0;
    arquivoLeitura;
    while (fread(&clientes1, sizeof(clientes1), 1, arquivo))
    {
        strcpy(clientes[i].nome2, clientes1);
        i++;
    }

    elementoArrayCliente = i;
    arquivoFechar;
    return;
}

void leituraCPF(char *nomedoarquivo)
{

    char cpf[20];
    int i = 0;
    arquivoLeitura;
    while (fread(&cpf, sizeof(cpf), 1, arquivo))
    {
        strcpy(clientes[i].cpf, cpf);
        i++;
    }
    arquivoFechar;

    return;
}

void leituraTelefone(char *nomedoarquivo)
{

    char telefone[20];
    int i = 0;
    arquivoLeitura;
    while (fread(&telefone, sizeof(telefone), 1, arquivo))
    {
        strcpy(clientes[i].telefone, telefone);
        i++;
    }
    arquivoFechar;
    return;
}

void leituraDataNascimento(char *nomedoarquivo)
{

    char data[15];
    int i = 0;
    arquivoLeitura;
    while (fread(&data, sizeof(data), 1, arquivo))
    {
        strcpy(clientes[i].dataDeNascimento, data);
        i++;
    }

    arquivoFechar;

    return;
}

void cadastrarLivro(char *nomedoarquivo)

{
    char nomes[50];
    printf("digite o nome do livro: ");
    fgets(nomes, 50, stdin);
    fflush(stdin);

    arquivoEditar;

    fwrite(&nomes, sizeof(nomes), 1, arquivo);

    arquivoFechar;

    return;
}

void cadastrarGenero(char *nomedoarquivo)
{
    char genero[3];
    int num;
    do
    {
        printf("Selecione o genero do livro\n");
        printf("[1] Romance     [2] Terror     [3] Contos\n");
        printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
        printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
        fgets(genero, 3, stdin);
        num = strtol(genero, NULL, 10);
    } while (num < 0 || num > 9);

    fflush(stdin);

    arquivoEditar;

    fwrite(&genero, sizeof(genero), 1, arquivo);

    arquivoFechar;

    return;
}

void cadastrarAutor(char *nomedoarquivo)
{
    char nome[50];                               // definir um tamanho para o nome
    printf("digite o nome do autor do livro: "); // imprimir na tela
    fgets(nome, 50, stdin);                      // ler o nome
    fflush(stdin);                               // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&nome, sizeof(nome), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return;
}

void cadastrarPAG(char *nomedoarquivo)
{
    char numero[10];                              
    printf("digite numero de páginas do livro: "); 
    fgets(numero, 10, stdin);                      
    fflush(stdin);                             

    arquivoEditar; 

    fwrite(&numero, sizeof(numero), 1, arquivo); 

    arquivoFechar; 

    return;
}

void cadastrarEmprestimo(char *nomedoarquivo)
{

    arquivoEditar;

    fwrite("0", sizeof("0"), 1, arquivo);

    arquivoFechar;

    return;
}

void livrosEmprestados()
{
    printf("LIVROS EMPRESTADOS\n\n");
    printf("Codigo|| Nome do Livro\n");
    for (int i = 0; i < (elementoArrayLivro); i++)
    {
        if (livros[i].emprestimo == "1")
        {
            printf("%d     || %s\n", i, livros[i].nome);
        }
        else
        {
            continue;
        }
    }
    return;
}

void cadastrarCliente(char *nomedoarquivo)
{

    char nome2[20];
    fgets(nome2, 20, stdin);
    printf("digite o nome do Cliente: \n");
    fgets(nome2, 20, stdin);
    fflush(stdin);

    arquivoEditar;

    fwrite(&nome2, sizeof(nome2), 1, arquivo);

    arquivoFechar;

    return;
}

void cadastrartelefone(char *nomedoarquivo) // funcao para cadastrar o telefone
{
    char telefone[20];                                            // definir um tamanho para o telefone
    printf("Digite o telefone do Cliente ((00) 90000-0000): \n"); // imprimir na tela
    fgets(telefone, 20, stdin);                                   // ler o telefone
    fflush(stdin);                                                // limpar o buffer

    arquivoEditar; // abrir o arquivo

    fwrite(&telefone, sizeof(telefone), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    return; // retornar 0
}

void cadastrarCPF(char *nomedoarquivo)
{

    char cpf[20];
    printf("digite o CPF(000.000.000-00): \n");
    fgets(cpf, 20, stdin);
    fflush(stdin);

    arquivoEditar;

    fwrite(&cpf, sizeof(cpf), 1, arquivo);

    arquivoFechar;

    return;
}

void cadastrarData(char *nomedoarquivo)
{
    char data[15];
    printf("digite a data de nascimento do cliente (DD/MM/AAAA): \n");
    fgets(data, 15, stdin);
    fflush(stdin);

    arquivoEditar;

    fwrite(&data, sizeof(data), 1, arquivo);

    arquivoFechar;

    return;
}

void listaClientes() // funcao para listar os clientes
{
    printf("Clientes:\n"); // imprimir na tela
    printf("Codigo|| Nome do Cliente\n\n");

    for (int i = 0; i < elementoArrayCliente; i++)
    {
        printf("%d     || %s\n", i, clientes[i].nome2);
    }

    return;
}

void generos()
{
    int codigo;
    printf("GENEROS\n\n"); // imprimir na tela
    printf("selecione o genero do livro\n");
    printf("[1] Romance     [2] Terror     [3] Contos\n");
    printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
    printf("[7] Ficcao      [8] Poesia     [9] Infantil\n\n");
    scanf("%d", &codigo); // ler o codigo
    switch (codigo)       // condicao para verificar o codigo
    {
    case 1: // caso o codigo seja 1
        system("cls");
        printf("LIVROS DO GENERO ROMANCE:\n\n");
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "1") != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

    case 2: // caso o codigo seja 2
        system("cls");
        printf("LIVROS DO GENERO TERROR:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "2") != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break; // quebrar
    case 3:
        system("cls");
        printf("LIVROS DO GENERO CONTOS:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "3") != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break; // quebrar
    case 4:    // caso o codigo seja 4
        system("cls");
        printf("LIVROS DO GENERO BIOGRAFIA:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "4") != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;

        break;
    case 5: // caso o codigo seja 5
        system("cls");
        printf("LIVROS DO GENERO AUTOAJUDA:\n\n"); // imprimir na tela
        printf("Codigo|| Nome do Livro\n");

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "5") != NULL)
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

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "6") != NULL)
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

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "7") != NULL)
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

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "8") != NULL)
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

        for (int i = 0; i < elementoArrayLivro; i++)
            if (strstr(livros[i].genero, "9") != NULL)
            {
                printf("%d     || %s \n", i, livros[i].nome);
            }
            else
            {
                continue;
            }

        break;
    default:                                  
        printf("Insira um codigo valido!\n"); 
        break;                                
    }
    system("pause"); 
    return;
}

void menuBiblioteca()
{
    int selecao;
    printf("Selecione a opcao desejada: \n");
    printf("[1] Todos os livros \n");
    printf("[2] Generos \n");
    printf("[3] Livros emprestados \n");
    printf("[4] Voltar para o Menu \n");
    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        system("cls");
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        leituraAutor("autor.bin");
        leituraPAG("pag.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
        Biblioteca();
        break;
    case 2:
        system("cls");
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        leituraAutor("autor.bin");
        leituraPAG("pag.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
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
        menuBiblioteca(); // chamar a funcao
        break;            // quebrar
    }

    return;
}

void Biblioteca()
{
    int selecao;
    printf("LIVROS:\n");
    printf("Codigo || Nome do Livro  \n\n");

    for (int i = 0; i < elementoArrayLivro; i++)
    {
        if(strstr(livros[i].nome, espaco) == NULL) {
        printf("%d      || %s              \n", i, livros[i].nome);
        }else{
            continue;
        }
    }

    do
    {
        printf("\nDeseja consultar um livro específico?\n");
        printf("[1] SIM || [2] VOLTAR\n");
        scanf("%d", &selecao);
        if (selecao == 1)
        {
            system("cls");
            leituraLivro("livros.bin");
            leituraGenero("genero.bin");
            leituraAutor("autor.bin");
            leituraPAG("pag.bin");
            leituraEmprestrimoLivro("emprestimoLivro.bin");
            leituraGenero("genero.bin");
            consultarLivro();
        }
        else if (selecao == 2)
        {
            system("cls");
            menuBiblioteca();
        }
        else
        {
            system("cls");
            printf("OPÇÃO INVÁLIDA\n");
        }
    } while (selecao != 1 || selecao != 2);

    return;
}

void emprestimoLivro()
{
    int codigo;
    int codigo2;
    char s1[3] = "1";
    printf("EMPRESTIMO\n\n");
    int sentinela = 0;
    while (sentinela == 0)
    {

        printf("Digite o codigo do livro: \n");
        scanf("%d", &codigo);

        if (codigo < 0 || codigo >= elementoArrayLivro || strstr(livros[codigo].nome,espaco) != NULL)
        {
            system("cls");
            printf("Digite um codigo valido!\n");
            continue;
        }
        if (strstr(livros[codigo].emprestimo, s1) != NULL)
        {
            printf("%s Já está emprestado.\n", livros[codigo].nome);
            int condicao = 0;
            printf("[1] Tentar novamente || [2] Voltar ao menu\n");
            scanf("%i", &condicao);
            fflush(stdin);
            if (condicao == 1)
            {
                continue;;
            }
            else
            {
                menu();
            }
        }
        printf("\nLivro escolhido: \n");
        printf("%s", livros[codigo].nome);
        sentinela = 1;
        break;
    }
    int sentinela2 = 0;

    while (sentinela2 == 0)
    {

        printf("Digite o codigo do Cliente: \n");
        scanf("%d", &codigo2);
        if (codigo2 < 0 || codigo2 >= elementoArrayCliente || strstr(clientes[codigo2].nome2,espaco) != NULL)
        {
            printf("Digite um codigo valido!\n");
            continue;
        }
        if (strstr(clientes[codigo2].emprestimo2, s1) != NULL)
        {
            printf("%s Já possui um empréstimo.", clientes[codigo2].nome2);
            int condicao = 0;
            printf("[1] Tentar novamente || [2] Voltar ao menu\n");
            scanf("%i", &condicao);
            fflush(stdin);
            if (condicao == 1)
            {
                continue;
            }
            else
            {
                menu();
            }
        }

        printf("\nCliente escolhido: \n\n");
        printf("%s", clientes[codigo2].nome2);
        emprestar("emprestimoLivro.bin", codigo);
        emprestar("emprestimoCliente.bin", codigo2);
        sentinela2 = 1;
    }
    printf("Empréstimo realizado com sucesso!!\n");
    printf("[1] Voltar Menu || [2] Livros emprestados || [3] Novo Empréstimo\n");
        scanf("%d", &codigo);
        switch (codigo)
        {
        case 1:
            system("cls");
            menu();
            break;
        case 2:
            system("cls");
            livrosEmprestados();
            break;
        case 3:
            system("cls");
            leituraLivro("livros.bin");
            leituraClientes("cliente.bin");
            leituraEmprestrimoCliente("emprestimoCliente.bin");
            leituraEmprestrimoLivro("emprestimoLivro.bin");
            emprestimoLivro();

            break; 
        default:
            break;
        }
        return;                                         
    return;
}

void devolucaoLivro()
{
    int codigo;
    int codigo2;
    char s1[3] = "0";
    printf("\nDEVOLUÇÃO\n");

    int sentinela = 0;
    while (sentinela == 0)
    {
        printf("Digite o código do livro:\n");
        scanf("%i", &codigo);
        if (codigo < 0 || codigo >= elementoArrayLivro || strstr(livros[codigo].nome,espaco) != NULL)
        {
            printf("Digite um código válido!\n");
            continue;
        }
        if (strstr(livros[codigo].emprestimo, s1) != NULL)
        {
            int condicao2 = 0;
            printf("%s Não está emprestado.\n", livros[codigo].nome);
            printf("[1] Tentar novamente || [2] Voltar ao menu\n");
            scanf("%i", &condicao2);
            fflush(stdin);
            if (condicao2 == 1)
            {
                continue;
            }
            else
            {
                menu();
            }
        }

        printf("\nLivro devolvido: ");
        printf("%s", livros[codigo].nome);
        sentinela = 1;
        break;
    }

    int sentinela2 = 0;
    while (sentinela2 == 0)
    {

        printf("Digite o código do Cliente: \n");
        scanf("%d", &codigo2);

        if (codigo2 < 0 || codigo2 >= elementoArrayCliente || strstr(clientes[codigo2].nome2,espaco) != NULL)
        {
            printf("Digite um código válido!\n");
            continue;
        }
        if (strstr(livros[codigo].emprestimo, s1) != NULL)
        {
            int condicao = 0;
            printf("%s Não possui empréstimo.\n", clientes[codigo2].nome2);
            printf("[1] Tentar novamente || [2] Voltar ao menu\n");
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
        printf("\nCliente devolução: ");
        printf("%s\n", clientes[codigo].nome2);
        devolver("emprestimoLivro.bin", codigo);
        devolver("emprestimoCliente.bin", codigo2);
        sentinela2 = 1;
    }
        printf("Devolução realizado com sucesso!!\n");
        printf("[1] Voltar Menu || [2] Livros emprestados || [3] Nova Devolução\n");
        scanf("%d", &codigo);
        switch (codigo)
        {
        case 1:
            system("cls");
            menu();
            break;
        case 2:
            system("cls");
            livrosEmprestados();
            break;
        case 3:
            system("cls");
            leituraLivro("livros.bin");
            leituraClientes("cliente.bin");
            leituraEmprestrimoCliente("emprestimoCliente.bin");
            leituraEmprestrimoLivro("emprestimoLivro.bin");
            devolucaoLivro();
            break; 
        default:
            break;
        }
        return;
}

void devolver(char *nomedoarquivo, int codigo)
{
    char s0[2] = "0";
    arquivoEditar1;
    fseek(arquivo, codigo * sizeof(s0), SEEK_SET);
    fwrite(s0, sizeof(s0), 1, arquivo);
    arquivoFechar;
    return;
}

void emprestar(char *nomedoarquivo, int codigo)
{
    char s1[3] = "1";
    arquivoEditar1;
    fseek(arquivo, codigo * sizeof(s1), SEEK_SET);
    fwrite(s1, sizeof(s1), 1, arquivo);
    arquivoFechar;

    return;
}

void alterarNome(char *nomedoarquivo, int codigo)
{
    char nome2[50];
    int selecao;
    fgets(nome2, 50, stdin);
    printf("Digite o nome para a alteração: \n");
    fgets(nome2, 50, stdin);
    fflush(stdin);
    do
    {
        printf("NOME: %s\n", nome2);
        printf("DESEJA CONFIRMAR?\n");
        printf("[1] SIM [2] NÃO [3] VOLTAR\n");
        scanf("%d", &selecao);
        if (selecao == 1)
        {
            break;
        }
        else if (selecao == 2)
        {
            alterarNome("livros.bin", codigo);
        }
        else if (selecao == 3)
        {
            menuEdicaoLivro();
        }
        else
        {
            system("cls");
            printf("OPÇÃO INVÁLIDA\n\n");
        }
    } while (selecao != 1 || selecao != 2 || selecao != 3);

    arquivoEditar1;
    fseek(arquivo, codigo * sizeof(nome2), SEEK_SET);
    fwrite(&nome2, sizeof(nome2), 1, arquivo);

    arquivoFechar;

    menuEditar();
    return;
}

void alterarCPF(char *nomedoarquivo, int codigo)
{
    int selecao;
    char cpf[20];
    fgets(cpf, 20, stdin);
    printf("digite o CPF para a alteração (000.000.000-00): \n");
    fgets(cpf, 20, stdin);
    fflush(stdin);

    do
    {
        printf("CPF: %s\n", cpf);
        printf("DESEJA CONFIRMAR?\n");
        printf("[1] SIM [2] NÃO [3] VOLTAR\n");
        scanf("%d", &selecao);
        if (selecao == 1)
        {
            break;
        }
        else if (selecao == 2)
        {
            alterarCPF("cpf.bin", codigo);
        }
        else if (selecao == 3)
        {
            menuEdicaoLivro();
        }
        else
        {
            system("cls");
            printf("OPÇÃO INVÁLIDA\n\n");
        }
    } while (selecao != 1 || selecao != 2 || selecao != 3);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(cpf), SEEK_SET);
    fwrite(&cpf, sizeof(cpf), 1, arquivo);

    arquivoFechar;

    menuEditar();

    return;
}

void alterarTelefone(char *nomedoarquivo, int codigo)
{
    int selecao;
    char telefone[20];
    fgets(telefone, 20, stdin);
    printf("Digite o telefone para a alteração ((00) 90000-0000): \n");
    fgets(telefone, 20, stdin);
    fflush(stdin);
    do
    {
        printf("TELEFONE: %s\n", telefone);
        printf("DESEJA CONFIRMAR?\n");
        printf("[1] SIM [2] NÃO [3] VOLTAR\n");
        scanf("%d", &selecao);
        if (selecao == 1)
        {
            break;
        }
        else if (selecao == 2)
        {
            alterarCPF("telefone.bin", codigo);
        }
        else if (selecao == 3)
        {
            menuEdicaoLivro();
        }
        else
        {
            system("cls");
            printf("OPÇÃO INVÁLIDA\n\n");
        }
    } while (selecao != 1 || selecao != 2 || selecao != 3);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(telefone), SEEK_SET);
    fwrite(&telefone, sizeof(telefone), 1, arquivo);

    arquivoFechar;

    menuEditar();

    return;
}

void alterarDataNascimento(char *nomedoarquivo, int codigo)
{
    char data[15];
    int selecao;
    fgets(data, 15, stdin);
    printf("Digite a data para a alteração (DD/MM/AAAA): \n");
    fgets(data, 15, stdin);
    fflush(stdin);

    do
    {
        printf("DATA DE NASCIMENTO: %s\n", data);
        printf("DESEJA CONFIRMAR?\n");
        printf("[1] SIM [2] NÃO [3] VOLTAR\n");
        scanf("%d", &selecao);
        if (selecao == 1)
        {
            break;
        }
        else if (selecao == 2)
        {
            alterarCPF("dataNascimento.bin", codigo);
        }
        else if (selecao == 3)
        {
            menuEdicaoLivro();
        }
        else
        {
            system("cls");
            printf("OPÇÃO INVÁLIDA\n\n");
        }
    } while (selecao != 1 || selecao != 2 || selecao != 3);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(data), SEEK_SET);
    fwrite(&data, sizeof(data), 1, arquivo);

    arquivoFechar;

    menuEditar();

    return;
}

void deletarCliente(char *nomedoarquivo, char *nomedoarquivo2, char *nomedoarquivo3, char *nomedoarquivo4, char *nomedoarquivo5)
{
    int codigo;
    char del[50]="WD";
    printf("Informe o codigo do cliente para exclui-lo: \n");
    scanf("%d", &codigo);
    fflush(stdin);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar2;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar3;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar4;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar5;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(del, sizeof(del), 1, arquivo);

    arquivoFechar;
}

void menuEdicaoCliente()
{
    int tecla;
    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Alterar Nome \n");
    printf("[2] Alterar CPF \n");
    printf("[3] Alterar Telefone \n");
    printf("[4] Alterar Data de nascimento \n");
    printf("[5] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);

    int codigo;
    printf("Informe o código do cliente\n");
    scanf("%i", &codigo);

    switch (tecla)
    {
    case 1:
        alterarNome("cliente.bin", codigo);
        menuEditar();
        break;

    case 2:
        alterarCPF("cpf.bin", codigo);
        menuEditar();
        break;

    case 3:
        alterarTelefone("telefone.bin", codigo);
        menuEditar();
        break;

    case 4:
        alterarDataNascimento("dataNascimento.bin", codigo);
        menuEditar();
        break;

    case 5:
        menuEditar();
        break;

    default:
        printf("\nInforme um codigo válido.");
        menuEdicaoCliente();
        break;
    }

    return;
}

void alterarGenero(char *nomedoarquivo, int codigo)
{
    char genero[3];
    int num;
    fgets(genero, 3, stdin);
    do
    {
        printf("Selecione o novo genero do livro\n"); // imprimir na tela
        printf("[1] Romance     [2] Terror     [3] Contos\n");
        printf("[4] Biografia   [5] Autoajuda  [6] True Crime\n");
        printf("[7] Ficcao      [8] Poesia     [9] Infantil\n");
        fgets(genero, 10, stdin); // ler o genero
        num = strtol(genero, NULL, 10);
    } while (num < 0 || num > 9);

    fflush(stdin); // limpar o buffer

    arquivoEditar1; // abrir o arquivo
    fseek(arquivo, codigo * sizeof(genero), SEEK_SET);
    fwrite(&genero, sizeof(genero), 1, arquivo); // escrever no arquivo

    arquivoFechar; // fechar o arquivo

    menuEditar();

    return;
}

void alterarNumeroPag(char *nomedoarquivo, int codigo)
{
    char numero[10];
    int selecao;
    fgets(numero, 10, stdin);
    printf("digite o número de páginas para a alteração: \n");
    fgets(numero, 10, stdin);
    fflush(stdin);

    do
    {
        printf("NÚMERO PÁGINA: %s\n", numero);
        printf("DESEJA CONFIRMAR?\n");
        printf("[1] SIM [2] NÃO [3] VOLTAR\n");
        scanf("%d", &selecao);
        if (selecao == 1)
        {
            break;
        }
        else if (selecao == 2)
        {
            alterarNumeroPag("pag.bin", codigo);
        }
        else if (selecao == 3)
        {
            menuEdicaoLivro();
        }
        else
        {
            system("cls");
            printf("OPÇÃO INVÁLIDA\n\n");
        }
    } while (selecao != 1 || selecao != 2 || selecao != 3);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(numero), SEEK_SET);
    fwrite(&numero, sizeof(numero), 1, arquivo);

    arquivoFechar;

    menuEditar();

    return;
}

void deletarLivro(char *nomedoarquivo, char *nomedoarquivo2, char *nomedoarquivo3, char *nomedoarquivo4, char *nomedoarquivo5)
{
    int codigo;
    char del[50] = {"WD"};
    printf("Informe o código do livro para exclui-lo: \n");
    scanf("%d", &codigo);
    fflush(stdin);

    arquivoEditar1;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(&del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar2;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(&del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar3;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(&del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar4;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(&del, sizeof(del), 1, arquivo);

    arquivoFechar;

    arquivoEditar5;

    fseek(arquivo, codigo * sizeof(del), SEEK_SET);
    fwrite(&del, sizeof(del), 1, arquivo);

    arquivoFechar;
}

void menuEdicaoLivro()
{
    int tecla;
    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Alterar Nome \n");
    printf("[2] Alterar genero \n");
    printf("[3] Alterar nome do autor \n");
    printf("[4] Alterar numero de páginas \n");
    printf("[5] Sair \n");
    scanf("%i", &tecla);
    fflush(stdin);

    int codigo;

    printf("Informe o código do livro\n");
    scanf("%i", &codigo);

    switch (tecla)
    {
    case 1:

        alterarNome("livros.bin", codigo);
        menuEdicaoLivro();
        break;

    case 2:
        alterarGenero("genero.bin", codigo);
        menuEdicaoLivro();
        break;

    case 3:
        alterarNome("autor.bin", codigo);
        menuEdicaoLivro();
        break;

    case 4:
        alterarNumeroPag("pag.bin", codigo);
        menuEdicaoLivro();
        break;

    case 5:
        menuEditar();
        break;

    default:
        printf("\nInforme um codigo válido.");
        menuEdicaoLivro();
        break;
    }
}

void menuEditar()
{

    int tecla;

    system("cls");
    printf("Selecione a opção desejada: \n");
    printf("[1] Editar informações do cliente\n");
    printf("[2] Apagar cliente\n");
    printf("[3] Editar informações do livro \n");
    printf("[4] Apagar livro\n");
    printf("[5] Sair \n");

    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        menuEdicaoCliente();
        break;

    case 2:
        deletarCliente("clientes.bin", "telefone.bin", "dataNascimento.bin", "cpf.bin", "emprestimoCliente.bin");
        menuEditar();
        break;

    case 3:
        menuEdicaoLivro();
        break;

    case 4:
        deletarLivro("livros.bin", "genero.bin", "autor.bin", "pag.bin", "emprestimoLivro.bin");
        menuEditar();
        break;

    case 5:
        menu();
        break;

    default:
        printf("\nInforme uma opção válida.");
        menuEditar();
        break;
    }
}

void consultarLivro()
{
    int codigo;
    printf("\bInforme o codigo do livro: ");
    scanf("%i", &codigo);
    fflush(stdin);
    
    if(strstr(livros[codigo].nome,espaco) != NULL) {
        system("cls");
        printf("CÓDIGO INVÁLIDO!\n");
        consultarLivro();
    }

    printf("Nome: %s\n", livros[codigo].nome);
    printf("Autor: %s\n", livros[codigo].nomeAutor);
    printf("Genêro: %s\n", livros[codigo].genero2);
    printf("Numero de Páginas: %s\n", livros[codigo].numeroPag);

    if (strstr(livros[codigo].emprestimo, "1") == NULL)
    {
        printf("Situação de empréstimo: Não possui\n\n");
    }
    else
    {
        printf("Situação de empréstimo: Possui\n\n");
    }

    int tecla;
    printf("Selecione a opção desejada: \n");
    printf("[1] Consultar outro livro \n");
    printf("[2] Editar cadastro \n");
    printf("[3] Voltar para o menu \n");

    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        system("cls");
        consultarLivro();
        break;

    case 2:
        system("cls");
        menuEdicaoLivro();
        break;

    case 3:
        system("cls");
        menu();
        break;

    default:
        voltarMenu();
        break;
    }
}

void consultarCliente()
{
    int codigo;
    printf("\bInforme o codigo do cliente: ");
    scanf("%i", &codigo);
    fflush(stdin);
    if(strstr(clientes[codigo].nome2,espaco) != NULL) {
        system("cls");
        printf("CÓDIGO INVÁLIDO!\n");
        consultarCliente();
    }

    printf("Nome: %s\n", clientes[codigo].nome2);
    printf("Telefone: %s\n", clientes[codigo].telefone);
    printf("Data de Nascimento: %s\n", clientes[codigo].dataDeNascimento);
    printf("CPF: %s\n", clientes[codigo].cpf);

    if (strstr(clientes[codigo].emprestimo2, "1") == NULL)
    {
        printf("Situação de empréstimo: Não possui\n\n");
    }
    else
    {
        printf("Situação de empréstimo: Possui\n\n");
    }

    int tecla;
    printf("Selecione a opção desejada: \n");
    printf("[1] Consultar outro cliente \n");
    printf("[2] Editar cadastro \n");
    printf("[3] Voltar para o menu \n");

    scanf("%i", &tecla);
    fflush(stdin);

    switch (tecla)
    {
    case 1:
        system("cls");  
        consultarCliente();
        break;

    case 2:
        system("cls"); 
        menuEdicaoCliente();
        break;

    case 3:
        system("cls"); 
        menu();
        break;

    default:
        voltarMenu();
        break;
    }
}

void menu()
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
    printf("[7] Editar informações \n");
    printf("[8] Consultar cadastro do livro \n");
    printf("[9] Consultar cadastro do cliente \n");
    printf("[10] Sair \n");
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
        cadastrarAutor("autor.bin");
        cadastrarPAG("pag.bin");
        cadastrarEmprestimo("emprestimoLivro.bin");
        voltarMenu();
        break;
    case 3:
        leituraClientes("cliente.bin");
        leituraCPF("cpf.bin");
        leituraDataNascimento("dataNascimento.bin");
        leituraEmprestrimoCliente("emprestimoCliente.bin");
        leituraTelefone("telefone.bin");
        listaClientes("cliente.bin");
        voltarMenu();
        break;
    case 4:
        cadastrarCliente("cliente.bin");
        cadastrarCPF("cpf.bin");
        cadastrartelefone("telefone.bin");
        cadastrarData("dataNascimento.bin");
        cadastrarEmprestimo("emprestimoCliente.bin");
        voltarMenu();
        break;
    case 5:
        leituraLivro("livros.bin");
        leituraClientes("cliente.bin");
        leituraEmprestrimoCliente("emprestimoCliente.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
        emprestimoLivro();
        voltarMenu();
        break;
    case 6:
        leituraLivro("livros.bin");
        leituraClientes("cliente.bin");
        leituraEmprestrimoCliente("emprestimoCliente");
        leituraEmprestrimoLivro("emprestimoCliente.bin");
        devolucaoLivro();
        voltarMenu();
        break;
    case 7:
        menuEditar();
        break;

    case 8:
        leituraLivro("livros.bin");
        leituraGenero("genero.bin");
        leituraAutor("autor.bin");
        leituraPAG("pag.bin");
        leituraEmprestrimoLivro("emprestimoLivro.bin");
        leituraGenero("genero.bin");
        consultarLivro();
        system("cls");
        break;

    case 9:
        leituraClientes("cliente.bin");
        leituraCPF("cpf.bin");
        leituraDataNascimento("dataNascimento.bin");
        leituraEmprestrimoCliente("emprestimoCliente.bin");
        leituraTelefone("telefone.bin");
        consultarCliente();
        system("cls");
        break;
    case 10:
        printf("SISTEMA ENCERRADO!");
        exit(0);
        break;
    default:
        printf("Opção inválida \n\n");
        menu();
        break;
    }
    return;
}

void inicio()
{
    printf("\n\n   \t\t\t\t\tSEJA BEM-VINDO A BIBLIOTECA BPK\n\n");
    printf("\t\t\t\t   PRESSIONE QUALQUER TECLA PARA CONTINUAR");
    getch();
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