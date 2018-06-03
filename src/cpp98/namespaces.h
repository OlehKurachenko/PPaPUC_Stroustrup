// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-03T16:08:19Z as a part of PPaPUCpp_Stroustrup
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#ifndef PPAPUCPP_STROUSTRUP_NAMESPACES_H
#define PPAPUCPP_STROUSTRUP_NAMESPACES_H

#include <iostream>

namespace A {
    const int a(12);

    namespace B {
        const int b(25);
    }

    inline int horrible_f(const int a) {
        return 121;
    }
}

namespace C {
    const int c(14);
    const int a(15);

    inline unsigned horrible_f(const unsigned a) {
        return 212;
    }
}

// Well, that doesn't work too - ::m cannot be "shadowed"
//namespace ToGlobal {
//    #include "namespace_add.h"
//}

/**
 * It looks line a direct way to hell
 */
namespace my_own_stdlib {
    #include <string>
    // Hopefully, THAT doesn't work
    //#include <vector>
    using namespace std;
}

/**
 * Runs some examples of usage of constexpr variables and functions with output to std::cout
 */
void test_namespaces();

#endif //PPAPUCPP_STROUSTRUP_NAMESPACES_H
