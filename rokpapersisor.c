#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int pcChoice = rand() % 3;

    switch (pcChoice) {
        case 0:
            printf("Computer chose Rock.\n");
            break;
        case 1:
            printf("Computer chose Paper.\n");
            break;
        case 2:
            printf("Computer chose Scissors.\n");
            break;
    }


    char playerInput;
    printf("heelo to rock paper sisors \n\n");
    printf("choose either rock paper or scisors \n\n");
    printf("For example, to input rock, please ONLY type 'R' or 'r'. Nothing else will be accepted. !!!!!\n\n");
    gotoinput:
    printf("typpe your input: ");
    scanf("%s", &playerInput);

    int playerChoice;

    switch (playerInput) {
        case 'R':
        case 'r':
            playerChoice = 0;
            break;
        case 'P':
        case 'p':
            playerChoice = 1;
            break;
        case 'S':
        case 's':
            playerChoice = 2;
            break;
        default:
            playerChoice = 99;
            break;
    }

    if (((playerChoice == 0)&&(pcChoice == 0)) || ((playerChoice == 1)&&(pcChoice == 1)) || ((playerChoice == 2)&&(pcChoice == 2))) {
        printf("YOU GOT A TIE\n");
    }

    else if (((playerChoice == 0)&&(pcChoice == 1)) || ((playerChoice == 1)&&(pcChoice == 2)) || ((playerChoice == 2)&&(pcChoice == 0))) {
        printf("YOU LOST LOL!!!!!!!!!!!!\n");
    }

    else if (((playerChoice==0)&&(pcChoice==2)) || ((playerChoice==1)&&(pcChoice=0)) || ((playerChoice==2)&&(pcChoice=1))) {
        printf("YOU WON YAY!!!!!!!!!!!!!!!!!\n");
    }

    else {
        goto gotoinput;
    }

  return 0;
}