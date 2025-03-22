#include <stdio.h>
#include <time.h>
#include "logger.h"

void log_event(const char *event) {
    FILE *file = fopen("locomotive.log", "a");  // Открываем файл для добавления записей
    if (!file) return;  // Если не удалось открыть — просто выходим

    // Получаем текущее время
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    // Записываем в формате [чч:мм:сс] Сообщение
    fprintf(file, "[%02d:%02d:%02d] %s\n",
            t->tm_hour, t->tm_min, t->tm_sec, event);

    fclose(file);
}
