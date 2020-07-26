/*
 * lib_utils.cpp
 *
 *  Created on: Apr 23, 2020
 *      Author: Andrei Bragarenco
 */

#include "lib_utils.h"


float map_float(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
