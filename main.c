#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int max = 100;
  char nomes[max][50];
  int quantidades[max];
  float precos[max];
  int total = 0;
  int opcao = 0;
  char senha[10];
  char secret[10] = "lima2026";
  int tentativas = 1;
  int senhaCorreta = 0;
  setlocale(LC_ALL, "");

  while (senhaCorreta == 0) {
    if (tentativas > 3) {
      printf("ACESSO BLOQUEADO! Maximo de tentativas atingido.\n\n");
      exit(0);
    }
    printf("\033[38;2;254;224;30mDigite a senha de acesso: \033[0m");
    scanf("%s", senha);

    if (strcmp(senha, secret) != 0) {
      printf("Senha incorreta, tente novamente\n\n");
      tentativas++;
    }
    if (strcmp(senha, secret) == 0) {
      senhaCorreta = 1;
    }
  }

  while (opcao != 4) {
    printf("\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                                          -=\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                                  -*+=+#######+\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                              *#+  *#####++-#####\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                           ###   *### = +*+=+-*###\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                         ###=  -### =########+ ##*\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                 =#%%%%%%%%* -###   *### #+#  -  -#* ##\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "              ***********###   ###*+#++ =---*#####\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "         +#*******+*******##   +##################+\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "        *************= *#-  -#########*************#-\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "          =*******+*#+     -*************************#\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                      =          +******************+\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                       *                      - = =\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                       +             -*#-+   ###- -\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                       --  +          *+#=  +=*#*  =\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                       *   -=               *    ==#-\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                 "
        "  "
        "               =    -           +   -*  #     * %%%%##  +\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                 "
        "  "
        "    -=*      *+                   +     #   ++      +%%%%\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "       *     =     +#==               == -*       *    -#\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "         +    -*       -#-             =*   --      = - -\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "        - =  =-           =#=       **   #+  =++#    =  =\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "           ==--=       +  **-   +###-###+   #  =     +\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "           +==       =  + -+    ##    ##  #  -      -=\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                    =   = ########    *#+#   +      --\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                     =    +*== -=-      ###   -      *\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                     +   ++-   +#       #**  -       =\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                     =           -*     -*=  -      *\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                      -            *      #   +    +=\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                        =          #+       # +   =*\033[0m\n");
    printf(
        "\033[38;2;254;224;30m                                                "
        "                          =*=--=+#*            =+=\033[0m\n");
    printf("\n");
    printf(
        "\033[38;2;63;63;149m                                                 "
        "            ##         ##  ##      ##    ####### \033[0m\n");
    printf(
        "\033[38;2;63;63;149m                                                 "
        "            ##         ##  ###    ###   ##     ##\033[0m\n");
    printf(
        "\033[38;2;63;63;149m                                                 "
        "            ##         ##  ## #  # ##   ##     ##\033[0m\n");
    printf(
        "\033[38;2;63;63;149m                                                 "
        "            ##         ##  ##  ##  ##   #########\033[0m\n");
    printf(
        "\033[38;2;63;63;149m                                                 "
        "            ##         ##  ##      ##   ##     ##\033[0m\n");
    printf(
        "\033[38;2;63;63;149m                                                 "
        "            #########  ##  ##      ##   ##     ##\033[0m\n");
    printf("\n");
    printf(
        "\033[31m                                                             "
        "       Barato mesmo é aqui!\033[0m\n");
    printf("\n");

    printf("\033[38;2;254;224;30m\nBem-vindo ao Menu Inicial\033[0m\n");
    printf("\033[94m1 - Cadastro\033[0m\n");
    printf("\033[94m2 - Movimentações\033[0m\n");
    printf("\033[94m3 - Relatório\033[0m\n");
    printf("\033[38;2;254;224;30m4 - Sair\033[0m\n\n");
    printf("\033[94mDigite o numero da opção desejada: \033[0m");
    scanf("%i", &opcao);

    switch (opcao) {
    case 1:
      system("clear");
      if (total >= max) {
        printf("Valor máximo de produtos atingidos");
        break;
      }

      char continuar = 's';

      while (continuar == 's' || continuar == 'S') {
        getchar();

        printf("\nDigite o nome do produto: ");
        scanf("%[^\n]s", nomes[total]);

        printf("\nDigite a quantidade do produto: ");
        scanf("%i", &quantidades[total]);

        printf("\nDigite o valor do produto: R$");
        scanf("%f", &precos[total]);

        total++;

        printf("\nDeseja cadastrar mais um produto? (s/n): ");
        scanf(" %c", &continuar);
        system("clear");
      }

      break;

    case 2:
      system("clear");
      int sub_opcao = 0;
      int produto;
      int quantidade;

      if (total == 0) {
        printf("Nenhum item cadastrado");
        break;
      }

      printf("\nMOVIMENTACOES DE ESTOQUE\n");
      printf("1 - Saida de mercadoria (venda)\n");
      printf("2 - Entrada de mercadoria (recebimento)\n");
      printf("Digite a opcao desejada: ");
      scanf("%i", &sub_opcao);

      if (sub_opcao != 1 && sub_opcao != 2) {
        printf("Opção invalida!");
      }

      printf("Produtos cadastrados\n");

      for (int i = 0; i < total; i++) {
        printf("%i - Produto: %s || Quantidade em estoque: %i\n", i, nomes[i],
               quantidades[i]);
      }

      printf("Digite o número do produto: ");
      scanf("%i", &produto);

      if (produto < 0 || produto > total) {
        printf("Produto Inválido!\n");
        break;
      }

      if (sub_opcao == 1) {
        printf("Digite a quantidade que deseja dar saída no estoque: ");
        scanf("%i", &quantidade);

        if (quantidade > quantidades[produto]) {
          printf("Estoque insuficiente!\n");
        }
        quantidades[produto] -= quantidade;
      }

      if (sub_opcao == 2) {
        printf("Digite a quantidade dar entrada no estoque: ");
        scanf("%i", &quantidade);

        quantidades[produto] += quantidade;
      }

      break;
    case 3:
      printf("Opção Relatorio selecionada.\n");

      if (total == 0) {
        printf("Nenhum item cadastrado");
        break;
      }

      for (int i = 0; i < total; i++) {
        printf("\nNome: %s\nQuantidade: %i\nPreços: R$%.2f\n\n", nomes[i],
               quantidades[i], precos[i]);
      }

      break;
    case 4:
      printf("Encerrando o programa...\n");
      break;
    default:
      printf("Opcao invalida!\n");
    }
  }
}