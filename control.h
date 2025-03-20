#ifndef CONTROL_H
#define CONTROL_H

// Инициализация системы управления
void init_control_system();

// Управление тягой
void set_throttle(int level);

// Управление вспомогательными системами
void enable_aux_systems();
void disable_aux_systems();

// Диагностика и защита
void run_diagnostics();

#endif // CONTROL_H
