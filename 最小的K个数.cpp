#include<stdio.h>
#define N 10

					
int Zui(int a[],int n,int i)
{
	if(i<N)
	{
		int count=0;
		for(int j=0;j<N;j++)
		{
			if(a[i]<a[j])
				count+=1;
		}	
		if(count>=(N-n))
			printf("%-3d",a[i]);	
		Zui(a,n,i+1);
 	} 
}


int main()
{
	int n,i;
	int a[N];
	printf("������ʮ������");
	for(i=0;i<N;i++)
		scanf("%d",&a[i]); 
	printf("��ȡ��������С����");
	scanf("%d",&n);
	Zui(a,n,0); 
	
}
