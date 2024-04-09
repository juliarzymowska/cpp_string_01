#include "string_01.h"
using namespace string_toys;
using std::cin;
using std::cout;
auto main() -> int { 
    std::string a, b, pom; // glowny string, substring i pomocniczy do wczytywania a
    /*while(std::getline(cin, a))
    {
        pom+=a;
    }*/
    std::getline(cin,a);
    std::getline(cin, b);

    cout << reverse(pom) << "\n";
    cout << first_to_upper(pom) << "\n";
    cout << count_vowels(pom) << "\n";
    cout << sum_digits(pom) << "\n";
    cout << search_substr(pom, b) << "\n";
    cout << custom_serach(pom.c_str(), b.c_str()) << "\n";
    return 0; }
