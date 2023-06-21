//Tanlash operatori
//switch - o'ziga butun son yoki charni qabul qiladi (yoki shartni ham)."switch"da tanlovlar takrorlanishi mumkin emas, yoqsa xatolik beradi.
//case- bu tanlovlar. Bitta tanlov faqat bir martta beriladi.Agar ikkita tanlov bersangiz ishlamaydi, ya'ni xatolik beradi.
//break - switchni sindirish uchun xizmat qiladi. Agar qo'yilmasa "break" tanlangan "case"dan tashqari yana boshqa "case"larga kirib ketadi."break"ni har bitta "case"dan keyin yoziladi.
//default -bu ko'rsatilgan tanlovlar to'g'ri kelmaganda ishga tushadi.(Huddi "if"ni "else"siga o'xshagan). "defoult"ni ichida hohlangan operatsiya bajarsa bo'ladi.





#include <stdio.h>

int main(){

   int oy;
     printf("Son kiriting:");
     scanf("%d", &oy);

   switch(oy){
   case 1:
   puts("Yanvar31");
   break;
   case 2:
   puts("Fevral28");
   break;
   case 3:
   puts("Mart31");
   break;
   case 4:
   puts("Aprel30");
   break;
   case 5:
   puts("May31");
   break;
   case 6:
   puts("Iyun30");
   break;
   case 7:
   puts("Iyul31");
   break;
   case 8:
   puts("Avgust31");
   break;
   case 9:
   puts("Sentabr30");
   break;
   case 10:
   puts("Oktabr31");
   break;
   case 11:
   puts("Noyabr30");
   break;
   case 12:
   puts("Dekabr31");
   break;
   defaul: 
   puts("Bunday oy mavjud emas!");
}
}
