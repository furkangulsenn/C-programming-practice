#include <stdio.h>

int usAl(int taban, int us) {
  
    if (us == 0) return 1;
  
    return taban * usAl(taban, us - 1);
}

int main() {
  
    int taban, us;
  
    printf("Taban ve üs gir: ");
    scanf("%d %d", &taban, &us);
  
    printf("%d^%d = %d\n", taban, us, usAl(taban, us));

  
    return 0;
}
