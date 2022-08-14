#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(EXPATDLL_LIB)
#  define EXPATDLL_EXPORT Q_DECL_EXPORT
# else
#  define EXPATDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define EXPATDLL_EXPORT
#endif
