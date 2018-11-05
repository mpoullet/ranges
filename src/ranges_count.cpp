#include <range/v3/algorithm/count.hpp>

#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{6, 2, 3, 4, 5, 6};
  auto c = ranges::count(v, 6);
  std::cout << "vector:   " << c << "\n";
  std::array<int, 6> a{6, 2, 3, 4, 5, 6};
  c = ranges::count(a, 6);
  std::cout << "array:    " << c << "\n";
}
