#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap ngay thang nam: ");
    scanf("%d/%d/%d", &day,&month,&year);
  
    int maxDay;

    if (month > 1 && month < 12) {
        printf("Ngay thang nam hop le.\n");
    }else{
        printf("Ngay thang nam khong hop le.\n");
    }

    int leapYear = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);


    if (month == 2)
        maxDay = leapYear ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        maxDay = 30;
    else
        maxDay = 31;

 
    if (day >= 1 && day <= maxDay)
        printf("Ngay thang nam hop le.\n");
    else
        printf("Ngay thang nam khong hop le.\n");

    return 0;
}
