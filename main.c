#include <stdio.h>
#include <stdlib.h>

int main()
{
   char dizi[5][50];
   char *ilk;
   char *ikinci;
   int i;
   char gecici;
   printf("Lutfen 5 adet kelime giriniz : \n");
   for(i=0;i<5;i++)
   {
       printf("%2d. kelime ",i);
       scanf("%s",dizi[i]);
   }
   for(i=0;i<5;i++)
   {
       ilk=ikinci=dizi+i;
           while(*ikinci)
           {
               ikinci++; //ters /0 'a kadar devam eder -- yapýnca dizi sonuna geliyo 1 defalýk
           }
            ikinci--;
            while(ilk<ikinci)
            {
                gecici=*ilk;
                *ilk=*ikinci;
                *ikinci=gecici;
                ilk++;
                ikinci--;
            }


       }
       for(i=0;i<5;i++)
       {
           printf("%s \n",*(dizi+i));
       }
   }

