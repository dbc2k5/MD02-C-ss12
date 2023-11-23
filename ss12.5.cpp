#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, m;
    int numbers[100][100];

    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");

        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                break;
            case 2:
               
                break;
            case 3:
                
                break;
            case 4:
               
                break;
            case 5:
               
                break;
            case 6:
                
                break;
            case 7:
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while (choice != 7);

    return 0;
}
