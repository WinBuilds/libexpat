#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(EXPAT_LIB)
#  define EXPAT_EXPORT Q_DECL_EXPORT
# else
#  define EXPAT_EXPORT Q_DECL_IMPORT
# endif
#else
# define EXPAT_EXPORT
#endif
