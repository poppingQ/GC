#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void maopao(int a[],int n){
	int i,j,t;
	for(j=0;j<n-1;j++){
		for(i=0;i<n-1-j;i++){
		if(a[i]>a[i+1]){
			t=a[i];
			a[i]=a[i+1];
		    a[i+1]=t;
		}
		
	}
	}
	
}
int main(int argc, char *argv[]) {
    void maopao(int a[],int n);
    int a[5]={0,0,0,0,0};
    int i;
    for(i=0;i<=4;i++){
    	scanf("%d",&a[i]);
	}
    maopao(a,5);
   for(i=0;i<=4;i++){
    	printf("%d ",a[i]);}
	return 0;
}




