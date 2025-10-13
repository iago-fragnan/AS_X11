#ifndef HIDDRIVER_2_EXPORTS_H
#define HIDDRIVER_2_EXPORTS_H
#ifdef __cplusplus
extern "C" {
#endif

// RVA 0x00001EE0
extern void Close_DevMonitor(void);
// RVA 0x00001EF0
extern void Close_FeatureDevice(void);
// RVA 0x00001F20
extern void GetFeature(void);
// RVA 0x00001F50
extern void Hid_Read(void);
// RVA 0x00002060
extern void Hid_Write(void);
// RVA 0x00002150
extern void Open_DevMonitor(void);
// RVA 0x00002320
extern void Open_FeatureDevice(void);
// RVA 0x00002340
extern void SetFeature(void);
// RVA 0x00002370
extern void Set_VIDPID(void);

#ifdef __cplusplus
}
#endif
#endif
