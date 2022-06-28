#include <cassert>
#include <cmath>
#include <iostream>

// R -> R: celsius(f) = 5/9*(f-32)
// Siendo f grados farenheit
double FtoC(double);

// f:R,R,R -> bool/f(x,y,z) = |x| > |y| AND |x|-|y| <= z
bool AreNear(double, double, double);

int main() {
  assert(AreNear(FtoC(75), 24, 1.0));
  assert(AreNear(24, FtoC(75), 1.0));
  assert(AreNear(FtoC(75), 24, 10));
  assert(!AreNear(FtoC(75), 24, 0.001));
}

double FtoC(double f) { return (f - 32) * 5 / 9; }

bool AreNear(double a, double b, double c) { return b - c <= a && a <= b + c; }
