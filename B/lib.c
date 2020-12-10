#include "B/lib.h"

int is_leap(int year) {
  if (year <= 0) {
    return -1;
  }

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        return 1;
      } else {
        return 0;
      }
    } else {
      return 1;
    }
  }
  return 0;
}