#ifndef BUTTON_H_
#define BUTTON_H_

#include "global.h"
#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button_flag[4];

int isButtonPressed(int key);
void getKeyInput();

#endif // BUTTON_H_
