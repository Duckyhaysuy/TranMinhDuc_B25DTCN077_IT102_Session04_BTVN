#include <stdio.h>
int main() {
    int a,b,c;
    printf("nhap so nguyen a: ");
    scanf("%d",&a);
    printf("nhap so nguyen b: ");
    scanf("%d",&b);
    printf("nhap so nguyen c: ");
    scanf("%d",&c);
   
    
    if(a+b>c && a+c>b && b+c>a){
        printf("la 3 canh cua tam giac");
    }else{
        printf("khong la 3 canh cua tam giac");
    }
   
   
    return 0;
}
