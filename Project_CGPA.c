#include <stdio.h>


int sgpa();
int main() {

    printf("_____________________Welcome to the CGPA Calculator _____________________\n");

    int sem,course;
    printf("Enter number of semester: ");
    scanf("%d", &sem);
    

     for (int i = 1; i <= sem; i++){
         printf("_________________________________________________________________________\n");
         printf("Semester %d \n", i);
         sgpa();
     }
    return 0;
}
int sgpa(){
    int course;
    char x;
    float a = 0,b = 0,c = 0,d;
    printf("Enter number of courses this semester: ");
    scanf("%d", &course);
    
    float arr[2][course];

    for (int i = 0; i < course; i++){
        
        printf("Course %d name: ", i);
        scanf("%c", &x);
        
        printf("Course Credit: ");
        scanf("%f", &arr[0][i]);
        a = a + arr [0][i];
        
        printf("Obtained Grade: ");
        scanf("%f", &arr[1][i]);
        b = b + arr[0][i];
        
        c = c + arr [0][i] * arr [1][i];
     }
     d = c/a;
     printf("\nTotal Credit this Semester: %.1f\nSGPA: %.2f\n", a, d);
}


