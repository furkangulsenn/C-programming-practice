#include <stdio.h>

int main() {

  
    int matris[3][3], trans[3][3], i, j;

    printf("3x3 matris elemanlarını gir:\n");
  
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matris[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            trans[j][i] = matris[i][j];

    printf("Transpozesi:\n");
  
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", trans[i][j]);
      
      printf("\n");
    }
  

    return 0;
}
