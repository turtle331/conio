// conio.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "conio.h"
int keygothit();

int main()
{
	while (true) {
		if (!(_kbhit )) {
			printf("Key got hit!");
			getchar;
		}
	}

    return 0;
}

int keygothit() {
	return _kbhit();
}