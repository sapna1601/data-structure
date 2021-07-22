//Name:Sapna Sunil Rokade
//Roll no.:227

//Implementation of hashing.

#include<stdio.h>

int main()
{
	static int a[7],key,ch,find,i=0,j=0;
	
	do
	{
		printf("Enter the choice\n");
		printf("1.Enter the  key values\n");
		printf("2.Search the element\n");
		printf("3.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				for(i=0;i<7;i++)
				{
					scanf("%d",&key);
					j=(key%10);
					if(a[j]==0)
						a[j]=key;
					else
						a[j+1]=key;
				}
				break;
			case 2:
				printf("Enter the element to be Searched\n");
				scanf("%d",&find);
				i=(find%10);
				if(a[i]==find)
					printf("Element is present at location %d\n",i+1);
				else if(a[i+1]==find)
					printf("Element is present at location %d\n",i+2);
				else
					printf("Element is absent\n");
				break;
			case 3:
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(ch!=3);
	
	return 0;
}


/*output

Enter the choice
1.Enter the  key values
2.Search the element
3.EXIT
1
21
34
56
78
44
90
89
Enter the choice
1.Enter the  key values
2.Search the element
3.EXIT
2
Enter the element to be Searched
21
Element is present at location 2
Enter the choice
1.Enter the  key values
2.Search the element
3.EXIT
2
Enter the element to be Searched
90
Element is present at location 1
Enter the choice
1.Enter the  key values
2.Search the element
3.EXIT
2
Enter the element to be Searched
11
Element is absent
*/
