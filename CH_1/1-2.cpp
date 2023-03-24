#include<stdio.h>

main()
{
	char str[20];
	int i;
	printf("enter name: ");
	scanf("%[^\n]",&str[in]);
	
	for(i=0;str[i]!='0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]+=32;
		}	
	}
	printf("name: %s",str);
}
