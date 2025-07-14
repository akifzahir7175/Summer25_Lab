#include <stdio.h>

int main() {
    int input;
    char arr[5][10];
    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 10;j++){
            arr[i][j] = 'O';
        }
    } 

while (1){
    printf("___Welcome to Tarek Zia Cinema Hall____\n");
    printf("1.Display Seats\n");
    printf("2.Buy Seats\n");
    printf("3.Seats Summary\n");
    printf("4.Exit\n");
    printf("Enter your Choice: ");


    scanf("%d", &input);
    if (input == 1){
            for (int i = 0; i < 5;i++){
                for (int j = 0; j < 10;j++){
                 printf(" %c ", arr[i][j]);
        }
        printf("\n");    
    } 
    }
    
    
    
    else if (input == 2){
        int x,y;
        printf("Please enter Row number: ");
        scanf("%d", &x);
        printf("Please enter Col number: ");
        scanf("%d", &y);
        if (arr[x-1][y-1]=='X'){
             printf("Seat Unavailable\n");
        }
        else{
            arr[x-1][y-1] = 'X';
            printf("Purchase Successful!\n");
        }



    }  
    else if (input == 3){
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
    else if (input == 4){
        printf("Exiting the program\n");
        break;
    }
}
   return 0;
}
