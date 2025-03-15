#include<stdio.h>
int main(void)
{
    int i,sayi,fak=1;
    printf("Faktöriyel hesaplanıcak sayi giriniz: ");
    scanf("%d",&sayi);
    for(i=1; i<=sayi; i++)
    { 
        fak = i * fak;
    }  
    printf("Faktöriyeli: %d",fak);
   // return 0;
}