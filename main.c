#include <stdio.h>

void showroom(){
    int carcode, quantity;
    float price;
    char carcategory[10], carname[10],cardesc[200];
    printf("NEW CAR ENTRY\n");
    printf("Enter Car CODE\n");
    scanf("%d", &carcode);
    printf("Enter Car PRICE\n");
    scanf("%f",&price);
    printf("Enter Car QUANTITY\n");
    scanf("%d",&quantity);
    printf("Enter Car CATEGORY\n");
    scanf("%s",carcategory);
    printf("Enter Car NAME\n");
    scanf("%s",carname);
    printf("Enter Car description\n");
    scanf("%s",cardesc);
}

void customer(){
   int carcode, quantity00,price,choice2,choice1;
   float total;
   printf("Car Code of currently available models are:\n 1.2020\n 2.1080\n");
   printf("Enter the car Code to move forward\n");
   scanf("%d",&carcode);
   switch(carcode){
       case 2020:
          printf("Enter Quantity\n");
          scanf("%d",&quantity00);
          price=280000;
          printf("The Car price is:\n %d",price);
          printf("\nWould you like to buy this car? Type 1 for yes and 2 for no\n");
          scanf("%d",&choice2);
          switch(choice2){
             case 1:
                  printf("TOTAL PRICE = Price*quantity+Registration fee + Insurance\n");
                  printf("Total cost of the car will be:\n");
                  total=price*quantity00+20000+10000.00;
                  printf("%f",total);
                  printf("\nWould you like to avail loan facility?, Type 1 for yes and 2 for no\n");
                  scanf("%d",&choice1);
                  switch(choice1){
                      case 1:
                        printf("LOAN QUERY HAS BEEN GENERATED, OUR BANK AGENT WILL CONTACT SOON");
                        break;
                      case 2:
                        printf("Thank you ! Your Car has been booked. We will contact you soon");
                        break;
                  }
                  
                  
                  break;
             case 2:
                  printf("Thank you for for your query\n");
                  break;
          }      
          break;
          
        case 1080:
          printf("Enter Quantity\n");
          scanf("%d",&quantity00);
          price=480000;
          printf("The Car price is:\n %d",price);
          printf("\nWould you like to buy this car? Type 1 for yes and 2 for no\n");
          scanf("%d",&choice2);
          switch(choice2){
             case 1:
                  printf("TOTAL PRICE = Price*quantity+Registration fee + Insurance\n");
                  printf("Total cost of the car will be:\n");
                  total=price*quantity00+20000+10000.00;
                  printf("%f",total);
                  printf("\nWould you like to avail loan facility?, Type 1 for yes and 2 for no\n");
                  scanf("%d",&choice1);
                  switch(choice1){
                      case 1:
                        printf("LOAN QUERY HAS BEEN GENERATED, OUR BANK AGENT WILL CONTACT SOON");
                        break;
                      case 2:
                        printf("Thank you ! Your Car has been booked. We will contact you soon");
                        break;
                  }
                  break;
             case 2:
                  printf("Thank you for for your query\n");
                  break;
   }
   
       
   }
   
   
   
}

int main()
{   int choice;
    printf("WELCOME TO ABHAY CAR WORLD\n");
    printf("PLEASE SELET THE USER CATEGORY: 1 for SHOWROOM , 2 FOR CUSTOMER\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1: 
           showroom();
           break;
        case 2:
           customer();
           break;
        default:
           printf("YOU HAVE GIVEN WRONG INPUT\n");
    }
    

    return 0;
}

