// Taken from: https://www.youtube.com/watch?v=4p21wBOplPQ

#include <algorithm>
#include <iostream>
#include <vector>

#include <range/v3/all.hpp>

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5};

  {
    // With STL
    std::vector<int> evenNumbers;
    std::copy_if(std::cbegin(numbers), std::cend(numbers),
                 std::back_inserter(evenNumbers), [](int n) { return n % 2; });

    std::vector<int> results;
    std::transform(std::cbegin(evenNumbers), std::cend(evenNumbers),
                   std::back_inserter(results), [](int n) { return n * 2; });

    for (const auto& n : results) {
      std::cout << n << '\n';
    }
  }

  {
    // With Ranges
    auto results = numbers                                              //
                   | ranges::view::filter([](int n) { return n % 2; })  //
                   | ranges::view::transform([](int n) { return n * 2; });

    for (const auto& n : results) {
      std::cout << n << '\n';
    }
  }
}
