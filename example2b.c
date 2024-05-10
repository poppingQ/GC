#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,a[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},i,j,b[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				b[i]++;
			}
		}
	}
	int count=1;
	for(i=0;i<n;i++){
		count=1;
		for(j=0;j<n;j++){
			if(b[j]==0&&a[i]<a[j]){
				count++;
			}
		}
			printf("%d ",count);
	}
	
	
	
	return 0;
}

