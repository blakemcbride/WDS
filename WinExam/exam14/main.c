
#include "dynwin.h"
#include "generics.h"
#include "resource.h"

static	long	file_report(object wind, unsigned id);
static	long	file_exit(object wind, unsigned id);

int	start()
{
	object	win;
	char	title[80];

	sprintf(title, "My Test Application - %d", 8*(int)sizeof(char *));
	win = vNew(MainWindow, title);

	mLoadIcon(win, ALGOCORP_ICON);

	mLoadMenu(win, IDR_MENU1);
	mAssociate(win, ID_FILE_REPORT, file_report);
	mAssociate(win, ID_FILE_EXIT, file_exit);

	return gProcessMessages(win);
}

static	void	report_output(object pntr)
{
	if (!gTextOut(pntr, 5, 0, "Default Font"))
		return;
	gLoadFont(pntr, "Arial", 40);
	if (!gTextOut(pntr, 15, 0, "Arial 40"))
		return;
	gLoadFont(pntr, "Courier New", 50);
	if (!gTextOut(pntr, 25, 0, "Courier New 50"))
		return;
	gLoadFont(pntr, "MS Sans Serif", 60);
	if (!gTextOut(pntr, 35, 0, "MS Sans Serif 60"))
		return;
	gLoadFont(pntr, "Times New Roman", 30);
	if (!gTextOut(pntr, 45, 0, "Times New Roman 30"))
		return;
	gLoadFont(pntr, "Times New Roman", 50);
	if (!gTextOut(pntr, 55, 0, "Times New Roman 50"))
		return;
}

static	long	file_report(object wind, unsigned id)
{
	object	pntr;

	pntr = gOpenDefault(Printer, wind, "My Test Output");
	if (!pntr)
		return 0L;

	report_output(pntr);

	gDispose(pntr);

	return 0L;
}

static	long	file_exit(object wind, unsigned id)
{
	gQuitApplication(Application, 0);
	return 0L;
}
