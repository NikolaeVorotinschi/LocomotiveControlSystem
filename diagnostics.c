#include <stdio.h>
#include "diagnostics.h"
#include "logger.h"

int fuel_level = 100;          // Начальный уровень топлива
int engine_temperature = 50;   // Начальная температура двигателя

void print_diagnostics() {
    printf("📊 Диагностика:\n");
    printf("⛽ Уровень топлива: %d%%\n", fuel_level);
    printf("🔥 Температура двигателя: %d°C\n", engine_temperature);
    check_warnings();  // Проверка предупреждений
}

void refuel() {
    fuel_level = 100;
    printf("⛽ Топливо заправлено!\n");
    log_event("Топливо заправлено!");
    check_warnings();  // Проверка после заправки
}

void cool_engine() {
    if (engine_temperature > 40) {
        engine_temperature -= 10; // Охлаждаем на 10°C
    }
    printf("❄️ Двигатель охлажден! Температура: %d°C\n", engine_temperature);
    log_event("Двигатель охлажден!");
    check_warnings();  // Проверка после охлаждения
}

void check_warnings() {
    if (fuel_level < 10) {
        printf("⚠️  ВНИМАНИЕ: Низкий уровень топлива (%d%%)!\n", fuel_level);
        log_event("⚠️ Низкий уровень топлива!");
    }
    if (engine_temperature > 80) {
        printf("🔥 ВНИМАНИЕ: Двигатель перегрет (%d°C)!\n", engine_temperature);
        log_event("🔥 Двигатель перегрет!");
    }
}
