#ifndef TRACTION_CONTROL_H
#define TRACTION_CONTROL_H

// Определяем режимы тяги
typedef enum {
    IDLE,       // Холостой ход
    MANUAL,     // Ручное управление
    AUTOMATIC   // Автоматический режим
} TractionMode;

// Объявляем глобальную переменную
extern TractionMode current_mode;

// Функции управления тягой
void set_traction_mode(TractionMode mode);
void print_traction_status();

#endif // TRACTION_CONTROL_H
void toggle_traction_mode();
