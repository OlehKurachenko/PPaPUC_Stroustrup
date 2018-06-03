// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-02T00:56:01Z as a part of PPaPUCpp_Stroustrup
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include "weird.h"

using namespace std;

// Bad idea, necessary to check "::" inside of local class
static int x = 1000;

int weird_function_with_local_class(const int a, const int b) {

    static int x = 1000000;

    class HolyLocalClass {
    public:
        HolyLocalClass(const int a, const int b):
                _a(a), _b(b) {
            std::cout << "constructor of HolyLocalClass from function weird_function_with_local_class"
                         " called" << std::endl;
        }
        ~HolyLocalClass() {
            std::cout << "destructor of HolyLocalClass from function weird_function_with_local_class"
                         " called" << std::endl;
        }
        int beast() {
            return 2 * this->_a + this->_b + x + ::x;
        }
    private:
        const int _a;
        const int _b;
    };

    HolyLocalClass holy(a, b);
    return holy.beast();
}

void test_weird_local_class() {
    cout << "weird_function_with_local_class(3, 4) = " << weird_function_with_local_class(3, 4) <<
         endl;
    cout << "weird_function_with_local_class(1, 0) = " << weird_function_with_local_class(1, 0) <<
         endl;
    cout << "weird_function_with_local_class(-3, 12) = "
         << weird_function_with_local_class(-3, 12) << endl;
}