#ifndef __CONFIG_COMPAT_H__
#define __CONFIG_COMPAT_H__

#include <linux/mmdebug.h>

#undef CONFIG_VIDEO_DEV
#undef CONFIG_VIDEO_DEV_MODULE
#define CONFIG_VIDEO_DEV_MODULE 1
#undef CONFIG_DVB_CORE
#undef CONFIG_DVB_CORE_MODULE
#define CONFIG_DVB_CORE_MODULE 1
#undef CONFIG_DVB_TDA18272
#undef CONFIG_DVB_TDA18272_MODULE
#define CONFIG_DVB_TDA18272_MODULE 1
#undef CONFIG_DVB_DYNAMIC_MINORS
#undef CONFIG_DVB_DYNAMIC_MINORS_MODULE
#define CONFIG_DVB_DYNAMIC_MINORS 1
#undef CONFIG_DVB_CAPTURE_DRIVERS
#undef CONFIG_DVB_CAPTURE_DRIVERS_MODULE
#define CONFIG_DVB_CAPTURE_DRIVERS 1
#undef CONFIG_SND_BT87X
#undef CONFIG_SND_BT87X_MODULE
#define CONFIG_SND_BT87X_MODULE 1
#undef CONFIG_DVB_FE_CUSTOMISE
#undef CONFIG_DVB_FE_CUSTOMISE_MODULE
#define CONFIG_DVB_FE_CUSTOMISE 1
#undef CONFIG_DVB_A8290
#undef CONFIG_DVB_A8290_MODULE
#define CONFIG_DVB_A8290_MODULE 1
#undef CONFIG_MEDIA_SUPPORT
#undef CONFIG_MEDIA_SUPPORT_MODULE
#define CONFIG_MEDIA_SUPPORT_MODULE 1
#undef CONFIG_DVB_CXD2820R
#undef CONFIG_DVB_CXD2820R_MODULE
#define CONFIG_DVB_CXD2820R_MODULE 1
#undef CONFIG_VIDEOBUF_VMALLOC
#undef CONFIG_VIDEOBUF_VMALLOC_MODULE
#define CONFIG_VIDEOBUF_VMALLOC_MODULE 1
#undef CONFIG_VIDEO_V4L1_COMPAT
#undef CONFIG_VIDEO_V4L1_COMPAT_MODULE
#define CONFIG_VIDEO_V4L1_COMPAT 1
#undef CONFIG_SND_FM801_TEA575X
#undef CONFIG_SND_FM801_TEA575X_MODULE
#undef CONFIG_DVB_LNBP21
#undef CONFIG_DVB_LNBP21_MODULE
#define CONFIG_DVB_LNBP21_MODULE 1
#undef CONFIG_SAA7231_CORE
#undef CONFIG_SAA7231_CORE_MODULE
#define CONFIG_SAA7231_CORE_MODULE 1
#undef CONFIG_VIDEOBUF_DMA_CONTIG
#undef CONFIG_VIDEOBUF_DMA_CONTIG_MODULE
#define CONFIG_VIDEOBUF_DMA_CONTIG_MODULE 1
#undef CONFIG_MEDIA_ATTACH
#undef CONFIG_MEDIA_ATTACH_MODULE
#define CONFIG_MEDIA_ATTACH 1
#undef CONFIG_VIDEOBUF2_DMA_SG
#undef CONFIG_VIDEOBUF2_DMA_SG_MODULE
#define CONFIG_VIDEOBUF2_DMA_SG_MODULE 1
#undef CONFIG_DVB_CXD2861
#undef CONFIG_DVB_CXD2861_MODULE
#define CONFIG_DVB_CXD2861_MODULE 1
#undef CONFIG_VIDEOBUF2_CORE
#undef CONFIG_VIDEOBUF2_CORE_MODULE
#define CONFIG_VIDEOBUF2_CORE_MODULE 1
#undef CONFIG_VIDEO_PCI_SKELETON
#undef CONFIG_VIDEO_PCI_SKELETON_MODULE
#undef CONFIG_DVB_CXD2817
#undef CONFIG_DVB_CXD2817_MODULE
#define CONFIG_DVB_CXD2817_MODULE 1
#undef CONFIG_VIDEOBUF_DVB
#undef CONFIG_VIDEOBUF_DVB_MODULE
#define CONFIG_VIDEOBUF_DVB_MODULE 1
#undef CONFIG_VIDEO_ALLOW_V4L1
#undef CONFIG_VIDEO_ALLOW_V4L1_MODULE
#define CONFIG_VIDEO_ALLOW_V4L1 1
#undef CONFIG_VIDEO_V4L2_COMMON
#undef CONFIG_VIDEO_V4L2_COMMON_MODULE
#define CONFIG_VIDEO_V4L2_COMMON_MODULE 1
#undef CONFIG_VIDEO_ADV_DEBUG
#undef CONFIG_VIDEO_ADV_DEBUG_MODULE
#define CONFIG_VIDEO_ADV_DEBUG 1
#undef CONFIG_VIDEOBUF2_DMA_CONTIG
#undef CONFIG_VIDEOBUF2_DMA_CONTIG_MODULE
#define CONFIG_VIDEOBUF2_DMA_CONTIG_MODULE 1
#undef CONFIG_MEDIA_TUNER_SIMPLE
#undef CONFIG_MEDIA_TUNER_SIMPLE_MODULE
#define CONFIG_MEDIA_TUNER_SIMPLE_MODULE 1
#undef CONFIG_VIDEOBUF_DMA_SG
#undef CONFIG_VIDEOBUF_DMA_SG_MODULE
#define CONFIG_VIDEOBUF_DMA_SG_MODULE 1
#undef CONFIG_DVB_CXD2850
#undef CONFIG_DVB_CXD2850_MODULE
#define CONFIG_DVB_CXD2850_MODULE 1
#undef CONFIG_DVB_CXD2843
#undef CONFIG_DVB_CXD2843_MODULE
#define CONFIG_DVB_CXD2843_MODULE 1
#undef CONFIG_SND_BT87X_OVERCLOCK
#undef CONFIG_SND_BT87X_OVERCLOCK_MODULE
#define CONFIG_SND_BT87X_OVERCLOCK 1
#undef CONFIG_VIDEOBUF_GEN
#undef CONFIG_VIDEOBUF_GEN_MODULE
#define CONFIG_VIDEOBUF_GEN_MODULE 1
#undef CONFIG_DVB_S5H1411
#undef CONFIG_DVB_S5H1411_MODULE
#define CONFIG_DVB_S5H1411_MODULE 1
#undef CONFIG_DVB_CXD2834
#undef CONFIG_DVB_CXD2834_MODULE
#define CONFIG_DVB_CXD2834_MODULE 1
#undef CONFIG_VIDEOBUF2_VMALLOC
#undef CONFIG_VIDEOBUF2_VMALLOC_MODULE
#define CONFIG_VIDEOBUF2_VMALLOC_MODULE 1
#undef CONFIG_DVB_STV090x
#undef CONFIG_DVB_STV090x_MODULE
#define CONFIG_DVB_STV090x_MODULE 1
#undef CONFIG_MEDIA_TUNER_TDA18271
#undef CONFIG_MEDIA_TUNER_TDA18271_MODULE
#define CONFIG_MEDIA_TUNER_TDA18271_MODULE 1
#undef CONFIG_DVB_TDA10048
#undef CONFIG_DVB_TDA10048_MODULE
#define CONFIG_DVB_TDA10048_MODULE 1
#undef CONFIG_VIDEO_FIXED_MINOR_RANGES
#undef CONFIG_VIDEO_FIXED_MINOR_RANGES_MODULE
#undef CONFIG_VIDEOBUF2_DVB
#undef CONFIG_VIDEOBUF2_DVB_MODULE
#define CONFIG_VIDEOBUF2_DVB_MODULE 1
#undef CONFIG_MEDIA_TUNER
#undef CONFIG_MEDIA_TUNER_MODULE
#define CONFIG_MEDIA_TUNER_MODULE 1
#undef CONFIG_SAA7231_DRV
#undef CONFIG_SAA7231_DRV_MODULE
#define CONFIG_SAA7231_DRV_MODULE 1
#undef CONFIG_DVB_DUMMY_FE
#undef CONFIG_DVB_DUMMY_FE_MODULE
#define CONFIG_DVB_DUMMY_FE_MODULE 1
#undef CONFIG_VIDEO_KERNEL_VERSION
#undef CONFIG_VIDEO_KERNEL_VERSION_MODULE
#undef CONFIG_VIDEO_TUNER
#undef CONFIG_VIDEO_TUNER_MODULE
#define CONFIG_VIDEO_TUNER_MODULE 1
#undef CONFIG_DVB_STV6110x
#undef CONFIG_DVB_STV6110x_MODULE
#define CONFIG_DVB_STV6110x_MODULE 1
#undef CONFIG_VIDEO_MEDIA
#undef CONFIG_VIDEO_MEDIA_MODULE
#define CONFIG_VIDEO_MEDIA_MODULE 1
#undef CONFIG_MEDIA_TUNER_CUSTOMISE
#undef CONFIG_MEDIA_TUNER_CUSTOMISE_MODULE
#define CONFIG_MEDIA_TUNER_CUSTOMISE 1
#undef CONFIG_VIDEO_V4L2
#undef CONFIG_VIDEO_V4L2_MODULE
#define CONFIG_VIDEO_V4L2_MODULE 1
#undef CONFIG_VIDEOBUF2_MEMOPS
#undef CONFIG_VIDEOBUF2_MEMOPS_MODULE
#define CONFIG_VIDEOBUF2_MEMOPS_MODULE 1
#undef CONFIG_V4L2_MEM2MEM_DEV
#undef CONFIG_V4L2_MEM2MEM_DEV_MODULE
#define CONFIG_V4L2_MEM2MEM_DEV_MODULE 1

#define NEED_USB_ENDPOINT_TYPE 1

#endif
