
#pragma once

#include "quantum.h"

#define arcade( \
    k00, k01, k02, \
    k10, k11, k12, k13, \
    k20, k21, k22, k23 \
    k30, k31, k32, k33 \	
) \
{ \
    { k00, k01, k02 }, \
    { k10, k11, k12, k13 }, \
    { k20, k21, k22, k22 }, \
    { k30, k31, k32, k32 }, \	
}
