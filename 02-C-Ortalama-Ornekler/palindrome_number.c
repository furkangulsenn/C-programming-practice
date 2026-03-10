#include <stdio.h>

int main() {
  
    int sayi, gecici, ters = 0, basamak;
  
    printf("Bir sayı gir: ");
    scanf("%d", &sayi);

    gecici = sayi;
  
    while (gecici > 0) {
      
        basamak = gecici % 10;
        ters = ters * 10 + basamak;
        gecici /= 10;
    }

    if (sayi == ters) printf("%d bir palindromdur.\n", sayi);
      
    else printf("%d palindrom değildir.\n", sayi);

  
    return 0;
}
