#if !defined(ALLERGIES_H)
#define ALLERGIES_H
#include <string>
#include <unordered_set>
#include <tuple>
#include <list>

namespace allergies {
  class allergy_test {
  private:
    int allergy_score;
    std::unordered_set<std::string> allergens;
    std::list<int> values{256, 128, 64, 32, 16, 8, 4, 2, 1};
    // std::list<std::string> names{"cats" "pollen" "chocolate" "tomatoes" "strawberries" "shellfish" "peanuts" "eggs"}
    // std::list<std::tuple<std::string, int>> names_to_score(std::views::zip(names, values))

    public:
    allergy_test(int score) {
      allergy_score = score;
      // allergies = add_allergies(allergies, score);
    }
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
