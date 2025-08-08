#include <stdio.h>

int main()
{

  char estado = 'A';
  char codigo[5] = "A01  ";
  char nome[8] = "SaoPaulo";
  int populaçao = 12325000;
  int numero = 50;
  float area = 1521.11;
  float PIB = 699.280;

  printf("seu estado é:  \n");
  printf("%c\n", estado);
  printf("seu codigo é:  \n");
  printf("%s\n", codigo);
  printf("o nome da  cidade é: \n");
  printf("%.8s\n", nome);
  printf("a populaçao da cidade é:  \n");
  printf("%i\n", populaçao);
  printf("o numero de pontos turisticos é: \n");
  printf("%d\n", numero);
  printf("sua area em km é:  \n");
  printf("%f\n", area);
  printf("o seu PIB é:  \n");
  printf("%.6f\n", PIB);

  char Estado = 'B';
  char Codigo[3] = "B02";
  char Nome[15] = "RiodeJaneiro";
  int Populaçao = 6748000;
  int Numero = 30;
  float Area = 1200.25;
  float Pib = 300.50;

  printf("o nome do Estado é: \n");
  printf("%c\n", Estado);
  printf("o nome do codigo é:  \n");
  printf("%.3s\n", Codigo);
  printf("o nome da cidade é:  \n");
  printf("%.12s\n", Nome);
  printf("a populaçao da cidade é:  \n");
  printf("%i\n", Populaçao);
  printf("o numero de pontos turisticos é:  \n");
  printf("%d\n", Numero);
  printf("sua area em km é:  \n");
  printf("%f\n", Area);
  printf("o seu pib é:  \n");
  printf("%f\n", Pib);

  return 0;
}
