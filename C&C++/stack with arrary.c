#include<stdio.h>
int stack[6],top=-1,item=0;
main()
{
  int a; 
  while(1)
  {  
  printf("\npress \n 1 for insertion\n 2 for deletion \n 3 to exit ");
  scanf("%d",&a);

  switch(a)
  {
    case 1: insert(); break;
	case 2: delete(); break;
	case 3: exit(0);
	default : printf("INVALID INPUT");  
  }
  }
}  

insert()
{
  if(top==5)
  printf("STACK IS FULL ");
  else
  {
    printf("enter the the value to be inserted :");
    scanf("%d",&item);
    top=top+1;
	stack[top]=item;
	printf("the entered value : %d has been inserted succesfully",item);
  }
  

}

delete()
{
int ele;
  if(top==-1)
  printf("STACK IS ALREADY EMPTY");
  else
  {
    ele=stack[top];
	top=top-1;
	printf("THE TOP VALUE OF THE STACK IS DELETED ");
  
  }

}
