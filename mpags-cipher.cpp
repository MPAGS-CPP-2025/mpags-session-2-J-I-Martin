#include <iostream>
#include <string>

int main()
{
        //This is a comment
        /* This is a multiline
        comment*/
        int a{5};
        double b{1.22};

        int c;
        c = 2*b;

        std::cout << a*2 << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;

        const double d{5};
        std::cout << d <<std::endl;

        int e{4};
        ++e; // e and d are 5 and 5.0

        std::string msg {"Hello again!"};
        std::cout << msg << "\n";

        double f{e*d};
        std::cout << f << std::endl;

        double g{d/(e-1)};
        double h{e/(e-1)}; // Wrong as we have int/int so returns an int then casts to double after truncation
        std::cout << g << std::endl;
        std::cout << h << std::endl;

        std::string mystring{"Hello once more"};
        char s{mystring[0]};
        std::cout << s << std::endl;

}