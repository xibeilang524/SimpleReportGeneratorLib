#ifndef SIMPLEREPORTGENERATOR_GLOBAL_H
#define SIMPLEREPORTGENERATOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SIMPLEREPORTGENERATOR_LIBRARY)
#  define SIMPLEREPORTGENERATORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SIMPLEREPORTGENERATORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SIMPLEREPORTGENERATOR_GLOBAL_H
