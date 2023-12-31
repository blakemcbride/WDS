/*
  Copyright (c) 1996 Blake McBride
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are
  met:

  1. Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer.

  2. Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <dynwin.h>

#include "logfile.h"
#include "hdlcache.h"

defclass  ExternalMenu : Menu;


cmeth	gLoadStr : LoadStr (char *name)
{
	HMENU	h;

	h = LoadMenu(gInstance(Application), name);
	if (!h)
		return NULL;

	return vNew(super, h);
}

cmeth	gLoadResourceFromFile(char *file, unsigned id)
{
#ifdef	WIN32
	HMENU	h = ResourceLoadMenu(file, MAKEINTRESOURCE(id));
	object	obj = NULL;
	
	if (h) {
		obj =  vNew(super, h);
		gSetMenuFileName(obj, file);
		return obj;
	} else
#endif
		vError(self, "gLoadResourceFromFile: Can't find resource %u in file %s", id, file);
	return NULL;
}

cmeth	gLoad(unsigned id)
{
	return LoadStr(self, (char *) MAKEINTRESOURCE(id));
}






