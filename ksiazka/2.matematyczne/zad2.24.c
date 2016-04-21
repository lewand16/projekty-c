#include <stdio.h>
#include <math.h>

int czySumaKwadratow(int l){
    int maxKwadrat, kwadrat1, kwadrat2, kwadrat3, jest = 0;
    maxKwadrat = round(sqrt(l));
    for (kwadrat1 = 1; kwadrat1 <= maxKwadrat; kwadrat1++){
        for (kwadrat2 = 1; kwadrat2 <= kwadrat1; kwadrat2++){
            for (kwadrat3 = 1; kwadrat3 <= kwadrat1; kwadrat3++){
                if (l == (kwadrat1 * kwadrat1) + (kwadrat2 * kwadrat2) + (kwadrat3 * kwadrat3)){
                    printf("%d = %d^2 + %d^2 + %d^2\n", l, kwadrat1, kwadrat2, kwadrat3);
                    jest = 1;
                }
            }
        }
    }
    return jest;
}

int main(){
    int liczba;

    do {
        printf("Podaj liczbe naturalna mniejsza od 32768\n");
        scanf("%d", &liczba);
    } while (liczba >= 32768 || liczba <= 0);

    if (!czySumaKwadratow(liczba))
        printf("Nie znaleziono sumy kwadratow dla liczby %d\n", liczba);

    getchar();
    getchar();
    return 0;
}
