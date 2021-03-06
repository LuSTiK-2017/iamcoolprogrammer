#include <stdio.h>
#include <stdlib.h>
#include "pointer.h"
#include "welcome.h"
#include "validation.h"
#include "recursion.h"

#define ISCONTINUE 1

// Function for clear screen
void clrscr() { 
    char a[80]; 
    printf("\033[2J"); /* Clear the entire screen. */ 
    printf("\033[0;0f"); /* Move cursor to the top left hand corner */ 
}

// Title for laboratory work
void title()
{
    clrscr();
    
    printf("------------------------------------------------------------------\n");
    printf("LABARATORY WORK\n");
    printf("POINTERS, FUNCTIONS, RECURTION\n");
    printf("AUTHOR: ZELENIY DMYTRO, STUDENT OF GROUP KM-73 <VARIANT 10>\n");
    printf("------------------------------------------------------------------\n\n");
        
    printf("1. POINTER\n");
    printf("2. RECURTION\n");
    printf("3. EXIT\n");
}

// Run task of laboratory work
void start_prog()
{
    int iscontinue = 1;
    int num_prog;

    while (iscontinue) {
        title();

        fflush(stdin);
        printf("YOUR CHOICE: ");
        num_prog = validation_int();

        switch (num_prog) {
            case 1:
                circle();
                break;
            case 2:
                binom_cof();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid value!\n");
                break;
        }
    
        printf("\nIf you want to continue input 1 or another digit to exit\n");
        iscontinue = validation_int();
        if (iscontinue == 1)
            ;
        else
            iscontinue = 0;
    }

}