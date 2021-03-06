#ifndef __VBOARD__
#define __VBOARD__

extern uint8_t __ramvectors__[];


#if !defined(CORTEX_FLASH_VTABLE)
#define CORTEX_FLASH_VTABLE 0x8000000
#endif

#define CORTEX_VTOR_INIT ((uint32_t)(&__ramvectors__))
#define CORTEX_VECTOR_COUNT 91

#define CORTEX_ENABLE_WFI_IDLE          TRUE
#define CORTEX_SIMPLIFIED_PRIORITY      FALSE

#ifndef CORTEX_USE_FPU
#define CORTEX_USE_FPU                  TRUE
#endif

#define PORT_PRIO_BITS 4
#define PORT_PRIO_MASK(n) ((n) << (8 - PORT_PRIO_BITS))


#define VHAL_ADC_PRESCALER 4
#define VBOARD_SLEEP_MICRO_COMPENSATION 15

#define CDC_USB_VERSION 0x0200
#define CDC_ID_VENDOR 0x0483
#define CDC_ID_PRODUCT 0x5740

#define CDC_VENDOR_STRING {'S', 0, 'T', 0, 'M', 0}
#define CDC_VENDOR_STRING_LEN 6

#define CDC_DESC_STRING \
{'D', 0, 'i', 0, 's', 0, 'c', 0, 'o', 0, 'v', 0, 'e', 0, 'r', 0, 'y', 0,  ' ', 0,\
 'F', 0, '4', 0, '0', 0, '7', 0, 'V', 0, 'G', 0}

#define CDC_DESC_STRING_LEN 32

#define CDC_USE_OTG_FS 1
#define CDC_PACK_SIZE 64
#define CDC_PUMP_THREAD_SIZE 256

#endif