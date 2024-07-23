#include <stdio.h>

int main() {
    FILE *f = fopen("C:/Users/Engin/Desktop/rastgele.txt", "r+"); // r+ hem okur hem yazar
    if (f == NULL) {
        printf("Dosya açýlamadý.\n");
        return 1;
    }
    
    int i, j, k, c;
    int X[5][5] = {0};
    int Y[5][5] = {0};
    int Z[5][5] = {0};

    // Ýlk matrisi dosyadan oku
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            fscanf(f, "%d", &c);
            X[i][j] = c;
        }
    }

    // Ýkinci matrisi dosyadan oku
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            fscanf(f, "%d", &c);
            Y[i][j] = c;
        }
    }

    // Matris çarpýmýný hesapla
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            Z[i][j] = 0;
            for (k = 0; k < 5; k++) {
                Z[i][j] += X[i][k] * Y[k][j];
            }
        }
    }

    // Sonucu ekrana yazdýr
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", Z[i][j]);
        }
        printf("\n");
    }

    fclose(f);
    return 0;
}
