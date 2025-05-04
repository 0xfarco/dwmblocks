//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	/* {"",	"db-mailbox",	180,	12}, */
	/* {"",	"db-news",	0,	6}, */
	{"",	"db-memory",	10,	14},
	{"",	"db-cpu",		10,	18},
	{"",	"db-brightness",	0,	11},
	{"",	"db-volume",	0,	10},
	{"",	"db-battery",	5,	3},
	{"",	"db-internet",	5,	4},
	{"",	"db-clock",	60,	1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ::  ";
