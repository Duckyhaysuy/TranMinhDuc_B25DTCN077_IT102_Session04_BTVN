#include <stdio.h>
int main() {
    int a,b,c;
    printf("nhap so thu nhat: ");
    scanf("%d",&a);
    printf("nhap so thu hai: ");
    scanf("%d",&b);
    printf("nhap so thu ba: ");
    scanf("%d",&c);
    
    if ((a < c && c < b) || (b < c && c < a)) {
        printf("so thu 3 nam giua so 1 va 2.\n");
    } else {
        printf("so thu 3 khong nam giua so 1 va 2.\n");
    }

    return 0;
}
