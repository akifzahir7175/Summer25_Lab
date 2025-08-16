#include <stdio.h>

char arr[5][10];
int display_seats();
int buy_ticket();
int ticket_summary();
int cancel_seat();
int main() {
    int input;
    
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 10;j++){
            arr[i][j] = 'O';
        }
    } 

while (1){
    printf("____________Welcome to Theater of your life_____________\n");
    printf("                  -----Because regrets look better in HD\n\n");
    printf("1.Display Seats\n");
    printf("2.Buy Seats\n");
    printf("3.Cancel Seat\n");
    printf("4.Seats Summary\n");
    printf("5.Exit\n");
    printf("Enter your Choice: ");


    scanf("%d", &input);
    if (input == 1){
        display_seats();
    }

    else if (input == 2){
        buy_ticket();
    }  

    else if (input == 3){
        cancel_seat();
    }

    else if (input == 4){
        ticket_summary();
    }

    else if (input == 5){
        printf("Exiting the program.....because life has no happy endings.\n");
        break;
    }
    
    else {
        printf("Invalid choice, just like your life decisions.\n");
    }
}
   return 0;
}



int display_seats(){
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 10;j++){
            printf(" %c ", arr[i][j]);
        }
        printf("\n");    
    } 

}

int buy_ticket(){
    int x,y;
        printf("Please enter Row number: ");
        scanf("%d", &x);
        printf("Please enter Col number: ");
        scanf("%d", &y);
        if (arr[x-1][y-1]=='X'){
             printf("Seat taken… just like your crush.\n");
        }
        else{
            arr[x-1][y-1] = 'X';
            printf("Purchase Successful! You just paid for 2 hours of regret.\n");
        }
}

int cancel_seat(){
    int x,y;
        printf("Please enter Row number: ");
        scanf("%d", &x);
        printf("Please enter Col number: ");
        scanf("%d", &y);
        if (arr[x-1][y-1]=='O'){
             printf("You can't cancel air, the seat is already empty like your life.\n");
        }
        else{
            arr[x-1][y-1] = 'O';
            printf("Ticket cancelled successfully!\n");
        }
}

int ticket_summary(){
    int count = 0;
        for (int i = 0; i < 5;i++){
            for (int j = 0; j < 10;j++){
                if(arr[i][j] == 'X'){
                    count++;
                }
            }
        }
            printf("Seat Available: %d\n", 50-count);
            printf("Ticket sold: %d\n", count);
}
