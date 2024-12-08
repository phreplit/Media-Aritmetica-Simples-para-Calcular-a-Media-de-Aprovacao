
//  Author: PHNO - Tecnólogo | Pós-Graduado
//  Data Release: 14/06/2024
//  Versão Código: 0.0.1v
//  Replit: @PHNO, @PHREPLIT
//  E-mail: phreplit@gmail.com

// Algoritmo: Média Aritmética Simples para Calcular a Média de aprovação em Matéria Especifica, algoritmo desenvolvido em c, desenvolvido para professores e estudantes de exatas e areas correlatas, como matemática.

// Obs: Algoritmo desenvolvido com variaveis inteiras, nao permite numero e virgula - ex: 7,80 mude para 8.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

int main(void) {

  printf("\n");
  printf("Média Aritmética Simples para Calcular a Média de aprovação\n");
  printf("\n");
  
  typedef int teste;

  teste nt1, nt2, media;

  struct alunos { // estrutura de dados heterogenea
  char nome[90];
  int serie[30];
  char turno[40];
  }; struct alunos aluno;

  printf("\n");
  printf("Digite o nome do aluno: ");
  scanf("%s", aluno.nome, stdin);

  printf("\n");
  printf("Digite a serie do aluno: ");
  scanf("%d", aluno.serie, stdin);

  printf("\n");
  printf("Digite o turno do aluno: ");
  scanf("%s", aluno.turno, stdin);
  
  printf("\n");
  printf("Digite o resultado da prova 1: ");
  scanf("%d", &nt1);

  printf("\n");
  printf("Digite o resultado da prova 2: ");
  scanf("%d", &nt2);

  media = (nt1 + nt2) / 2;

  while (media == 6) {
    printf("\n");
    printf("O aluno %s, da serie %d, do turno %s, esta em recuperação.\n", aluno.nome, *aluno.serie, aluno.turno);
    printf("\n");
    printf("Obteve a Media: %d\n", media);
    return 0;
  } if (media >= 7) {
    printf("\n");
    printf("O aluno %s, da serie %d, do turno %s, foi aprovado na materia.\n", aluno.nome, *aluno.serie, aluno.turno);
    printf("\n");
    printf("Obteve a Media: %d\n", media);
  } else {
    printf("\n");
    printf("O aluno %s, da serie %d, do turno %s, foi reprovado na materia.\n", aluno.nome, *aluno.serie, aluno.turno);
    printf("\n");
    printf("Obteve a Media: %d\n", media);
  }

  system("pause");
  return 0;
}
