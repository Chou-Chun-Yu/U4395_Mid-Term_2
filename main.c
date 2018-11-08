#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Trans(int );
void units(int );

int main(void){
    int money, i, Tm;

    while(1)
    {
        printf("please input the amount:" );
        scanf("%d", &money);
        printf("\nThe input Money is %d yuan.\n", money);
        long int K=10000000;
        for (i = 8; i >= 1; i--){
            if (money >= K){
                Tm = money / K;
                Trans(Tm);
                units(i);
                money = money - ( Tm * K);
            }
            K = K / 10;
        }
        printf("\n\n");
    }

    system("pause");
    return 0;
}

void Trans(int number){
    switch(number){
    case 1:
        printf("³ü");
        break;
    case 2:
        printf("¶L");
        break;
    case 3:
        printf("°Ñ");
        break;
    case 4:
        printf("¸v");
        break;
    case 5:
        printf("¥î");
        break;
    case 6:
        printf("³°");
        break;
    case 7:
        printf("¬m");
        break;
    case 8:
        printf("®Ã");
        break;
    case 9:
        printf("¨h");
        break;
    case 0:
        printf("¹s");
        break;
    }
}

void units(int digit){
    switch(digit){
    case 1:
        printf("");
        break;
    case 2:
        printf("¬B");
        break;
    case 3:
        printf("¨Õ");
        break;
    case 4:
        printf("¥a");
        break;
    case 5:
        printf("¸U");
        break;
    case 6:
        printf("¬B");
        break;
    case 7:
        printf("¨Õ");
        break;
    case 8:
        printf("¥a");
        break;
    }
}
