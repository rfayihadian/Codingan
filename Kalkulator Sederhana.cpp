#include <stdio.h>
int main() {
    float bill,bill2; char op;
    while(1){
        printf("\n\nKalkulator Sederhana");
        printf("\nMasukkan bilangan pertama: "); scanf("%f%c%f",&bill,&op,&bill2);
        if(op=='+'){
            printf("Hasil: %.2f",bill+bill2);
        } else if(op=='-'){
            printf("Hasil: %.2f",bill-bill2);
        } else if(op=='*'){
            printf("Hasil: %.2f",bill*bill2);
        } else if(op=='/'){
            printf("Hasil: %.2f",bill/bill2);
        } else {
            printf("Operator tidak valid");
        }
        break;
    }
    printf("\nSelesai");
}