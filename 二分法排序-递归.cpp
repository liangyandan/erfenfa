#include<stdio.h>     //递归查找  二分法 

int  Erfenfa(int a[],int left, int right,int x)
	{
	int middle = (left+right)/2;
	if (left>right)
	{ 
		printf("没有该数！");
		return 0; 
	} 
	if(x==a[middle])
		{
			printf("在%d个查到数字为=%d",middle+1,a[middle]);
			
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
	printf("请输入想要查找的数字：");
	scanf("%d",&x); 
	Erfenfa(a,0,9,x);
	return 0;
	
	
}
