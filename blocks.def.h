//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/	   /*Update Interval*/	/*Update Signal*/
	{"",       "sb-disk",	   0,                   0},
	{"",       "sb-memory",    10,                  14},
	{"",       "sb-internet",  5,                   4},
	{"",       "sb-volume",    1,                   1},
	{"",       "sb-battery",   5,                   3},
	{"",       "sb-clock",     60,                  1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
