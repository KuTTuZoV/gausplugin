#ifndef GAUS_GLOBAL_H
#define GAUS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GAUS_LIBRARY)
#  define GAUS_EXPORT Q_DECL_EXPORT
#else
#  define GAUS_EXPORT Q_DECL_IMPORT
#endif

#endif // GAUS_GLOBAL_H
