#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>
using namespace std;

namespace allergies {
  class allergy_test {
  private:
    public:
    allergy_test(int score); 
    unordered_set<string> add_allergies(int score);
    bool is_allergic_to(string allergy);
    unordered_set<string> get_allergies();
  };
}  // namespace allergies

#endif
// ALLERGIES_H
