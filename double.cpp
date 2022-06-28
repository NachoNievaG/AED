#include <cassert>

// R -> R/twice(x)= x*2
double twice(double);

int main() {
  assert(twice(3) == 6);
  assert(twice(2.3) == 4.6);
  assert(twice(150000) == 300000);
  assert(twice(-150000) == -300000);
  assert(twice(-125) == -250);
  assert(twice(-125.3) == -250.6);
  assert(twice(0.4) == 0.8);
}

double twice(double x) { return x * 2; }
