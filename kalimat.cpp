#include "kalimat.h"

kalimat::kalimat()
{

}

void kalimat::kata()
{

    std::cin>>str1;
    std::cin>>str2;

    str1 = str1 + str2;

    std::cout << str1;
}
