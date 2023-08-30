#include "allergies.h"
#include <string>

namespace allergies {

  bool allergy_test::is_allergic_to(std::string allergy) {
      return allergens.count(allergy);
    }
  // std::unordered_set<std::string> add_allergies(int score) {
  //   if (score == 0) {
  //     return allergens;
  //   }
  //   int tmp_score = score;
  //   while (tmp_score >= 0 ) {
  //     return 1;
  //   }

  // }

  };
// }  // namespace allergies
