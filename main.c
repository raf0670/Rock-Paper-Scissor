#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int player, computer;
    computer = (rand() % 3);
    // 0 = rock;
    // 1 = paper;
    // 2 = scissor;
    printf("Write 0 for rock\n      1 for paper\n      2 for scissor\n");
    printf("Enter your number: ");
    scanf("%d", &player);
    printf("The computer chose %d\n", computer);

    if(computer == player) {
        printf("It's a draw.");
    }
    else if (computer == 0 && player == 1) {
        printf("You Won!");
    }
    else if (computer == 0 && player == 2) {
        printf("You Lost!");
    }
    else if (computer == 1 && player == 0) {
        printf("You Lost!");
    }
    else if (computer == 1 && player == 2) {
        printf("You Won!");
    }
    else if (computer == 2 && player == 0) {
        printf("You Won!");
    }
    else if (computer == 2 && player == 1) {
        printf("You Lost!");
    }
    else {
        printf("Something went wrong.\nPlease try again.");
    }
    return 0;
}