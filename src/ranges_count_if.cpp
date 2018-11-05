#include <range/v3/algorithm/count_if.hpp>

#include <array>
#include <vector>

#include <iostream>

int main() {
  std::vector<int> v{6, 2, 3, 4, 5, 6};
  auto is_six = [](int i) -> bool { return i == 6; };
  auto c = ranges::count_if(v, is_six);
  std::cout << "vector:   " << c << "\n";  // 2
  std::array<int, 6> a{6, 2, 3, 4, 5, 6};
  c = ranges::count_if(a, is_six);
  std::cout << "array:    " << c << "\n";  // 2
}
