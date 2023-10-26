/*queue
George Paul
04/10/2023*/ 
#include<stdio.h>
int que[100],queue[100],choice,n,front,rear,ptr;
void enque(void);
void deque(void);
void display(void);
int main()
{
printf("enter the size of the Queue ");
scanf("%d",&n);
front=-1;
rear=n;


char h='Y';
do
{
printf("\n1.enque\n2.deque\n3.display\n4.Exit\n");
printf("enter your choice");
scanf("%d",&choice);
 switch (choice)
 {
 case 1:
   
    enque();
    break;
   
 case 2:
   
    deque();
    break;
  case 3:
    display();
    break;
  case 4:
    return 0;
  default:
    printf("Invalid choice. Please try again");
    }
    printf("Do you want to try more ? Y/N\n");
    scanf("%s",&h);
    }
   while(h=='Y');
   return 0;
  }
 
 
void enque()
  {
     int i,temp;
     printf("Enter the queue elements to be added \n");
     for(i=0;i<rear;i++)
        {
       scanf("%d",&que[i]);
        }
         printf("The elements of the queue are \n");
     for(i=0;i<rear;i++)
        {
        printf("%d\n",que[i]);
        }
        }
         
void deque()
  {
  
  int i,temp,d,f;
  
   printf("Enter the number of elements to be deleted\n");
   scanf("%d",&d);
   f==d;
   for(i=0;i<n-d;i++)
        {
        que[i]=que[i+d];
        }
    printf("The array after deletion is\n");
   for(i=0;i<rear-d;i++)
   {
   printf("%d\n",que[i]);
   }
   }
void display()
   {
   printf("your Queue is \n");
   for(int i=0;i<n;i++)
   {
   printf("%d\n",que[i]);
   }
   }
   
       
 


   


