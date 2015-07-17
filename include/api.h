#ifndef _API_H__
#define	_API_H__

extern "C"{
	
#include <stdio.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>
#include <sys/time.h>
#include "flite.h"
#include "flite_version.h"
#include "flite_voice_lang_list.h"

void makeWAV(int argc, char **argv);	

}

#endif