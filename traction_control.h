#ifndef TRACTION_CONTROL_H
#define TRACTION_CONTROL_H

typedef enum {
    IDLE,
    MANUAL,
    AUTOMATIC
} TractionMode;

void set_traction_mode(TractionMode mode);
void print_traction_status();

#endif
