#include "string_01.h"
using namespace string_toys;
using std::cin;
using std::cout;
auto main() -> int { 
    std::string a, b; // glowny string, substring i pomocniczy do wczytywania a
    
    std::getline(cin,a);
    std::getline(cin,b);

    cout << reverse(a) << "\n";
    cout << first_to_upper(a) << "\n";
    cout << count_vowels(a) << "\n";
    cout << sum_digits(a) << "\n";
    cout << search_substr(a, b) << "\n";
    cout << custom_serach(a.c_str(), b.c_str()) << "\n";
    return 0; }
