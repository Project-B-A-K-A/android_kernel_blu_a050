#ifndef __MT65XX_LCM_LIST_H__
#define __MT65XX_LCM_LIST_H__

#include <lcm_drv.h>

#if defined(MTK_LCM_DEVICE_TREE_SUPPORT)
extern LCM_DRIVER lcm_common_drv;
#else
extern LCM_DRIVER ili9881c_dsi_vdo_3lanes_tcl_lcm_drv;
extern LCM_DRIVER ili9881c_dsi_vdo_3lanes_dj_lcm_drv;
extern LCM_DRIVER ili9881c_hd_dsi_vdo_3lanes_dj_lcm_drv;
extern LCM_DRIVER ili9881c_hd_dsi_vdo_3lanes_txd_lcm_drv;
extern LCM_DRIVER hx8394f_hd_dsi_vdo_3lanes_txd_lcm_drv;
extern LCM_DRIVER hx8394f_hd4200_dsi_vdo_3lanes_txd_lcm_drv;
extern LCM_DRIVER ili9881c_hd_dsi_vdo_3lanes_zgd_lcm_drv;
extern LCM_DRIVER ili9806e_fwvga_dsi_vdo_tcl_lcm_drv;
extern LCM_DRIVER hx8379c_fwvga_dsi_vdo_txd_lcm_drv;
extern LCM_DRIVER ili9806e_fwvga_dsi_vdo_zgd_lcm_drv;
extern LCM_DRIVER fl10802_fwvga_dsi_vdo_txd_lcm_drv;
extern LCM_DRIVER jd9161_fwvga_dsi_vdo_dj_lcm_drv;
extern LCM_DRIVER ili9881c_hd4200_dsi_vdo_3lanes_tcl_lcm_drv;
extern LCM_DRIVER ili9881c_hd4200_dsi_vdo_3lanes_dj_lcm_drv;
extern LCM_DRIVER r69339_hd720_dsi_vdo_sharp_lcm_drv;
extern LCM_DRIVER ili9806e_wvga_dsi_vdo_lx_boe40_lcm_drv;
extern LCM_DRIVER nt35512_wvga_dsi_vdo_ctc_lcm_drv;
extern LCM_DRIVER ili9806e_wvga_dsi_vdo_hlt_boe40_lcm_drv;
extern LCM_DRIVER jd9161_wvga_dsi_vdo_lx_boe40_lcm_drv;
extern LCM_DRIVER jd9161_wvga_dsi_vdo_hlt_boe40_lcm_drv;
#endif

#ifdef BUILD_LK
extern void mdelay(unsigned long msec);
#endif

#endif
