#include <stdio.h>

void main() {
    int a[20],l,r,t,n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter elements of sorted array: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter key to binary search: ");
    scanf("%d",&t);
    l=0,r=n-1;
    int m;
    while (l<=r) {
        m=l+(r-l)/2;
        if (a[m]==t) 
        printf("key %d found at index: %d\n",t,m);
        if (a[m<t])
        l=m+1;
        else 
        r=m-1;
    }
}