// Copyright 2022 Victor Lucachi (@victorlucachi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_ortho_3x3( \
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
