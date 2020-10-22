/* Exercise 3.33 Solution
 *jo 08.01.2018
 */

#include <stdio.h>

int main() {
  int line = 0, side, stars;

  printf("What size is your square 1 - 20?\n");
  scanf("%d", &side );


  while (line < side) {


    side <= 20;
        stars = 0;
        while (stars < side) {
            printf("* ");
            stars++;
        }

    printf("\n");
    line++;
    if (side > 20){
    printf("20 tops!\n");
    break;
    }

  }

  return 0;
}

/*

#include <stdio.h>

int main() {
  int line = 0, side, stars;

  printf("What size is your square?\n");
  scanf("%d", &side );

  while (line < side) {
    stars = 0;
    while (stars < side) {
      printf("*");
      stars++;
    }
    printf("\n");
    line++;
  }

  return 0;
}

*/
