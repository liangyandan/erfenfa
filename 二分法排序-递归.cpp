#include<stdio.h>     //�ݹ����  ���ַ� 

int  Erfenfa(int a[],int left, int right,int x)
	{
	int middle = (left+right)/2;
	if (left>right)
	{ 
		printf("û�и�����");
		return 0; 
	} 
	if(x==a[middle])
		{
			printf("��%d���鵽����Ϊ=%d",middle+1,a[middle]);
			
			return middle;
		}
		
		else if(x>a[middle])	
			Erfenfa(a,middle+1,right,x);
		else
			Erfenfa(a,left,middle-1,x);
}


int main()
{
	int a[10]={1,5,8,36,47,85,96,118,258,369};
	int x;
	printf("��������Ҫ���ҵ����֣�");
	scanf("%d",&x); 
	Erfenfa(a,0,9,x);
	return 0;
	
	
}
