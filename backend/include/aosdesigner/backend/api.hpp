#ifndef HGUARD_AOSDESIGNER_BACKEND_API_H__
#define HGUARD_AOSDESIGNER_BACKEND_API_H__

#include <utilcpp/moduleapi.hpp>
#ifdef AOSDESIGNER_BACKEND_EXPORT
#	define AOSD_BACKEND_API	UCX_MODULE_API_EXPORT
#else
#	define AOSD_BACKEND_API	UCX_MODULE_API_IMPORT
#endif

#endif
