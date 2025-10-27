#include <stdio.h>
int main() {
    int year;
    printf("nhap so nam: ");
    scanf("%d",&year);
    
    if(year%4==00 && year%100!=0){
        printf("%d la nam nhuan.\n",year);
    }else if(year%400==0){
        printf("%d la nam nhuan.\n",year);
    }else{
        printf("%d khong la nam nhuan.\n",year);
    }
    return 0;
}
