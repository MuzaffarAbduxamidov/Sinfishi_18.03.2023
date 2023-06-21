#include <stdio.h>

int main()
{
   int son1;
   printf("Birinchi sonni kiriting:");
   scanf("%d", &son1);
   char amal;
   printf("Amal kiriting: ");
   scanf(" %c", &amal);
   int son2;
   printf("Ikkinchi sonni kiriting:");
   scanf("%d", &son2);
   float nat;

   switch (amal){
    case '+':
      printf("Natija=%2.f", nat=son1+son2);
      break ;
    case '-':
      printf("Natija=%2.f", nat=son1-son2);
      break ;
    case '*':
      printf("Natija=%2.f", nat=son1*son2);
      break ;
    case '/':
      printf("Natija=%2.f", nat=son1/son2);
   }
}
