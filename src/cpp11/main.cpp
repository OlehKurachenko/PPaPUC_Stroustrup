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

#include "constexpr.h"

using namespace std;

int main() {
    cout << "main started!" << endl;

    cout << colored_print::bold_blue;
    test_constexpr_section();
    cout << colored_print::reset;

    return 0;
}