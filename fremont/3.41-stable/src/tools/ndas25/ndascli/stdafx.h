#if 0

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <stdio.h>
#include <tchar.h>

#endif

// TODO: reference additional headers your program requires here


// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__38D6527C_633F_4D8C_A5CC_2E1424926FF2__INCLUDED_)
#define AFX_STDAFX_H__38D6527C_633F_4D8C_A5CC_2E1424926FF2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define _CRT_SECURE_NO_DEPRECATE

//#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <WinSock2.h> // Prevent windows.h from include winsock.h
#include <windows.h>
#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <time.h>
#include <tchar.h>
#include <winioctl.h>

#include "..\inc\lsprotospec.h"
#include "..\inc\lsprotoidespec.h"
//#include "LanScsi.h"
#include "..\inc\BinParams.h"
#include "..\inc\Hash.h"
#include "..\inc\hdreg.h"
#include "..\inc\socketLpx.h"

#include "ndascli.h"

// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__38D6527C_633F_4D8C_A5CC_2E1424926FF2__INCLUDED_)