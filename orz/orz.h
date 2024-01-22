#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_30_36( \
                                k6C, k6D, k6E, k6F, k6G, k6H, \
  k5H, k5G, k5F, k5E, k5D, k5C, k7C, k7D, k7E, k7F, k7G, k7H, \
  k4H, k4G, k4F, k4E, k4D, k4C, k8C, k8D, k8E, k8F, k8G, k8H, \
  k3H, k3G, k3F, k3E, k3D, k3C, k8B, k5B, k1B, k3A, k4A,      \
  k2H, k2G, k2F, k2E, k2D, k2C, k7B, k3B, k2B, k5A, k8A, k7A, \
  k1H, k1G, k1F, k1E, k1D, k1C,   k4B,    k2A, k1A, k6A       \
) { \
  {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H}, \
  {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H}, \
  {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H}, \
  {k4A, k4B, k4C, k4D, k4E, k4F, k4G, k4H}, \
  {k5A, k5B, k5C, k5D, k5E, k5F, k5G, k5H}, \
  {k6A, XXX, k6C, k6D, k6E, k6F, k6G, k6H}, \
  {k7A, k7B, k7C, k7D, k7E, k7F, k7G, k7H}, \
  {k8A, k8B, k8C, k8D, k8E, k8F, k8G, k8H}, \
}
