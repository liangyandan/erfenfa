#include<stdio.h>     //ѭ������  ���ַ� 

int main()
{
	int a[8]={1,2,3,4,5,6,7,8};
	int left=0;
	int right=7;
	int middle,x;
	printf("������������ҵ����֣�");
	scanf("%d",&x);
	while(left<=right)
	{
		middle=(left+right)/2;
		//printf("middle1=%d\n",middle);
	//	printf("a[middle]=%d\n",a[middle]);
		if(x==a[middle])
		{
			printf("��%d���鵽����Ϊ=%d",middle+1,a[middle]);
			
			return middle;
		}
		
		else if(x>a[middle])	
			left=middle+1;
		else
			right=middle-1;	
	}
	printf("û���ҵ���") ; 

}
