#include <stdio.h>
int main() {
    int n,s,i,j;
    printf("Size:",n);
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum:",s);
    scanf("%d",&s);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s){
    printf(" Index %d and %d , values %d and %d\n", i, j,arr[i],arr[j]);
            }
            }
        }
    return 0;
}

