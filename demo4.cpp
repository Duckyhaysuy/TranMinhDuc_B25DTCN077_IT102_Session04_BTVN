#include <stdio.h>
int main() {
    int month;
    printf("nhap thang: ");
    scanf("%d",&month);
    
    switch (month){
        case 1:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        case 2:
        printf("thang %d la thang co 28 hoac 29 ngay.\n");
        break;
        case 3:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        case 4:
        printf("thang %d la thang co 30 ngay.\n");
        break;
        case 5:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        case 6:
        printf("thang %d la thang co 30 ngay.\n");
        break;
        case 7:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        case 8:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        case 9:
        printf("thang %d la thang co 30 ngay.\n");
        break;
        case 10:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        case 11:
        printf("thang %d la thang co 30 ngay.\n");
        break;
        case 12:
        printf("thang %d la thang co 31 ngay.\n");
        break;
        default:
        printf("ban nhap so thang khong hop le, vui long nhap lai.");
    }

    return 0;
}
