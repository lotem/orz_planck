#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_36_36( \
  k3H, k3G, k3F, k3E, k3D, k3C, k6C, k6D, k6E, k6F, k6G, k6H, \
  k2H, k2G, k2F, k2E, k2D, k2C, k7C, k7D, k7E, k7F, k7G, k7H, \
  k1H, k1G, k1F, k1E, k1D, k1C, k8C, k8D, k8E, k8F, k8G, k8H, \
  k1I, k4I, k8I, k6J, k5J, k4C, k8B, k5B, k1B, k3A, k4A, k5H, \
  k2I, k6I, k7I, k4J, k1J, k2J, k7B, k3B, k2B, k5A, k8A, k7A, \
  k3I, k5I, k7J, k8J, k3J, k4H, k6B, k4B, k2A, k1A, k6A, k5C \
) { \
  {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J}, \
  {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2I, k2J}, \
  {k3A, k3B, k3C, k3D, k3E, k3F, k3G, k3H, k3I, k3J}, \
  {k4A, k4B, k4C, XXX, XXX, XXX, XXX, k4H, k4I, k4J}, \
  {k5A, k5B, k5C, XXX, XXX, XXX, XXX, k5H, k5I, k5J}, \
  {k6A, k6B, k6C, k6D, k6E, k6F, k6G, k6H, k6I, k6J}, \
  {k7A, k7B, k7C, k7D, k7E, k7F, k7G, k7H, k7I, k7J}, \
  {k8A, k8B, k8C, k8D, k8E, k8F, k8G, k8H, k8I, k8J}, \
}
