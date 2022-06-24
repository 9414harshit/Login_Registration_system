#ifndef PASSWORD_H
#define PASSWORD_H

#include<iostream>
#include <conio.h>
enum IN {

	// 13 is ASCII for carriage
	// return
	IN_BACK = 8,
	IN_RET = 13

};
std::string takePasswdFromUser();
#endif
