#include<stdio.h>
#include<stdlib.h>

int numbers[100];
int size = 0;

void printMenu() {
    printf("\nMENU\n");
    printf("1. Nhap so phan tu can nhap v� gi� tri c�c phan tu\n");
    printf("2. In ra gi� tri c�c phan tu dang quan ly\n");
    printf("3. Th�m mot phan tu v�o vi tr� cho danh\n");
    printf("4. Sa mot phan tu o vi tr� cho danh\n");
    printf("5. Xoa mot phan tu o vi tr� chi dinh\n");
    printf("6. Sep xap c�c phan tu\n");
    printf("7. Giam dan\n");
    printf("8. T�ng dan\n");
    printf("9. Tim kiem phan tu\n");
    printf("10. Tho�t\n");
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

