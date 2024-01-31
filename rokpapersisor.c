#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main() {
    char playerInput[10];
    printf("heelo to rock paper sisors \n\n");
    printf("choose either rock paper or scisors \n\n");
    printf("for example, type 'rock', 'Rock', 'r', or 'R' to type rock\n\n");
    printf("typpe your input: ");
    scanf("%s", &playerInput);

    int pcChoice = rand() % 3;
    int playerChoice;
    
    switch (playerInput)
    {
        case "Rock" || "rock" || "R" || "r":
            playerChoice = 1;
    }

  return 0;
}