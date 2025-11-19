#include<stdio.h>
int i,j;

void getarray1D(int arr[5]) {
    printf("\nEnter in the 1A array element:-\n");
    for(i=0; i<5; i++) {
        printf("Enter element [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

// Function to print 1D array
void printarray1D(int arr[5]) {
    printf("\n1D array Element is=\n");
    for(i=0; i<5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


void getarray(int a[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void printarray(int a[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}

void addarray(int a[3][3], int b[3][3], int c[3][3])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j] + b[i][j];
		}
	}
}

main()
{
	int arr[5];
	int a[3][3],b[3][3],c[3][3];
	
	getarray1D(arr);
	printarray1D(arr);
	
	//2d array
	printf("\nEnter the elements of First matrix:\n");
	getarray(a);
	printf("\nThis is  First matrix:\n");
	printarray(a);
	
	
	printf("\nEnter the elements os second metrix:\n");
	getarray(b);
	printf("\n This is the second matrix:\n");
	printarray(b);
	
	addarray(a,b,c);
	printf("\n Addition of Two matrix is:\n");
	printarray(c);
}