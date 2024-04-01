// C program for Elo Rating
// 19.09.2023
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// #define COLOR_BOLD "\e[1m"
#define COLOR_GREEN_BOLD "\033[1;32m"
#define COLOR_NORMAL "\033[0m"

// Function to calculate the Probability
float Probability(int rating1, int rating2) {
  return 1.0 * 1.0 / (1 + 1.0 * pow(10, 1.0 * (rating1 - rating2) / 400));
}

// Function to calculate Elo rating
// K is a constant.
// d determines whether Player A wins or Player B.
void EloRating(float Ra, float Rb, float Rc, float Rd, float Re, float Rf,
               int K, float d)

{

  // To calculate the Winning
  // Probability of Player B
  // float Pb = Probability(Ra, Rb);

  // To calculate the Winning
  // Probability of Player A against Player B
  float PaB = Probability(Rb, Ra);

  // To calculate the Winning
  // Probability of Player A against Player C
  float PaC = Probability(Rc, Ra);

  // To calculate the Winning
  // Probability of Player A against Player D
  float PaD = Probability(Rd, Ra);

  // To calculate the Winning
  // Probability of Player A against Player E
  float PaE = Probability(Re, Ra);

  // To calculate the Winning
  // Probability of Player A against Player F
  float PaF = Probability(Rf, Ra);

  float Pa = PaB + PaC + PaD + PaE + PaF;

  float Rn = Ra + K * (d - Pa);

  printf("----------------------\n");
  printf(COLOR_GREEN_BOLD);
  printf("\tNovo Rating = %.2f\n", Rn);
  printf(COLOR_NORMAL);
  printf("(Ctrl + C para sair)\n");
  printf("----------------------\n");
}

// Driver code
int main() {
  printf("\t***CALCULADORA DE RATING ALEKIBA***\n");
  // Ra and Rb are current ELO ratings
  float Ra = 0, Rb = 0, Rc = 0, Rd = 0, Re = 0, Rf = 0, d = 0;

  int K = 30;
  printf("\n");
  printf("Rating Jogador: ");
  scanf("%f", &Ra);
  printf("---\n");
  printf("Rating Adversário 1: ");
  scanf("%f", &Rb);
  printf("Rating Adversário 2: ");
  scanf("%f", &Rc);
  printf("Rating Adversário 3: ");
  scanf("%f", &Rd);
  printf("Rating Adversário 4: ");
  scanf("%f", &Re);
  printf("Rating Adversário 5: ");
  scanf("%f", &Rf);
  printf("Pontos Obtidos: ");
  scanf("%f", &d);

  // Function call
  EloRating(Ra, Rb, Rc, Rd, Re, Rf, K, d);
  // printf("----------------------\n");
  while (Ra != 0) {
    printf("Rating Jogador: ");
    scanf("%f", &Ra);
    printf("---\n");
    printf("Rating Adversário 1: ");
    scanf("%f", &Rb);
    printf("Rating Adversário 2: ");
    scanf("%f", &Rc);
    printf("Rating Adversário 3: ");
    scanf("%f", &Rd);
    printf("Rating Adversário 4: ");
    scanf("%f", &Re);
    printf("Rating Adversário 5: ");
    scanf("%f", &Rf);
    printf("Pontos Obtidos: ");
    scanf("%f", &d);

    // Function call
    EloRating(Ra, Rb, Rc, Rd, Re, Rf, K, d);
    // printf("----------------------\n");
    if (Ra == 0) {
      break;
    }
  }
  return 0;
}
