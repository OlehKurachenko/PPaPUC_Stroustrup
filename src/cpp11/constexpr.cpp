// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-02T13:18:19Z as a part of PPaPUCpp_Stroustrup
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include "constexpr.h"

void test_constexpr_section() {
    cout << "constexpr int = " << constexpr_int_ex << endl;
    cout << "constexpr int 2 = " << constexpr_int_ex2 << endl;
    cout << "constexpr int 3 = " << constexpr_int_ex3 << endl;
    cout << "constexpr gcd(" << constexpr_int_ex2 << ", " << constexpr_int_ex3 << ") = "
         << constexpr_uint_ex4 << endl;
    cout << "constexpr (called with non-constexpr parameters) gcd(15, 45) = "
         << constexpr_uint_ex_func(15, 55) << endl;
}
