#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>

namespace allergies {
  class allergy_test {
  private:
    public:
    allergy_test(int score); 
    std::unordered_set<std::string> add_allergies(int score);
    bool is_allergic_to(std::string allergy);
  };
}  // namespace allergies

#endif // ALLERGIES_H
// (reduce (fn [[coll score] [allergy val]]
//          (case (<= 0 (- score val) )
//           [(conj coll allergy) (- score val)]
//           (reduced [coll score]))) allergies)
// {:allergy val}
