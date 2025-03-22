#include <stdio.h>
#include "input_handler.h"
#include "logger.h"

int main() {
    char command;
    log_event("Локомотив запущен!");

    printf("\n🚆 Locomotive Control System initialized!\n");
    printf("ℹ️  Доступные команды:\n");
    printf("   s - Показать статус локомотива\n");
    printf("   m - Переключить режим тяги (IDLE → MANUAL → AUTOMATIC → IDLE)\n");
    printf("   b - Активировать тормоза\n");
    printf("   r - Заправить топливо\n");
    printf("   o - Охладить двигатель\n");
    printf("   q - Выйти из программы\n\n");

    while (1) {
        printf("Введите команду: ");
        scanf(" %c", &command);

        if (command == 'q') {
            handle_user_input(command);
            break;
        }

        handle_user_input(command);
    }

    return 0;
}

