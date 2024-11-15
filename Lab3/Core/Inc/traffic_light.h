#ifndef TRAFFIC_LIGHT_H
#define TRAFIFIC_LIGHT_H

#include "global.h"
#include "main.h"

void setTraffic(int x_axis, int y_axis);
void set_X_axis_light(int red, int green, int yellow);
void set_Y_axis_light(int red, int green, int yellow);
void countDown();

#endif // TRAFFIC_LIGHT_H
