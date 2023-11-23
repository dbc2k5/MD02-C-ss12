#include<stdio.h>
#include<stdlib.h>

int numbers[100];
int size = 0;

void printMenu() {
    printf("\nMENU\n");
    printf("1. Nhap so phan tu can nhap và giá tri các phan tu\n");
    printf("2. In ra giá tri các phan tu dang quan ly\n");
    printf("3. Thêm mot phan tu vào vi trí cho danh\n");
    printf("4. Sa mot phan tu o vi trí cho danh\n");
    printf("5. Xoa mot phan tu o vi trí chi dinh\n");
    printf("6. Sep xap các phan tu\n");
    printf("7. Giam dan\n");
    printf("8. Tãng dan\n");
    printf("9. Tim kiem phan tu\n");
    printf("10. Thoát\n");
}


int main() {
    int choice;
    
    do {
        printMenu();
        printf("Chon mot chuc nang (1-10): ");
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
                
                break;
            case 8:
                break;
            case 9:
            	break;
            case 10:
            	exit(0);
}

}while(1==1);

}

