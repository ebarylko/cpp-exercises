#include "allergies.h"
#include <string>
#include <map>
#include <list>
#include <set>
#include <iostream>

using namespace std;

void print(unordered_set<string> const &s)
{
	copy(s.begin(),
            s.end(),
            ostream_iterator<string>(cout, " "));
}

namespace allergies {

  const map<string, int> names_to_score {
    { "cats", 128},
    { "pollen", 64},
    { "chocolate", 32 },
    { "tomatoes", 16},
    { "strawberries", 8},
    { "shellfish", 4},
    { "peanuts", 2},
    { "eggs", 1}
  };

  unordered_set<string> actual_allergies;

  allergy_test::allergy_test(int score) {
    set<pair<string, int>> allergens;
    copy_if(names_to_score.begin(), names_to_score.end(), inserter(allergens, allergens.end()), [score](auto const & allergy) {
      return score & allergy.second;
    });

    transform(allergens.begin(), allergens.end(), inserter(actual_allergies, actual_allergies.end()), [](auto const &pair) { return pair.first; });
  }

  bool allergy_test::is_allergic_to(std::string allergy) {
    print(actual_allergies);
    return actual_allergies.count(allergy);
  }

  unordered_set<string> allergy_test::get_allergies() {
    return actual_allergies;
  }
  const unordered_set<string>& get_allergies() {
    return actual_allergies;
  }

};
