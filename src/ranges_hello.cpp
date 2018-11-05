#include <range/v3/all.hpp>

#include <iostream>
#include <string>

int main() {
  std::string s{ "hello" };
  ranges::for_each( s, [](char c){ std::cout << c << " "; });
  std::cout << "\n";
}
