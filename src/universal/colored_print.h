// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-06-02T13:59:49Z as a part of PPaPUCpp_Stroustrup
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#ifndef PPAPUCPP_STROUSTRUP_COLORED_PRINT_H
#define PPAPUCPP_STROUSTRUP_COLORED_PRINT_H

namespace colored_print {
    const std::string bold_blue("\033[1;34m");
    const std::string bold_red("\033[1;31m");
    const std::string bold_cyan("\033[1;36m");
    const std::string bold_green("\033[1;32m");
    const std::string bold_yellow("\033[1;33m");

    const std::string reset("\033[0;0m");
}

#endif //PPAPUCPP_STROUSTRUP_COLORED_PRINT_H
