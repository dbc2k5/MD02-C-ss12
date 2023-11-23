#include<stdio.h>

int mul(int x, int y){
	int result = x*y;
	printf("%d x %d = %d",x,y,result);
	return result;
}
int divide(int x, int y){
	if(x%y==0){
	int result = x/y;
	printf("\n%d : %d = %d\n",x,y,result);
	return result;
    }else if(x%y!=0){
    printf("\n%d khong chia het chon %d\n",y,x);
	}
}

int main(){
	int a,b,c;
	printf("Nhap gia tri a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	int mul1=mul(a,b);
	int divide1=divide(a,b);
	int mul2=mul(b,c);
	int divide2=divide(b,c);
	int mul3=mul(c,a);
	int divide3=divide(c,a);
	return 0;
}

