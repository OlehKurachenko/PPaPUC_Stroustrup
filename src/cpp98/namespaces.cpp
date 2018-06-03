// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-03T16:08:19Z as a part of PPaPUCpp_Stroustrup
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include "namespaces.h"

using namespace std;

void test_namespaces() {
    cout << "a = " << A::a << endl;
    cout << "b = " << A::B::b << endl;
    cout << "c = " << C::c << endl;

    {
        using namespace A;

        cout << "a = " << a << endl;
    }

    // impossible - using opens a namespace in brackets
    //cout << "a = " << a << endl;

    {
        using namespace A;
        using namespace C;

        // it is possible to open more than one namespace, but there is a risk of ambiguous call
        //cout << "a = " << a << endl;

        cout << "a from A = " << A::a << endl;
        cout << "a from C = " << C::a << endl;

        // non-ambiguous works well

        cout << "b = " << B::b << endl;
        cout << "c = " << c << endl;

        unsigned d(12);

        // And this is really horrible case: call is not ambiguous
        cout << "horrible case 1 = " << horrible_f(d) << endl;
    }

    {
        my_own_stdlib::string s("Hell");
        cout << s << endl;
    }
}
