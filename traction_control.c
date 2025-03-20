#include <stdio.h>
#include "traction_control.h"

static TractionMode current_mode = IDLE;

void set_traction_mode(TractionMode mode) {
    current_mode = mode;
}

void print_traction_status() {
    printf("Тяга: ");
    switch (current_mode) {
        case IDLE:
            printf("Холостой ход\n");
            break;
        case MANUAL:
            printf("Ручной режим\n");
            break;
        case AUTOMATIC:
            printf("Автоматический режим\n");
            break;
        default:
            printf("Неизвестный режим\n");
            break;
    }
}
