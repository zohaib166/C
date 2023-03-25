#include <stdio.h>

void display_seats();
int book_tickets();
int cancel_tickets();
void initialize();
int check_seat_status();

#define RESERVED -1
#define FAILURE	0

static int seats[30];

int main()
{
	int option=1;
	int result=-1;
	initialize();
	while(option!=4)
	{
		printf("\n");
		printf("Welcome to Clear View Cinema.\n");
		printf("Choose any one of the options below:\n");
		printf("1. Display Seats.\n");
		printf("2. Book Ticket.\n");
		printf("3. Cancel Ticket.\n");
		printf("4. Exit.\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				display_seats();
				break;
			case 2:
			{
				result = book_tickets();
				if(result==FAILURE)
					printf("Booking Failed\n");
				else
					printf("%d tickets booked successfully\n", result);
				display_seats();				
				break;
			}
			case 3:
			{
				result = cancel_tickets();
				if(result==FAILURE)
					printf("Error in cancellation\n");
				else {
					printf("%d tickets cancelled successfully\n", result);
					display_seats();
				}
				break;
			}
			default:
				printf("Thank You\n");
				break;
		}
	}
	return 0;
}

void initialize()
{
	int i=0;
	for(i=0; i<30; i++)
	{
		seats[i] = i+1;
	}
}

void display_seats()
{
	int i=0;
	int j=0;
	printf("SEATING PLAN\n");
	for(i=0; i<30; i++)
	{
		if(i==10 || i==20)
			printf("\n");
		printf("%2d ", seats[i]);
	}
	printf("\n");
}

int book_tickets()
{
	int num, seat_no, count=0;
	printf("Please enter the number of tickets to be booked\n");
	scanf("%d", &num);
	if(num<1 || num>30)
		return FAILURE;
	else
	{
		count=num;
		printf("Please enter the seat numbers one by one\n");
		do
		{
			scanf("%d", &seat_no);
			if(seats[seat_no-1]!=0)
			{
				seats[seat_no-1] = 0;
				--count;
			} 
			else if(seat_no <1 || seat_no >30)
				printf("Invalid Seat number, please enter a number between 1 to 30\n");
			else
			{
				printf("Seat already booked. please choose a vacant seat\n");
			}
		}
		while(count!=0);
		
		return num;
	}	
}

int cancel_tickets()
{
	int num, seat_no, count=0;
	printf("Please enter the number of tickets to be cancelled\n");
	scanf("%d", &num);
	if(num<1 || num>30 || check_seat_status()<num)
		return FAILURE;
	else
	{
		count=num;
		printf("Please enter the seat numbers one by one\n");
		do
		{
			scanf("%d", &seat_no);
			if(seats[seat_no-1]==0)
			{
				seats[seat_no-1] = seat_no;
				--count;
			} 
			else
			{
				printf("Seat already vacant. please choose a booked seat\n");
			}
		}
		while(count!=0);
		return num;
	}
}

int check_seat_status()
{
	int i=0, count=0;
	for(i=0; i<30; i++)
	{
		if(seats[i]==0)
			count++;
	}
	return count;
}