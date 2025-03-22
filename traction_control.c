#include <stdio.h>
#include "traction_control.h"
#include "logger.h"

TractionMode current_mode = IDLE;

void set_traction_mode(TractionMode mode) {
    current_mode = mode;
    log_event("Режим тяги изменен!");
}

void toggle_traction_mode() {
    if (current_mode == IDLE) {
        current_mode = MANUAL;
    } else if (current_mode == MANUAL) {
        current_mode = AUTOMATIC;
    } else {
        current_mode = IDLE;
    }
    printf("🔄 Режим тяги переключен!\n");
    log_event("Режим тяги переключен");
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
