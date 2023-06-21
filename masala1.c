//18.03.2023.Shanba
//Tanlash operatori- "switch"
//

//switch - o'ziga butun son yoki charni qabul qiladi (yoki shartni ham).
//"switch"da tanlovlar, ya'ni bitta "case"da berilgan jovob boshqa "case"da takrorlanishi mumkin emas, yoqsa xatolik beradi.
//Agarda "switch"ga shart berilsa har doim "case" 1 va 0 bo'ladi.
//Masalan:
//switch(..){

//case- bu tanlovlar.
//Bitta tanlov faqat bir martta beriladi.
 //Agar ikkita tanlov bersangiz, yani ikkita "case"da bir xil tanlov bersangiz ishlamaydi, ya'ni xatolik beradi.
//Bir nechta "case" uchun bitta jovob bersa bo'ladi.
//Masalan:
//Bitta "case" ikki marta kelgan: xatolik
//case 1:
//  printf(...);
//case 1:
//  primtf(...);

//Bir nechta keys uchun bitta javob:
//case 1:
//case 2:
//case 3:
//  printf("31kunlik");

//break - switchni sindirish uchun xizmat qiladi.
//Agar qo'yilmasa "break" tanlangan "case"dan tashqari yana boshqa "case"larga kirib ketadi.
//"break"ni har bitta "case"dan keyin yoziladi.
//Maslan:
//case 1:
//  break;
//case 2:
//  break;

//default -bu ko'rsatilgan tanlovlar to'g'ri kelmaganda ishga tushadi.
// "default"ni hohshingizga qarab ishlatsa bo'ladi. Har doim ham ishlatish majbur emas.
//(Huddi "if"ni "else"siga o'xshagan). "defoult"ni ichida hohlangan operatsiya bajarsa bo'ladi.
//Masalan:
//default:  }




#include <stdio.h>

int main(){

   int oy;
     printf("Son kiriting:");
     scanf("%d", &oy);

   switch(oy){
   case 1:
   puts("Yanvar");
   break;
   case 2:
   puts("Fevral");
   break;
   case 3:
   puts("Mart");
   break;
   case 4:
   puts("Aprel");
   break;
   case 5:
   puts("May");
   break;
   case 6:
   puts("Iyun");
   break;
   case 7:
   puts("Iyul");
   break;
   case 8:
   puts("Avgust");
   break;
   case 9:
   puts("Sentabr");
   break;
   case 10:
   puts("Oktabr");
   break;
   case 11:
   puts("Noyabr");
   break;
   case 12:
   puts("Dekabr");
   break;
   defaul:
   puts("Bunday oy mavjud emas!");
   }
}
