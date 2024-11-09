
# Windows Development System

This Windows Development System (WDS) is a set of Dynace
(https://github.com/blakemcbride/Dynace) classes that makes the
development of Windows GUI applications extremely easy.  It also works
on Linux & macOS through the WINE Win32 library.  It has been used in
commercial applications for nearly 20 years.

## WDS includes:

* Win32 GUI development system (portable through WINE)
* interfaces with Java, ODBC, OLE
* SQL interface / class library
* 250 pages of documentation  [https://blakemcbride.github.io/WDS/manual/WDS.pdf](https://blakemcbride.github.io/WDS/manual/WDS.pdf)
* tutorial

Source code for this system is at:  [https://github.com/blakemcbride/WDS](https://github.com/blakemcbride/WDS)

Build instructions are at:  [docs/BUILD.txt](https://github.com/blakemcbride/WDS/blob/main/docs/BUILD.txt)



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

## Getting started

See [docs/ORIENT.txt](https://github.com/blakemcbride/WDS/blob/main/docs/ORIENT.txt)

This system was written by Blake McBride


