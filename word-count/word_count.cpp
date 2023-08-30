#include "word_count.h"
#include <algorithm>
#include <regex>
using namespace std;


namespace word_count {

  const map<string, int> words(const string &str) {
    string lower;
    transform(str.begin(), str.end(), back_inserter(lower), ::tolower);
    const regex words_regex("\\w+([\\w']*\\w+)?");
    sregex_iterator words_begin(lower.begin(), lower.end(), words_regex), words_end;
    map<string, int> res;

    for(auto i = words_begin; i != words_end; i++) {
      ++res[i->str()];
    }    ;
    return res;
  }
}// namespace word_count
