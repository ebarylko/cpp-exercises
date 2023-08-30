#include "pangram.h"
#include <set>
#include <bitset>

namespace pangram {

  bool is_pangram(const std::string  &str) {
    std::bitset<26> letters;
    for (auto c: str) {
      if (std::isalpha(c)) {
          auto pos = std::tolower(c) - 'a';
          letters.set(pos);
      }
        };
    return letters.all();
  }
}  // namespace pangram
