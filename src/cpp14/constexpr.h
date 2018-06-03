// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-02T13:18:19Z as a part of PPaPUCpp_Stroustrup
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#ifndef PPAPUCPP_STROUSTRUP_CONSTEXPR_H
#define PPAPUCPP_STROUSTRUP_CONSTEXPR_H

#include <iostream>

using namespace std;
const int a{12};

constexpr int constexpr_int_ex{23};
constexpr int constexpr_int_ex2{constexpr_int_ex + 4};

constexpr int constexpr_int_ex3{a}; // a have to be initialized in definition

constexpr unsigned constexpr_uint_ex_func(const unsigned a, const unsigned b) {
    unsigned ta{a};
    unsigned tb{b};
    unsigned temp{};

    while (tb) {
        temp = ta % tb;
        ta = tb;
        tb = temp;
    }
    return ta;
}

constexpr unsigned constexpr_uint_ex4{constexpr_uint_ex_func(constexpr_int_ex2, constexpr_int_ex3)};

/**
 * Runs some examples of usage of constexpr variables and functions with output to std::cout
 */
void test_constexpr_section();

#endif //PPAPUCPP_STROUSTRUP_CONSTEXPR_H
