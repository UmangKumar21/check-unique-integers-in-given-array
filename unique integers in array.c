#include<stdio.h>
int main(){
	int N,i;
	scanf("%d",&N);
	int val;
	int numCount[1001]={0};
	for(i=1;i<=N;i++){
		scanf("%d",&value);
		numCount[value]++;
		if(numCount[value]++ != 1){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
}