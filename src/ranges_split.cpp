// https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/
// Christopher Di Bella on Quora:
// https://www.quora.com/How-do-I-parse-string-by-specific-delimiter
// https://stackoverflow.com/q/48402558/496459

#include <range/v3/all.hpp>

#include <iostream>
#include <string>
#include <vector>

int main() {
  using namespace std::string_literals;
  auto grammar = "Jon|Danieles|Oilers|24|34"s;

  std::vector<std::string> tokens_A =
      ranges::view::split(grammar, [](const auto c) { return c == '|'; });
  ranges::copy(tokens_A, ranges::ostream_iterator<std::string>{std::cout, "\n"});

  auto tokens_B = grammar | ranges::view::split('|');
  ranges::copy(tokens_B, ranges::ostream_iterator<std::string>{std::cout, "\n"});

  std::string text = "Let me split this into words";
  auto split_text = text | ranges::view::split(' ');
  ranges::copy(split_text,
               ranges::ostream_iterator<std::string>{std::cout, "\n"});
}
