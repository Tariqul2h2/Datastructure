#include<stdio.h>
#define SIZE 5 //set size of my queue
void insert();
void delet();
void display();
int queue[SIZE], rear=-1, front=-1, item; //global variable, we can access this variable from any where
main()
{
int ch;
printf("\n\n1.\tInsert\n2.\tDelete\n3.\tDisplay\n\n");

 do //menu statement
 {
 printf("\nEnter your choice: ");
 scanf("%d", &ch);

 switch(ch)
 {
 case 1:
 insert();
 break;
 case 2:
 delet();
break;
 case 3:
 display();
 break;
//  case 4:
//  exit(0);
//  default:
//  printf("\nChoice is incorrect, Enter a correct choice");
 }
 } while(1);
// getch();
}

void insert() //insert in a queue
{
 if((front==0 && rear==SIZE-1) || (front==rear+1)) //this statement represents, front==0 and rear==size-1, then there is no sace in queue,then it shows FULL.
 printf("\nQueue is full.");
 else //when queue is not full,then it entered in this statement.
 {
 	printf("\nEnter ITEM: ");
 	scanf("%d", &item);
	if(rear == -1)//when my rear become -1,then it starts from begining
 	{
 		rear = 0;
 		front = 0;
 	}
 	else if(rear == SIZE-1)//sudhu rear er size jodi defeined size er ceye 1 kom hoi,thahole ei statement e dhukbe
 		rear = 0;
 	else //and in the end,rear k barano hobe
 		rear++;

 	queue[rear] = item;//an array, here my scanned item's inputed in to queue
 	printf("\nItem inserted: %d\n", item);//it shows inputed items
 }
}
//if fron increases,rear decreases, to do delete operarion, we need to increase front.
void delet() //delete data from queue
{
if(front == -1)// when front is ==-1,then it shows,empty
 printf("\nQueue is empty.\n");
 else //f front!=-1,then...
 {
 	item = queue[front]; //fronts are input in item ...

 	if(front == rear) //when front and rear is in same position,then...
 	{
		 front = -1;//front in -1
		 rear = -1;//rear in -1
 	}
 	else if(front == SIZE-1)//when front is equals size-1,then front become zero.
 		front = 0;
 	else//otherwise, front increases
 	front++;

	printf("\nITEM deleted: %d", item);//delete data
 }
}

void display() //now times for showing data
{
	int i;
 	if((front == -1) || (front==rear+1))//front=-1 or if front is greater than rear,then its empty.
 		printf("\nQueue is empty.\n");
 	else //otherwise...
 	{
 		printf("\n\n");
	 	for(i=front; i<=rear; i++)//starts from front and loop continuing till i is less or equal than rear
	 	{	
	 		printf("\t%d",queue[i]);//started showing datas
 		}
 	}
 		
}//End of circular queue