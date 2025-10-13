#ifndef HOOK_EXPORTS_H
#define HOOK_EXPORTS_H
#ifdef __cplusplus
extern "C" {
#endif

// RVA 0x00002BB0
extern void ?hookproc@@YGJHIJ@Z(void);
// RVA 0x00002E60
extern void ?mousehookproc@@YGJHIJ@Z(void);
// RVA 0x00002520
extern void FWCodeToVK(void);
// RVA 0x00002680
extern void GetVKName(void);
// RVA 0x00002A60
extern void VKToFWCode(void);
// RVA 0x00002B70
extern void enablehook(void);
// RVA 0x00002B90
extern void enablemousehook(void);
// RVA 0x00002DC0
extern void installhook(void);
// RVA 0x00002E00
extern void installmousehook(void);
// RVA 0x00002E40
extern void mouseenable(void);
// RVA 0x00002FB0
extern void mousewheelenable(void);
// RVA 0x00002FD0
extern void removehook(void);
// RVA 0x00002FF0
extern void removemousehook(void);

#ifdef __cplusplus
}
#endif
#endif
