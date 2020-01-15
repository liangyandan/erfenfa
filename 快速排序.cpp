#include <stdio.h>              //µ›πÈ≈≈–Ú 
#include <stdlib.h>

int partition(int a[], int left, int right){    //≈≈–Ú 
    int key;
    key = a[left];
    while(left<right){
        while(left <right && a[right]>= key )
            right--;
        if(left<right)
            a[left++] = a[right];
	    while( left<right && a[left]<=key )
            left++;
        if(left<right)
            a[right--] = a[left];
    }
    a[left] = key;
    return left;
}
void quick_sort(int a[], int start, int end){
    int pos;
    if (start<end){
        pos = partition(a, start, end);
        quick_sort(a,start,pos-1);   //◊Û≈≈–Ú 
        quick_sort(a,pos+1,end);     //”“≈≈–Ú 
    }
    return;
}
int main(void){
    int i,n;
    int a[n];
    printf("Ω´“™ ‰»Îº∏∏ˆ–Ë≈≈–Úµƒ ˝◊÷£∫");
    scanf("%d",&n);
    printf("«Î ‰»Î“™≈≈–Úµƒ ˝£∫");
    for(int j=0;j<n;j++)
		scanf("%d",&a[j]);
    printf("≈≈–Ú«∞ \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    quick_sort(a,0,n-1);
    printf("\n ≈≈–Ú∫Û \n");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
    printf ("\n");
    system("pause");
    return 0;
}
