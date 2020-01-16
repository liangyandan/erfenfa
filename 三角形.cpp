#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e,f,n;
	for(a=1;a<=9;a++)
		for(b=1;b<=9;b++)
			for(c=1;c<=9;c++)
				for(d=1;d<=9;d++)
					for(e=1;e<=9;e++)
						for(f=1;f<=9;f++)
							if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&
							  b!=c&&b!=d&&b!=e&&b!=f&&
							  c!=d&&c!=e&&c!=f&&
							  d!=e&&d!=f&&
							  e!=f)
								if(a+b+c==c+d+e&&c+d+e==e+f+a)
								{
									printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
									n+=1;
								}
								printf("共有%d个解!\n",n);
									
	system("pause");

}
