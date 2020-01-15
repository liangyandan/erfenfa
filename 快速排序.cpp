#include <stdio.h>              //�ݹ����� 
#include <stdlib.h>

int partition(int a[], int left, int right){    //���� 
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
        quick_sort(a,start,pos-1);   //������ 
        quick_sort(a,pos+1,end);     //������ 
    }
    return;
}
int main(void){
    int i,n;
    int a[n];
    printf("��Ҫ���뼸������������֣�");
    scanf("%d",&n);
    printf("������Ҫ���������");
    for(int j=0;j<n;j++)
		scanf("%d",&a[j]);
    printf("����ǰ \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    quick_sort(a,0,n-1);
    printf("\n ����� \n");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
    printf ("\n");
    system("pause");
    return 0;
}
