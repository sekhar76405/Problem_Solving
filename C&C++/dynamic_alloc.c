#include<stdio.h>
#include<stdlib.h>
int * sum(int[],int[],int);
void main()
{
    int n;
    scanf("%d",&n);
    
    int *a= (int*)malloc(n * sizeof(int));
    int *b= (int*)malloc(n * sizeof(int));
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    
    int *c;
    
    c = sum(a,b,n);
    
    
    for(int i=0;i<n;i++)
    printf("%d\t",c[i]);
    
}

int * sum(int *a,int *b,int  n)
{
    int *c = (int *)calloc(n,sizeof(int));
    
    for(int i=0;i<n;i++)
    c[i] = a[i]+b[i];
    
    return c;
}