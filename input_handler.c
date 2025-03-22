#include <stdio.h>
#include "traction_control.h"
#include "brake.h"
#include "diagnostics.h"
#include "logger.h"

void handle_user_input(char command) {
    switch (command) {
        case 's':
            log_event("Запрошен статус локомотива");
            print_diagnostics();
            break;
        case 'm':
            toggle_traction_mode();
            break;
        case 'b':
            activate_brakes();
            break;
        case 'r':
            refuel();
            break;
        case 'o':
            cool_engine();
            break;
        case 'q':
            printf("👋 Завершение программы.\n");
            log_event("Программа завершена");
            break;
        default:
            printf("❌ Неизвестная команда!\n");
            break;
    }
}
