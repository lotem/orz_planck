#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_5x12( \
  k5H, k5G, k5F, k5E, k5D, k5C, k5B, k5A, k59, k58, k57, k56, \
  k4H, k4G, k4F, k4E, k4D, k4C, k4B, k4A, k49, k48, k47, k46, \
  k3H, k3G, k3F, k3E, k3D, k3C, k3B, k3A, k39, k38, k37, k36, \
  k2H, k2G, k2F, k2E, k2D, k2C, k2B, k2A, k29, k28, k27, k26, \
  k1H, k1G, k1F, k1E, k1D, k1C, k1B, k1A, k19, k18, k17, k16 \
) { \
  {k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H}, \
  {k26, k27, k28, k29, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H}, \
  {k36, k37, k38, k39, k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H}, \
  {k46, k47, k48, k49, k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H}, \
  {k56, k57, k58, k59, k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H}, \
}
