/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedunwindTYPES_H_
#define __wrappedunwindTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int64_t (*iFp_t)(void*);
typedef int64_t (*iFpp_t)(void*, void*);
typedef int64_t (*iFpip_t)(void*, int64_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(_ULx86_64_step, iFp_t) \
	GO(_ULx86_64_get_proc_info, iFpp_t) \
	GO(_ULx86_64_init_local, iFpp_t) \
	GO(_ULx86_64_get_reg, iFpip_t)

#endif // __wrappedunwindTYPES_H_
