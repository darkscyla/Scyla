#pragma once

#ifdef SC_PLATFORM_WINDOWS
	#ifdef SC_BUILD_DLL
		#define SCYLA_API __declspec(dllexport)
	#else
		#define SCYLA_API __declspec(dllimport)
	#endif
#else
	#error Scyla only supports Windows
#endif