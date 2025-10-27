#include <stdio.h>

int main() {
    int namsinh, namhientai = 2025, tuoi;
    float diem;

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);
    printf("Nhap diem trung binh: ");
    scanf("%f", &diem);

    if (namsinh <= 1900 || namsinh > namhientai)
        printf("Nam sinh khong hop le\n");
    else {
        tuoi = namhientai - namsinh;
        printf("Thong tin sinh vien:\nNam sinh: %d\nTuoi: %d\nDiem TB: %.2f\n", namsinh, tuoi, diem);
        if (tuoi >= 18) printf("Du 18 tuoi\n"); 
        else printf("Chua du 18 tuoi\n");

        if (diem < 5.0) printf("Xep loai: Yeu\n");
        else if (diem < 6.5) printf("Xep loai: Trung binh\n");
        else if (diem < 8.0) printf("Xep loai: Kha\n");
        else printf("Xep loai: Gioi\n");
    }
    return 0;
}

