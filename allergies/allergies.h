#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>
using namespace std;

namespace allergies {
  class allergy_test {
  private:
    unordered_set<string> actual_allergies;
  public:
    allergy_test(int score); 
    unordered_set<string> add_allergies(int score);
    bool is_allergic_to(string allergy) const;
    const unordered_set<string> &get_allergies() const;
  };
}  // namespace allergies

#endif
// ALLERGIES_H
