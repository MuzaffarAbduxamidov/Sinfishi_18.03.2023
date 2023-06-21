#include <stdio.h>

int main(){

   int kun;
   printf("Hafta kunini raqamini kiriting:");
   scanf("%d", &kun);

   switch(kun){
   case 1:
    puts("Ish kuni");
   break;
   case 2:
    puts("Ish kuni");
   break;
   case 3:
    puts("Ish kuni");
   break;
   case 4:
    puts("Ish kuni");
   break;
   case 5:
    puts("Ish kuni");
   break;
   case 6:
    puts("Dam olish kuni");
   break;
   case 7:
    puts("Dam olish kuni");
   break;
   default :
    puts("Bunda kun mavjud emas");
    }

    return 0;
}
