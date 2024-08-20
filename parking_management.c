#include<stdio.h>
#include<conio.h>
int Menu();
void bus();
void car();
void cycle();
void rickshaw();
void status();
void reset();

int numberR=0,numberCY=0,numberC=0,nummberB=0,amount=0,count=0;
void main()
{

 for(1; ; )
 {


    system("cls");
    switch(Menu())
    {
    case 1:
        bus();
        break;
    case 2:
        car();
        break;

    case 3:
        rickshaw();
        break;

    case 4:
        cycle();
        break;

    case 5:
        status();
        break;

    case 6:
        reset();
        break;
    case 7:
        exit(0);
        

    default:
        printf("\nInvalid Choice:");

    }
    getch();
 }
}
int Menu()
{
    int n;
    printf("\n1. Enter bus(100$) ");
    printf("\n2. Enter cars(50$) ");
    printf("\n3. Enter rickshaw(30$) ");
    printf("\n4. Enter cycle(20$) ");
    printf("\n5. Show status ");
    printf("\n6. Reset Data ");
    printf("\n7. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&n);
    return n;



}

void status()
{
    printf("\nNumber of bus: %d",nummberB);
    printf("\nNumber of cars:%d",numberC);
    printf("\nNumber of cycle: %d",numberCY);
    printf("\nNumber of rickshaw: %d",numberR);
    printf("\nTotal number of vehicles: %d",nummberB+numberC+numberCY+numberR);
    printf("\nTotal amount=%d",amount);
}

void reset()
{
    numberC=0;
    numberCY=0;
    numberR=0;
    nummberB=0;
    amount=0;
    count=0;

}




void rickshaw()
{
    printf("\nRickshaw entry successful");
    numberR++;
    amount+=30;
    count++;
}

void cycle()
{
    printf("\nCycle entry successful");
    numberCY++;
    amount+=20;
    count++;

}

void car()
{
    printf("\nCar entry successful");
    numberC++;
    amount+=50;
    count++;
}

void bus()
{
    printf("\n Bus entry successful");
    nummberB++;
    amount+=100;
    count++;

}













