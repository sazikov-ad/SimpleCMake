#ifndef B_MACRO_H_
#define B_MACRO_H_

#ifdef __cplusplus
#define BEGIN_CDECL extern "C" {
#define END_CDECL }
#else
#define BEGIN_CDECL
#define END_CDECL
#endif

#endif // B_MACRO_H_
