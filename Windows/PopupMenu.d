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




#include "logfile.h"
#include "hdlcache.h"

defclass  PopupMenu : Menu  {
	iTopmenu;
};


private	imeth	pInitInstance(object self, object topmenu)
{
	iTopmenu = topmenu;
	return self;
}

cvmeth	vNew(topmenu)
{
	return pInitInstance(vNew(super, CreateMenu()), topmenu);
}

imeth	object	gDispose, gDeepDispose ()
{
	return gDispose(super);
}

imeth	int	gAddMenuOption(char *title, void (*fun)())
{
	int	count = gNextID(iTopmenu);

	AppendMenu(gHandle(self), MF_STRING, count, title);
	gAssociate(gTopMenu(iTopmenu), count, fun);
	return count;
}

imeth	gAddPopupMenu(char *title, menu)
{
	ChkArg(menu, 2);
	AppendMenu(gHandle(self), MF_POPUP, (INT_PTR) gHandle(menu), title);
	return self;
}

imeth	gAddSeparator()
{
	AppendMenu(gHandle(self), MF_SEPARATOR, 0, 0);
	return self;
}

/*  the return type of ofun is only used to be consistant  */

imeth	ofun	gMenuFunction(int c)
{
	return (ofun) gMenuFunction(iTopmenu, c);
}

imeth	gTopMenu()
{
	return gTopMenu(iTopmenu);
}


imeth	int	gNextID()
{
	return gNextID(iTopmenu);
}






