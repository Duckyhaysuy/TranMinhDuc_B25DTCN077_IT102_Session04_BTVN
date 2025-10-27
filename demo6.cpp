#include <stdio.h>

int main() {
    int a, b;          
    double result, sum = 0; 
    
    printf("nhap so dien cu: ");
    scanf("%d", &a);
    printf("nhap so dien moi: ");
    scanf("%d", &b);

    result = b - a;

    if (result < 0) {
        printf("Chi so moi phai lon hon hoac bang chi so cu!\n");
        return 0;
    }

    if (result < 50)
        sum = result * 10000;
    else if (result < 100)
        sum = 50 * 10000 + (result - 50) * 15000;
    else if (result < 150)
        sum = 50 * 10000 + 50 * 15000 + (result - 100) * 20000;
    else if (result < 200)
        sum = 50 * 10000 + 50 * 15000 + 50 * 20000 + (result - 150) * 25000;
    else
        sum = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (result - 200) * 30000;

    printf("so dien tieu thu: %.2f kWh\n", result);
    printf("so tien ban phai tra la: %.2f VND\n", sum);

    return 0;
}


