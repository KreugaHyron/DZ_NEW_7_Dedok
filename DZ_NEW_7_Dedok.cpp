#include <iostream> 
#include "function.h"
#define CHAR
//я немного не понял почему выскакивает ошибка LNK2005 и LNK2019(ссылка на неразрешённый символ),если можно объясните пожалуйста
int main() {
#define INTEGER
    main();
#undef INTEGER

#define CHAR
    main();
#undef CHAR

#define DOUBLE
    main();
#undef DOUBLE
}