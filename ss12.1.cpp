#include<stdio.h>

int sum(int x, int y){
	int result = x+y;
	printf("%d + %d = %d",x,y,result);
	return result;
}
int total(int x, int y){
	if(x>=y){
	int result = x-y;
	printf("\n%d - %d = %d\n",x,y,result);
	return result;
    }else if(y>x){
    int result = y-x;
    printf("\n%d - %d = %d\n",y,x,result);
    return result;
	}
}

int main(){
	int a,b,c;
	printf("Nhap gia tri a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	int sum1=sum(a,b);
	int total1=total(a,b);
	int sum2=sum(b,c);
	int total2=total(b,c);
	int sum3=sum(c,a);
	int total3=total(c,a);
	return 0;
}

