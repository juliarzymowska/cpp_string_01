#ifndef CPP_STRING_H
#define CPP_STRING_H

#include <iostream>
namespace string_toys {

auto reverse(const std::string& str) -> std::string {
    std::string helper_variable;
        for (int i = 0; i < str.size(); i++)
            helper_variable += str[str.size() - 1 - i];

        return helper_variable;
}

auto first_to_upper(const std::string& str) -> std::string {
    std::string helper_variable;
        for (int i = 0; i < str.size(); i++)
        {
            if (i == 0 || str[i - 1] == ' ' || str[i-1]=='\n')
                helper_variable += std::toupper(str[i]);

            else
                helper_variable += str[i];
        }

        return helper_variable;
}

auto count_vowels(const std::string& str) -> int {
    int sum = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'a' || str[i] == 'A')
                sum++;
            else if (str[i] == 'e' || str[i] == 'E')
                sum++;
            else if (str[i] == 'i' || str[i] == 'I')
                sum++;
            else if (str[i] == 'o' || str[i] == 'O')
                sum++;
            else if (str[i] == 'u' || str[i] == 'U')
                sum++;
            else if (str[i] == 'y' || str[i] == 'Y')
                sum++;
        }
        return sum;
}

auto sum_digits(const std::string& str) -> int {
    int sum = 0;

        for (int i = 0; i < str.size(); i++)
            if (isdigit(str[i]))
                sum += str[i] - '0';

        return sum;
}

auto search_substr(const std::string& str, const std::string& substr) -> int {
        int helper_variable = -1; // zmienna zwracajaca wynik
        bool ok = 1;              // zmienna pomocnicza do sprawdzania substringu

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == substr[0] && (str.size() - i - substr.size() >= 0))
            {
                for (int j = 0; j < substr.size(); j++)
                {
                    if (str[j + i] != substr[j])
                    {
                        ok = 0;
                        break;
                    }
                }

                if (ok)
                {
                    helper_variable = i;
                    return helper_variable;
                }
                else
                    ok = 1;
            }
            else if (str.size() - i - substr.size() < 0)
                break;
        }
        return helper_variable;
}

auto custom_serach(const char* str, const char* substr) -> int {
    const char *ptr_str = str, *ptr_substr = substr; // wskazniki na glowny string i substring

        while (*ptr_str)
        {
            const char *temp_str = ptr_str; // pomocniczy string wskazujacy na glowny, do przechodzenia w petli

            while (*temp_str && *ptr_substr && *temp_str == *ptr_substr)
            {
                ++temp_str;
                ++ptr_substr;
            }

            if (!*ptr_substr)
                return (ptr_str - str);

            ptr_str++;
            ptr_substr = substr;
        }

        return -1;
}

}  // namespace string_toys

#endif /* CPP_STRING_H */
