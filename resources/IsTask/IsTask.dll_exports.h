#ifndef ISTASK_EXPORTS_H
#define ISTASK_EXPORTS_H
#ifdef __cplusplus
extern "C" {
#endif

// RVA 0x0000CB94
extern void ExecConsoleAppX(void);
// RVA 0x0000CF5C
extern void KillTask(void);
// RVA 0x0000CE3C
extern void RunTask(void);
// RVA 0x0000D1B4
extern void SerialNumberDisk(void);
// RVA 0x0000D604
extern void SerialNumberHDD(void);

#ifdef __cplusplus
}
#endif
#endif
