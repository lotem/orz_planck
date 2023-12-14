#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_36_36( \
  k20, k21, k22, k23, k24, k25, k55, k54, k53, k52, k51, k50, \
  k10, k11, k12, k13, k14, k15, k65, k64, k63, k62, k61, k60, \
  k00, k01, k02, k03, k04, k05, k75, k74, k73, k72, k71, k70, \
  k09, k39, k79, k58, k48,      k76, k46, k06, k27, k37,      \
  k19, k59, k69, k38, k08, k18, k66, k26, k16, k47, k77, k67, \
    k49,    k68, k78, k28,        k36,    k17, k07, k57       \
) { \
  {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09}, \
  {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19}, \
  {k20, k21, k22, k23, k24, k25, k26, k27, k28, XXX}, \
  {XXX, XXX, XXX, XXX, XXX, XXX, k36, k37, k38, k39}, \
  {XXX, XXX, XXX, XXX, XXX, XXX, k46, k47, k48, k49}, \
  {k50, k51, k52, k53, k54, k55, XXX, k57, k58, k59}, \
  {k60, k61, k62, k63, k64, k65, k66, k67, k68, k69}, \
  {k70, k71, k72, k73, k74, k75, k76, k77, k78, k79}, \
}
