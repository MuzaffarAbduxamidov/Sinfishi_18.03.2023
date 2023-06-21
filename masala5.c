#include <stdio.h>

int main(){

 char harf;
 printf("Harf kiriting:");
 scanf("%c", &harf);

 switch(harf){
 case 65 ... 90:
  puts("Katta harf");
  break;
 case 97 ... 122:
  puts("Kichik harf");
  break;
 case 3:
  puts("Bunday harf yo'q");
  break;
 }
}
