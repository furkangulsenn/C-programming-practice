#include <stdio.h>

int main(){

    int sayi1, sayi2;
    float sonuc;

    printf("Iki sayi giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);

    sonuc = (float)sayi1 / sayi2;

    printf("Sonuc = %.2f",sonuc);

    return 0;
}
