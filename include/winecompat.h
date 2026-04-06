/*
  Wine/POSIX compatibility shims for MSVC-specific C runtime functions.
  Auto-included via compiler flags when building with WINE=1.
*/

#ifndef _WINECOMPAT_H
#define _WINECOMPAT_H

#ifdef __WINE__

#include <unistd.h>
#include <strings.h>
#include <sys/stat.h>
#include <sys/file.h>
#include <ctype.h>
#include <fcntl.h>
#include <limits.h>
#include <math.h>
#include <wchar.h>

/* String comparison */
#define _stricmp	strcasecmp
#define stricmp		strcasecmp
#define strcmpi		strcasecmp
#define _strnicmp	strncasecmp
#define strnicmp	strncasecmp

/* File I/O */
#define _fileno		fileno
#define _getcwd		getcwd
#define _chdir		chdir
#define _access		access
#define _stat		stat
#define _fstat		fstat
#define _unlink		unlink
#define _chsize		ftruncate
#define _commit(fd)	fsync(fd)
#define _isnan		isnan

/* Drive/directory functions */
#define _chdrive(d)	(0)

/* Path and open flags */
#define _MAX_PATH	PATH_MAX
#define _O_RDONLY	O_RDONLY
#define _O_BINARY	0
#define O_BINARY	0
#define _S_IREAD	S_IRUSR
#define _S_IWRITE	S_IWUSR

#define strlwr		_strlwr
#define strupr		_strupr

/* String case conversion */
static inline char *_strlwr(char *s)
{
	char *p = s;
	while (*p) { *p = tolower((unsigned char)*p); p++; }
	return s;
}

static inline char *_strupr(char *s)
{
	char *p = s;
	while (*p) { *p = toupper((unsigned char)*p); p++; }
	return s;
}

/* File length */
static inline long _filelength(int fd)
{
	struct stat _sb;
	if (fstat(fd, &_sb) == -1)
		return -1;
	return _sb.st_size;
}

/* File locking */
#define _LK_LOCK	1
#define _LK_UNLCK	0
#ifndef EDEADLOCK
#define EDEADLOCK	EDEADLK
#endif
static inline int _locking(int fd, int mode, long nbytes)
{
	(void)nbytes;
	if (mode == _LK_LOCK)
		return flock(fd, LOCK_EX);
	else
		return flock(fd, LOCK_UN);
}

#endif /* __WINE__ */

#endif /* _WINECOMPAT_H */
