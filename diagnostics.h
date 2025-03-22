#ifndef DIAGNOSTICS_H
#define DIAGNOSTICS_H

extern int fuel_level;           // Уровень топлива (в %)
extern int engine_temperature;   // Температура двигателя (в °C)

void print_diagnostics();    // Выводит состояние локомотива
void refuel();               // Заправляет топливо
void cool_engine();          // Охлаждает двигатель
void check_warnings();       // Проверяет наличие предупреждений

#endif // DIAGNOSTICS_H
