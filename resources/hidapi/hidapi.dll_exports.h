#ifndef HIDAPI_EXPORTS_H
#define HIDAPI_EXPORTS_H
#ifdef __cplusplus
extern "C" {
#endif

// RVA 0x00002260
extern void _hid_close@4(void);
// RVA 0x000018A0
extern void _hid_enumerate@8(void);
// RVA 0x000023C0
extern void _hid_error@4(void);
// RVA 0x00001300
extern void _hid_exit@0(void);
// RVA 0x00001B00
extern void _hid_free_enumeration@4(void);
// RVA 0x00002140
extern void _hid_get_feature_report@12(void);
// RVA 0x00002380
extern void _hid_get_indexed_string@16(void);
// RVA 0x000021D0
extern void _hid_get_input_report@12(void);
// RVA 0x000022C0
extern void _hid_get_manufacturer_string@12(void);
// RVA 0x00002300
extern void _hid_get_product_string@12(void);
// RVA 0x00002340
extern void _hid_get_serial_number_string@12(void);
// RVA 0x000012A0
extern void _hid_init@0(void);
// RVA 0x00001B50
extern void _hid_open@12(void);
// RVA 0x00001C20
extern void _hid_open_path@4(void);
// RVA 0x00002080
extern void _hid_read@12(void);
// RVA 0x00001F60
extern void _hid_read_timeout@16(void);
// RVA 0x000020C0
extern void _hid_send_feature_report@12(void);
// RVA 0x000020A0
extern void _hid_set_nonblocking@8(void);
// RVA 0x00001280
extern void _hid_version@0(void);
// RVA 0x00001290
extern void _hid_version_str@0(void);
// RVA 0x00001E70
extern void _hid_write@12(void);

#ifdef __cplusplus
}
#endif
#endif
