#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number;
    int guess;
    int attempts;

    srand(time(0));
    number = rand() % 100 + 1; // генерация случайного числа в диапазоне 1 - 100

    printf("Давайте сыграем в игру 'Угадай число'. Я задумал число от 1 до 100 У тебя есть 10 попыток.\n");
    printf("У тебя есть 10 попыток угадать число. Введите цифру , которую я загадал: ");
    scanf("%d", &guess);

    attempts = 10;
    while (attempts > 0 && guess != number) {
        if (guess > number) {
            printf("Мое число меньше. Попробуй  угадать еще раз: ");
        } else if (guess < number) {
            printf("Мое число больше. Попробуй угадать  еще раз: ");
        }
        scanf("%d", &guess);
        attempts--;
    }

    if (guess == number) {
        printf("Поздравляю, ты угадал! Число было %d.\n", number);
    } else {
        printf("К сожалению, ты не смог угадать. Мое число было %d.\n", number);
    }

    return 0;
}
