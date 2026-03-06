#include <stdio.h>
#include <string.h>

// palindrome = tersten okunuşuda aynı olan kelime

int main() {
  
    char metin[100];
    int i, uzunluk, palindrom = 1;

    printf("Bir metin gir: ");
    fgets(metin, sizeof(metin), stdin);

    uzunluk = strlen(metin) - 1;
  
    for (i = 0; i < uzunluk/2; i++)
        if (metin[i] != metin[uzunluk-1-i]) { palindrom = 0; break; }

    if (palindrom) 
      printf("Palindromdur.\n");
      
    else 
      printf("Palindrom değildir.\n");

  
    return 0;
}
