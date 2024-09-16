#include <stdio.h>
int main(){
	int arr[50],n;
	printf("size: ");
	scanf("%d",&n);
	printf("Arrays: ");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int d;
	printf("delete: ");
	scanf("%d",&d);
	int i=0;
	while(i!=d)
	i++;
	while(i<n){
		arr[i]=arr[i+1];
		i++;
	}
	--n;
	printf("new array: ");
	for(int i=0; i<n; i++){
		printf("%d",arr[i]);
	}
	return 0;
}
