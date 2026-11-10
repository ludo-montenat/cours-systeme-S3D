#include <stdio.h>

// Exercice A1 du lien https://www.emertxe.com/embedded-systems/c-programming/c-assignments/

int main() {
  int val = 0;
  int res = 0;
  printf("Choisissez une valeur : ");
  scanf("%d", &val);
  
  for (int i = 1; i < val; i++) {
    if (val%i == 0) {
      res += i;
    }
  }

  if (((res + val)/2) == val) {
      printf("La valeur choisie est un nombre parfait\n");
  } else {
      printf("La valeur choisie n'est pas un nombre parfait\n");
  }
}
