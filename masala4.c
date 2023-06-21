#include <stdio.h>

int main(){

   int oy;
   printf("Oy raqamini kiriting:");
   scanf("%d", &oy);

   switch (oy){
    case 1 ... 2:
      puts("Qish");
      break;
    case 3 ... 5:
      puts("Bahor");
      break;
    case 6 ... 8:
      puts("Yoz");
      break;
    case 9 ... 10:
      puts("Kuz");
      break;
    case 11 ... 12:
      puts("Qish");
    }
}
