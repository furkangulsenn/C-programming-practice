#include <stdio.h>

int main(){

    int sayi1, sayi2, sonuc;

    printf("Iki sayi giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);

    sonuc = sayi1 - sayi2;

    printf("Sonuc = %d",sonuc);

    return 0;
}
