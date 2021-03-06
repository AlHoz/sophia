#ifndef SS_INJECTION_H_
#define SS_INJECTION_H_

/*
 * sophia database
 * sphia.org
 *
 * Copyright (c) Dmitry Simonenko
 * BSD License
*/

typedef struct ssinjection ssinjection;

#define SS_INJECTION_SD_BUILD_0      0
#define SS_INJECTION_SI_COMPACTION_0 1
#define SS_INJECTION_SI_COMPACTION_1 2
#define SS_INJECTION_SI_COMPACTION_2 3
#define SS_INJECTION_SI_COMPACTION_3 4
#define SS_INJECTION_SI_COMPACTION_4 5
#define SS_INJECTION_SI_RECOVER_0    6

struct ssinjection {
	uint32_t e[11];
	uint32_t oom;
	uint32_t io;
};

#ifdef SS_INJECTION_ENABLE
	#define SS_INJECTION(E, ID, X) \
	if ((E)->e[(ID)]) { \
		X; \
	} else {}
#else
	#define SS_INJECTION(E, ID, X)
#endif

#endif
