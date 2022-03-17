#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int main() {

	
    for( int j = 1; j <= 6; j++ )
        for( int i = j-1 ; i <= j ; i++ )
              cout << i << "I" << j <<"|" ;

    getch();
}
