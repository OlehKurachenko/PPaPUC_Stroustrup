//
//  Created by Oleh Kurachenko
//         aka okurache
//  as a part of PPaPUCpp_Stroustrup
//
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include <iostream>

#include "../universal/colored_print.h"

#include "weird.h"
#include "constexpr.h"

using namespace std;

int main() {
    cout << "main started!" << endl;

    // Testing weird function with local class

    cout << "weird_function_with_local_class(3, 4) = " << weird_function_with_local_class(3, 4) <<
         endl;
    cout << "weird_function_with_local_class(1, 0) = " << weird_function_with_local_class(1, 0) <<
         endl;
    cout << "weird_function_with_local_class(-3, 12) = "
         << weird_function_with_local_class(-3, 12) << endl;

    cout << colored_print::bold_blue;
    test_constexpr_section();
    cout << colored_print::reset;

    return 0;
}