
# Windows Development System
===============================

This Windows Development System (WDS) is a set of Dynace
(https://blakemcbride.github.io/Dynace) classes that makes the
development of Windows GUI applications extremely easy.  It also works
on Linux & macOS through the WINE Win32 library.  It has been used in
commercial applications for nearly 20 years.

In an ever-evolving technological landscape, APIs and environmental
dependencies continually undergo changes. While we have actively
maintained Dynace to adapt to these shifts, WDS has not received the
same level of upkeep. As a result, WDS will require targeted
maintenance to ensure compatibility with contemporary systems.

Despite its current limitations, I wanted to make the WDS code
publicly accessible. Updates and improvements will be rolled out as
time permits to ensure compatibility with modern systems.

## WDS includes:

* Win32 GUI development system (portable through WINE)
* interfaces with Java, ODBC, OLE
* SQL interface / class library
* 250 pages of documentation  (https://blakemcbride.github.io/WDS/manual/WDS.pdf)
* tutorial

The main home for this system is:  https://github.com/blakemcbride/WDS

Build instructions are at:  docs/BUILD.txt



## A small example

The following will give you a small taste of how easy WDS makes the
development of GUI applications:

### A complete "Hello World" Windows application

```
#include "generics.h"

int	start()
{
	object	win;

	win = vNew(MainWindow, "My Test Application");

	vPrintf(win, "Hello, World!\n");

	return gProcessMessages(win);
}
```
### Add a menu

`resources.h` is created by your resource editor that comes with Windows.

```
#include "generics.h"
#include "resource.h"

static	long	file_message(object wind, unsigned id);
static	long	file_exit(object wind, unsigned id);

int	start()
{
	object	win;

	win = vNew(MainWindow, "My Test Application");

	mLoadMenu(win, IDR_MENU1);
	mAssociate(win, ID_FILE_MESSAGE, file_message);
	mAssociate(win, ID_FILE_EXIT, file_exit);

	return gProcessMessages(win);
}

static	long	file_message(object wind, unsigned id)
{
	gMessage(wind, "File Message");
	return 0L;
}

static	long	file_exit(object wind, unsigned id)
{
	gQuitApplication(Application, 0);
	return 0L;
}
```
### Add a dialog
```
#include "generics.h"
#include "resource.h"

static	long	file_message(object wind, unsigned id);
static	long	file_dialog(object wind, unsigned id);
static	long	file_exit(object wind, unsigned id);

int	start()
{
	object	win;

	win = vNew(MainWindow, "My Test Application");

	mLoadMenu(win, IDR_MENU1);
	mAssociate(win, ID_FILE_MESSAGE, file_message);
	mAssociate(win, ID_FILE_DIALOG, file_dialog);
	mAssociate(win, ID_FILE_EXIT, file_exit);

	return gProcessMessages(win);
}

static	long	file_message(object wind, unsigned id)
{
	gMessage(wind, "File Message");
	return 0L;
}

static	long	file_dialog(object wind, unsigned id)
{
	object	dlg;
	int	r;
	
	dlg = mNewDialog(ModalDialog, DL1, wind);

	r = gPerform(dlg);

	gDispose(dlg);

	return 0L;
}

static	long	file_exit(object wind, unsigned id)
{
	gQuitApplication(Application, 0);
	return 0L;
}
```
