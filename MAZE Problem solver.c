#include<stdio.h>
int maze(int cr,int cc, int er,int ec){
	int rightways=0 , downways=0;
	if(cr==er && cc==ec){
		return 1;
	}
	if (cr<er && cc<ec){
		rightways+=maze(cr,cc+1,er,ec);
		downways+=maze(cr+1,cc,er,ec);
	}
	if (cr==er){
		rightways+=maze(cr,cc+1,er,ec);
	}
	if(cc==ec){
		downways+=maze(cr+1,cc,er,ec);
	}
	return downways+rightways;
}
int main(){
	int a,b,r,c;
	printf("enter number of rows");
	scanf("%d",&r);
	printf("enter number of column");
	scanf("%d",&c);
	a=maze(1,1,r,c);
	printf("%d ",a);
	return 0;
}
