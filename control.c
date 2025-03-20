#include <stdio.h>
#include "control.h"

// Инициализация системы управления
void init_control_system() {
    printf("Система управления локомотивом инициализирована.\n");
}

// Установка уровня тяги (0-100%)
void set_throttle(int level) {
    if (level < 0) level = 0;
    if (level > 100) level = 100;
    printf("Тяга установлена на %d%%.\n", level);
}

// Включение вспомогательных систем
void enable_aux_systems() {
    printf("Включены вспомогательные системы.\n");
}

// Выключение вспомогательных систем
void disable_aux_systems() {
    printf("Выключены вспомогательные системы.\n");
}

// Запуск диагностики
void run_diagnostics() {
    printf("Запуск диагностики системы...\n");
    printf("Диагностика завершена: ошибок не обнаружено.\n");
}
