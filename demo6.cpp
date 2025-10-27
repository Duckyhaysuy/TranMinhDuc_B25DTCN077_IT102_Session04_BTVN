#include <stdio.h>
int main() {
    int a,b,result;
    printf("nhap so dien cu: ");
    scanf("%d",&a);
    printf("nhap so dien moi: ");
    scanf("%d",&b);

    result= b-a;
    
    if(result>=0 && result<50){
        int sum = result*10000;
        printf("so tien ban phai tra la: %d VND\n",sum);
    }else if(result >=50 && result<100){
        int sum = result*15000;
        printf("so tien ban phai tra la: %d VND\n",sum);
    }else if(result >=100 && result<150){
        int sum = result*20000;
        printf("so tien ban phai tra la: %d VND\n",sum);
    }else if(result >=150 && result<200){
        int sum = result*25000;
        printf("so tien ban phai tra la: %d VND\n",sum);
    }else{
        int sum = result*30000;
        printf("so tien ban phai tra la: %d VND",sum);
    }
    
    return 0;
}
