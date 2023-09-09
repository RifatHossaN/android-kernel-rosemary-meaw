/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __MPU_PLATFORM_H__
#define __MPU_PLATFORM_H__

enum {
	MT6768_M7_AXI_MST_AUDIO,
	MT6768_M5_AXI_MST_LARB0_MDP_RDMA0,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_AVC_MV_EXT,
	MT6768_M7_AXI_MST_DMA_EXT,
	MT6768_M2_AXI_MST_LARB3_UFEO,
	MT6768_M7_AXI_MST_THERM,
	MT6768_M4_AXI_MST_BR_DMA,
	MT6768_M5_AXI_MST_LARB2_RSC_RDMA0,
	MT6768_M2_AXI_MST_LARB2_IMG3O,
	MT6768_M7_AXI_MST_CONNSYS_WIFI_PDMA,
	MT6768_M4_AXI_MST_PPPHA,
	MT6768_M2_AXI_MST_LARB3_IMGO,
	MT6768_M5_AXI_MST_LARB2_RB,
	MT6768_M2_AXI_MST_LARB2_WR,
	MT6768_M2_AXI_MST_LARB2_RSC_WDMA,
	MT6768_M7_AXI_MST_CONNSYS_N9_MCU,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_AVC_MV_EXT,
	MT6768_M4_AXI_MST_TXCAL,
	MT6768_M7_AXI_MST_GCE_M,
	MT6768_M4_AXI_MST_DMA_WR,
	MT6768_M2_AXI_MST_LARB3_AAO,
	MT6768_M5_AXI_MST_LARB2_DPE_RDMA,
	MT6768_M4_AXI_MST_RXDFE_DMA,
	MT6768_M4_AXI_MST_DEBUG,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_MC_EXT,
	MT6768_M7_AXI_MST_NA,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_PRED_RD_EXT,
	MT6768_M5_AXI_MST_LARB3_SOC1,
	MT6768_M4_AXI_MST_MMU,
	MT6768_M7_AXI_MST_SSPM,
	MT6768_M7_AXI_MST_USB20,
	MT6768_M5_AXI_MST_LARB3_RSSO_A,
	MT6768_M2_AXI_MST_LARB3_AFO,
	MT6768_M4_AXI_MST_DCXO,
	MT6768_M1_AXI_MST_MP1,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_VLD2_EXT,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_PP_EXT,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_PPWRAP_EXT,
	MT6768_M7_AXI_MST_GPU,
	MT6768_M5_AXI_MST_LARB0_DISP_FAKE,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_PPWRAP_EXT,
	MT6768_M2_AXI_MST_LARB0_MDP_WDMA0,
	MT6768_M7_AXI_MST_SCP,
	MT6768_M7_AXI_MST_CONNSYS_RBIST_INTERNAL_CAPTURE,
	MT6768_M4_AXI_MST_TXBRP0,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_VLD2_EXT,
	MT6768_M4_AXI_MST_HRQ_WR1,
	MT6768_M5_AXI_MST_LARB2_IMGI,
	MT6768_M5_AXI_MST_LARB3_LSCI_0,
	MT6768_M7_AXI_MST_SPI1,
	MT6768_M2_AXI_MST_LARB2_DPE_WDMA,
	MT6768_M2_AXI_MST_LARB3_LSCI_1,
	MT6768_M2_AXI_MST_LARB3_SOC1,
	MT6768_M2_AXI_MST_LARB2_RSC_RDMA0,
	MT6768_M4_AXI_MST_QP,
	MT6768_M2_AXI_MST_LARB3_RSSO_B,
	MT6768_M2_AXI_MST_LARB0_DISP_OVL0,
	MT6768_M5_AXI_MST_LARB3_CCUG,
	MT6768_M4_AXI_MST_MRSG0,
	MT6768_M4_AXI_MST_HRQ_RD,
	MT6768_M7_AXI_MST_SPI3,
	MT6768_M4_AXI_MST_CNWDMA,
	MT6768_M2_AXI_MST_LARB3_CCUG,
	MT6768_M7_AXI_MST_MSDC0,
	MT6768_M5_AXI_MST_LARB3_RAWI_A,
	MT6768_M4_AXI_MST_IRDMA,
	MT6768_M5_AXI_MST_MM_IOMMU,
	MT6768_M5_AXI_MST_LARB2_RSC_WDMA,
	MT6768_M7_AXI_MST_PWM,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_PRED_WR_EXT,
	MT6768_M2_AXI_MST_LARB3_RAWI_B,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_PRED_RD_EXT,
	MT6768_M2_AXI_MST_LARB0_MDP_RDMA0,
	MT6768_M7_AXI_MST_MCUPM,
	MT6768_M5_AXI_MST_LARB3_CCUI,
	MT6768_M7_AXI_MST_SPI5,
	MT6768_M2_AXI_MST_LARB3_CCUI,
	MT6768_M3_AXI_MST_MD_MM,
	MT6768_M5_AXI_MST_LARB2_RP,
	MT6768_M2_AXI_MST_LARB2_IMGI,
	MT6768_M3_AXI_MST_USIP_1_I,
	MT6768_M5_AXI_MST_LARB2_LCEI,
	MT6768_M5_AXI_MST_LARB3_PDO,
	MT6768_M5_AXI_MST_LARB2_VIPI,
	MT6768_M3_AXI_MST_USIP_0_DNOCACHE,
	MT6768_M2_AXI_MST_LARB2_VIPI,
	MT6768_M4_AXI_MST_TPC,
	MT6768_M2_AXI_MST_LARB2_RB,
	MT6768_M7_AXI_MST_CQ_DMA,
	MT6768_M5_AXI_MST_CCU,
	MT6768_M5_AXI_MST_LARB2_IMG2O,
	MT6768_M7_AXI_MST_SPM,
	MT6768_M0_AXI_MST_MP0,
	MT6768_M4_AXI_MST_IPSEC,
	MT6768_M3_AXI_MST_USIP_1_DCACHE,
	MT6768_M5_AXI_MST_LARB3_CCUO,
	MT6768_M3_AXI_MST_USIP_0_I,
	MT6768_M2_AXI_MST_LARB3_CCUO,
	MT6768_M5_AXI_MST_LARB2_WR,
	MT6768_M4_AXI_MST_DMA_RD,
	MT6768_M4_AXI_MST_DBGSYS,
	MT6768_M5_AXI_MST_LARB0_MDP_WROT0,
	MT6768_M3_AXI_MST_USIP_0_DCACHE,
	MT6768_M5_AXI_MST_LARB3_RRZO,
	MT6768_M2_AXI_MST_LARB2_LCEI,
	MT6768_M6_AXI_MST_MFG_M0,
	MT6768_M7_AXI_MST_DX_CC,
	MT6768_M4_AXI_MST_GDMA,
	MT6768_M2_AXI_MST_LARB0_DISP_OVL0_2L,
	MT6768_M5_AXI_MST_LARB3_CACI,
	MT6768_M5_AXI_MST_LARB2_DPE_WDMA,
	MT6768_M2_AXI_MST_LARB2_DPE_RDMA,
	MT6768_M5_AXI_MST_LARB3_SOC0,
	MT6768_M4_AXI_MST_VTB,
	MT6768_M4_AXI_MST_DFE_DUMP,
	MT6768_M2_AXI_MST_LARB0_DISP_FAKE,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_VLD_EXT,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_MC_EXT,
	MT6768_M5_AXI_MST_LARB3_BPCI,
	MT6768_M4_AXI_MST_LOG_TOP_DSP,
	MT6768_M5_AXI_MST_LARB3_SOC2,
	MT6768_M2_AXI_MST_LARB3_BPCI,
	MT6768_M5_AXI_MST_LARB3_RSSO_B,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_PRED_WR_EXT,
	MT6768_M5_AXI_MST_LARB3_AAO,
	MT6768_M5_AXI_MST_LARB2_IMG3O,
	MT6768_M7_AXI_MST_DEBUGTOP,
	MT6768_M5_AXI_MST_LARB3_LSCO,
	MT6768_M4_AXI_MST_TBO,
	MT6768_M4_AXI_MST_LOG_TOP_MCU,
	MT6768_M2_AXI_MST_LARB3_RRZO,
	MT6768_M2_AXI_MST_LARB3_LSCO,
	MT6768_M7_AXI_MST_SPI0,
	MT6768_M2_AXI_MST_LARB3_CACI,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_PP_EXT,
	MT6768_M2_AXI_MST_LARB3_LSCI_0,
	MT6768_M4_AXI_MST_TXBRP1,
	MT6768_M2_AXI_MST_LARB3_SOC0,
	MT6768_M5_AXI_MST_LARB0_DISP_WDMA0,
	MT6768_M2_AXI_MST_LARB3_RSSO_A,
	MT6768_M2_AXI_MST_LARB2_IMG2O,
	MT6768_M4_AXI_MST_TRACE_TOP,
	MT6768_M5_AXI_MST_LARB3_LSCI_1,
	MT6768_M5_AXI_MST_LARB0_DISP_RDMA0,
	MT6768_M3_AXI_MST_USIP_1_DNOCACHE,
	MT6768_M7_AXI_MST_SPI2,
	MT6768_M5_AXI_MST_LARB3_AFO,
	MT6768_M4_AXI_MST_MCUSYS_DFD,
	MT6768_M4_AXI_MST_HRQ_WR,
	MT6768_M4_AXI_MST_HRQ_RD1,
	MT6768_M2_AXI_MST_LARB3_PDO,
	MT6768_M5_AXI_MST_LARB1_HW_VDEC_TILE_EXT,
	MT6768_M2_AXI_MST_LARB3_SOC2,
	MT6768_M2_AXI_MST_CCU,
	MT6768_M2_AXI_MST_LARB3_RAWI_A,
	MT6768_M7_AXI_MST_CLDMA,
	MT6768_M4_AXI_MST_MRSG1,
	MT6768_M2_AXI_MST_LARB0_DISP_WDMA0,
	MT6768_M7_AXI_MST_SPI4,
	MT6768_M5_AXI_MST_LARB0_DISP_OVL0,
	MT6768_M2_AXI_MST_LARB2_RP,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_VLD_EXT,
	MT6768_M7_AXI_MST_MSDC1,
	MT6768_M5_AXI_MST_LARB3_RAWI_B,
	MT6768_M5_AXI_MST_LARB3_IMGO,
	MT6768_M7_AXI_MST_CCU,
	MT6768_M2_AXI_MST_LARB0_DISP_RDMA0,
	MT6768_M2_AXI_MST_LARB1_HW_VDEC_TILE_EXT,
	MT6768_M5_AXI_MST_LARB0_DISP_OVL0_2L,
	MT6768_M3_AXI_MST_MD_MMU,
	MT6768_M7_AXI_MST_CONNSYS_NA,
	MT6768_M5_AXI_MST_LARB0_MDP_WDMA0,
	MT6768_M4_AXI_MST_CSH,
	MT6768_M2_AXI_MST_LARB0_MDP_WROT0,
	MT6768_M5_AXI_MST_LARB3_UFEO,
	MST_INVALID,
	NR_MST
};

static const struct mst_tbl_entry mst_tbl[] = {
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x4,
		.note = "Core nn system domain store exclusive",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x24,
		.note = "Core nn barrier",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "SCU generated barrier",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FF7,
		.id_val = 0x54,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x64,
		.note = "Core nn non-re-orderable device write",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F87,
		.id_val = 0x84,
		.note = "Write to normal memory or re-orderable device memory",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1807,
		.id_val = 0x7,
		.note = "Write-back that the MCSIA generates",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x4,
		.note = "Core nn exclusive read or non-reorderable device read",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x24,
		.note = "Core nn barrier",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x44,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FFF,
		.id_val = 0x4C,
		.note = "SCU generated barrier or DVM complete",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FF7,
		.id_val = 0x54,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1FE7,
		.id_val = 0x64,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F9F,
		.id_val = 0x84,
		.note = "ACP read",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F9F,
		.id_val = 0x8C,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F97,
		.id_val = 0x94,
		.note = "Unused",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M0_AXI_MST_MP0, .port = 0, .id_mask = 0x1F07,
		.id_val = 0x104,
		.note = "Core nn read",
		.name = "MT6768_M0_AXI_MST_MP0"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x3,
		.note = "Core nn system domain store exclusive",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x23,
		.note = "Core nn barrier",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x43,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x4B,
		.note = "SCU generated barrier",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FF7,
		.id_val = 0x53,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x63,
		.note = "Core nn non-re-orderable device write",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F87,
		.id_val = 0x83,
		.note = "Write to normal memory or re-orderable device memory",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1807,
		.id_val = 0x7,
		.note = "Write-back that the MCSIA generates",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x3,
		.note = "Core nn exclusive read or non-reorderable device read",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x23,
		.note = "Core nn barrier",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x43,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FFF,
		.id_val = 0x4B,
		.note = "SCU generated barrier or DVM complete",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FF7,
		.id_val = 0x53,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1FE7,
		.id_val = 0x63,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F9F,
		.id_val = 0x83,
		.note = "ACP read",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F9F,
		.id_val = 0x8B,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F97,
		.id_val = 0x93,
		.note = "Unused",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M1_AXI_MST_MP1, .port = 1, .id_mask = 0x1F07,
		.id_val = 0x103,
		.note = "Core nn read",
		.name = "MT6768_M1_AXI_MST_MP1"},
	{.master = MT6768_M2_AXI_MST_LARB0_DISP_OVL0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x0,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_DISP_OVL0"},
	{.master = MT6768_M2_AXI_MST_LARB0_DISP_OVL0_2L, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x4,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_DISP_OVL0_2L"},
	{.master = MT6768_M2_AXI_MST_LARB0_DISP_RDMA0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x8,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_DISP_RDMA0"},
	{.master = MT6768_M2_AXI_MST_LARB0_DISP_WDMA0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0xC,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_DISP_WDMA0"},
	{.master = MT6768_M2_AXI_MST_LARB0_MDP_RDMA0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x10,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_MDP_RDMA0"},
	{.master = MT6768_M2_AXI_MST_LARB0_MDP_WDMA0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x14,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_MDP_WDMA0"},
	{.master = MT6768_M2_AXI_MST_LARB0_MDP_WROT0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x18,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_MDP_WROT0"},
	{.master = MT6768_M2_AXI_MST_LARB0_DISP_FAKE, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x1C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB0_DISP_FAKE"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_MC_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x80,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_MC_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_PP_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x84,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_PP_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_VLD_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x88,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_VLD_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_VLD2_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x8C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_VLD2_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_AVC_MV_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x90,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_AVC_MV_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_PRED_RD_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x94,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_PRED_RD_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_PRED_WR_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x98,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_PRED_WR_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_PPWRAP_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x9C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_PPWRAP_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB1_HW_VDEC_TILE_EXT, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0xA0,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB1_HW_VDEC_TILE_EXT"},
	{.master = MT6768_M2_AXI_MST_LARB2_IMGI, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x100,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_IMGI"},
	{.master = MT6768_M2_AXI_MST_LARB2_IMG2O, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x104,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_IMG2O"},
	{.master = MT6768_M2_AXI_MST_LARB2_IMG3O, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x108,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_IMG3O"},
	{.master = MT6768_M2_AXI_MST_LARB2_VIPI, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x10C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_VIPI"},
	{.master = MT6768_M2_AXI_MST_LARB2_LCEI, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x110,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_LCEI"},
	{.master = MT6768_M2_AXI_MST_LARB2_RP, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x114,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_RP"},
	{.master = MT6768_M2_AXI_MST_LARB2_WR, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x118,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_WR"},
	{.master = MT6768_M2_AXI_MST_LARB2_RB, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x11C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_RB"},
	{.master = MT6768_M2_AXI_MST_LARB2_DPE_RDMA, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x120,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_DPE_RDMA"},
	{.master = MT6768_M2_AXI_MST_LARB2_DPE_WDMA, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x124,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_DPE_WDMA"},
	{.master = MT6768_M2_AXI_MST_LARB2_RSC_RDMA0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x128,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_RSC_RDMA0"},
	{.master = MT6768_M2_AXI_MST_LARB2_RSC_WDMA, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x12C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB2_RSC_WDMA"},
	{.master = MT6768_M2_AXI_MST_LARB3_IMGO, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x180,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_IMGO"},
	{.master = MT6768_M2_AXI_MST_LARB3_RRZO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x184,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_RRZO"},
	{.master = MT6768_M2_AXI_MST_LARB3_AAO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x188,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_AAO"},
	{.master = MT6768_M2_AXI_MST_LARB3_AFO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x18C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_AFO"},
	{.master = MT6768_M2_AXI_MST_LARB3_LSCI_0, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x190,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_LSCI_0"},
	{.master = MT6768_M2_AXI_MST_LARB3_LSCI_1, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x194,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_LSCI_1"},
	{.master = MT6768_M2_AXI_MST_LARB3_PDO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x198,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_PDO"},
	{.master = MT6768_M2_AXI_MST_LARB3_BPCI, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x19C,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_BPCI"},
	{.master = MT6768_M2_AXI_MST_LARB3_LSCO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1A0,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_LSCO"},
	{.master = MT6768_M2_AXI_MST_LARB3_RSSO_A, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x1A4,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_RSSO_A"},
	{.master = MT6768_M2_AXI_MST_LARB3_RSSO_B, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x1A8,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_RSSO_B"},
	{.master = MT6768_M2_AXI_MST_LARB3_UFEO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1AC,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_UFEO"},
	{.master = MT6768_M2_AXI_MST_LARB3_SOC0, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1B0,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_SOC0"},
	{.master = MT6768_M2_AXI_MST_LARB3_SOC1, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1B4,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_SOC1"},
	{.master = MT6768_M2_AXI_MST_LARB3_SOC2, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1B8,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_SOC2"},
	{.master = MT6768_M2_AXI_MST_LARB3_CCUI, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1BC,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_CCUI"},
	{.master = MT6768_M2_AXI_MST_LARB3_CCUO, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1C0,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_CCUO"},
	{.master = MT6768_M2_AXI_MST_LARB3_CACI, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1C4,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_CACI"},
	{.master = MT6768_M2_AXI_MST_LARB3_RAWI_A, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x1C8,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_RAWI_A"},
	{.master = MT6768_M2_AXI_MST_LARB3_RAWI_B, .port = 2,
		.id_mask = 0x1FFC,
		.id_val = 0x1CC,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_RAWI_B"},
	{.master = MT6768_M2_AXI_MST_LARB3_CCUG, .port = 2, .id_mask = 0x1FFC,
		.id_val = 0x1D0,
		.note = "",
		.name = "MT6768_M2_AXI_MST_LARB3_CCUG"},
	{.master = MT6768_M2_AXI_MST_CCU, .port = 2, .id_mask = 0x1F80,
		.id_val = 0x200,
		.note = "",
		.name = "MT6768_M2_AXI_MST_CCU"},
	{.master = MT6768_M3_AXI_MST_MD_MM, .port = 3, .id_mask = 0x1F83,
		.id_val = 0x0,
		.note = "",
		.name = "MT6768_M3_AXI_MST_MD_MM"},
	{.master = MT6768_M3_AXI_MST_MD_MMU, .port = 3, .id_mask = 0x1F83,
		.id_val = 0x1,
		.note = "",
		.name = "MT6768_M3_AXI_MST_MD_MMU"},
	{.master = MT6768_M3_AXI_MST_USIP_0_I, .port = 3, .id_mask = 0x1F1F,
		.id_val = 0x2,
		.note = "",
		.name = "MT6768_M3_AXI_MST_USIP_0_I"},
	{.master = MT6768_M3_AXI_MST_USIP_0_DCACHE, .port = 3,
		.id_mask = 0x1F1F,
		.id_val = 0x6,
		.note = "",
		.name = "MT6768_M3_AXI_MST_USIP_0_DCACHE"},
	{.master = MT6768_M3_AXI_MST_USIP_0_DNOCACHE, .port = 3,
		.id_mask = 0x1F1F,
		.id_val = 0xA,
		.note = "",
		.name = "MT6768_M3_AXI_MST_USIP_0_DNOCACHE"},
	{.master = MT6768_M3_AXI_MST_USIP_1_I, .port = 3, .id_mask = 0x1F1F,
		.id_val = 0x12,
		.note = "",
		.name = "MT6768_M3_AXI_MST_USIP_1_I"},
	{.master = MT6768_M3_AXI_MST_USIP_1_DCACHE, .port = 3,
		.id_mask = 0x1F1F,
		.id_val = 0x16,
		.note = "",
		.name = "MT6768_M3_AXI_MST_USIP_1_DCACHE"},
	{.master = MT6768_M3_AXI_MST_USIP_1_DNOCACHE, .port = 3,
		.id_mask = 0x1F1F,
		.id_val = 0x1A,
		.note = "",
		.name = "MT6768_M3_AXI_MST_USIP_1_DNOCACHE"},
	{.master = MT6768_M4_AXI_MST_HRQ_RD, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1000,
		.note = "",
		.name = "MT6768_M4_AXI_MST_HRQ_RD"},
	{.master = MT6768_M4_AXI_MST_HRQ_RD1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1008,
		.note = "",
		.name = "MT6768_M4_AXI_MST_HRQ_RD1"},
	{.master = MT6768_M4_AXI_MST_HRQ_WR, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1002,
		.note = "",
		.name = "MT6768_M4_AXI_MST_HRQ_WR"},
	{.master = MT6768_M4_AXI_MST_HRQ_WR1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x100A,
		.note = "",
		.name = "MT6768_M4_AXI_MST_HRQ_WR1"},
	{.master = MT6768_M4_AXI_MST_VTB, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x100C,
		.note = "",
		.name = "MT6768_M4_AXI_MST_VTB"},
	{.master = MT6768_M4_AXI_MST_TBO, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1014,
		.note = "",
		.name = "MT6768_M4_AXI_MST_TBO"},
	{.master = MT6768_M4_AXI_MST_DEBUG, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1004,
		.note = "",
		.name = "MT6768_M4_AXI_MST_DEBUG"},
	{.master = MT6768_M4_AXI_MST_DFE_DUMP, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x800,
		.note = "",
		.name = "MT6768_M4_AXI_MST_DFE_DUMP"},
	{.master = MT6768_M4_AXI_MST_BR_DMA, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x802,
		.note = "",
		.name = "MT6768_M4_AXI_MST_BR_DMA"},
	{.master = MT6768_M4_AXI_MST_IRDMA, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x10,
		.note = "",
		.name = "MT6768_M4_AXI_MST_IRDMA"},
	{.master = MT6768_M4_AXI_MST_TXBRP0, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x50,
		.note = "",
		.name = "MT6768_M4_AXI_MST_TXBRP0"},
	{.master = MT6768_M4_AXI_MST_TXBRP1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x150,
		.note = "",
		.name = "MT6768_M4_AXI_MST_TXBRP1"},
	{.master = MT6768_M4_AXI_MST_TXCAL, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xD0,
		.note = "",
		.name = "MT6768_M4_AXI_MST_TXCAL"},
	{.master = MT6768_M4_AXI_MST_TPC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1D0,
		.note = "",
		.name = "MT6768_M4_AXI_MST_TPC"},
	{.master = MT6768_M4_AXI_MST_RXDFE_DMA, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x70,
		.note = "",
		.name = "MT6768_M4_AXI_MST_RXDFE_DMA"},
	{.master = MT6768_M4_AXI_MST_MRSG0, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xF0,
		.note = "",
		.name = "MT6768_M4_AXI_MST_MRSG0"},
	{.master = MT6768_M4_AXI_MST_MRSG1, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x170,
		.note = "",
		.name = "MT6768_M4_AXI_MST_MRSG1"},
	{.master = MT6768_M4_AXI_MST_CNWDMA, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x130,
		.note = "",
		.name = "MT6768_M4_AXI_MST_CNWDMA"},
	{.master = MT6768_M4_AXI_MST_CSH, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xB0,
		.note = "",
		.name = "MT6768_M4_AXI_MST_CSH"},
	{.master = MT6768_M4_AXI_MST_DCXO, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x30,
		.note = "",
		.name = "MT6768_M4_AXI_MST_DCXO"},
	{.master = MT6768_M4_AXI_MST_DMA_RD, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1804,
		.note = "",
		.name = "MT6768_M4_AXI_MST_DMA_RD"},
	{.master = MT6768_M4_AXI_MST_DMA_WR, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1806,
		.note = "",
		.name = "MT6768_M4_AXI_MST_DMA_WR"},
	{.master = MT6768_M4_AXI_MST_MMU, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1800,
		.note = "",
		.name = "MT6768_M4_AXI_MST_MMU"},
	{.master = MT6768_M4_AXI_MST_QP, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1802,
		.note = "",
		.name = "MT6768_M4_AXI_MST_QP"},
	{.master = MT6768_M4_AXI_MST_LOG_TOP_MCU, .port = 4,
		.id_mask = 0x1FFF,
		.id_val = 0x24,
		.note = "",
		.name = "MT6768_M4_AXI_MST_LOG_TOP_MCU"},
	{.master = MT6768_M4_AXI_MST_LOG_TOP_DSP, .port = 4,
		.id_mask = 0x1FFF,
		.id_val = 0x6,
		.note = "",
		.name = "MT6768_M4_AXI_MST_LOG_TOP_DSP"},
	{.master = MT6768_M4_AXI_MST_TRACE_TOP, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x8,
		.note = "",
		.name = "MT6768_M4_AXI_MST_TRACE_TOP"},
	{.master = MT6768_M4_AXI_MST_PPPHA, .port = 4, .id_mask = 0x1FDF,
		.id_val = 0x2,
		.note = "",
		.name = "MT6768_M4_AXI_MST_PPPHA"},
	{.master = MT6768_M4_AXI_MST_IPSEC, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xA,
		.note = "",
		.name = "MT6768_M4_AXI_MST_IPSEC"},
	{.master = MT6768_M4_AXI_MST_GDMA, .port = 4, .id_mask = 0x1E3F,
		.id_val = 0xE,
		.note = "",
		.name = "MT6768_M4_AXI_MST_GDMA"},
	{.master = MT6768_M4_AXI_MST_DBGSYS, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0xE,
		.note = "",
		.name = "MT6768_M4_AXI_MST_DBGSYS"},
	{.master = MT6768_M4_AXI_MST_MCUSYS_DFD, .port = 4, .id_mask = 0x1FFF,
		.id_val = 0x1,
		.note = "",
		.name = "MT6768_M4_AXI_MST_MCUSYS_DFD"},
	{.master = MT6768_M5_AXI_MST_LARB0_DISP_OVL0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x0,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_DISP_OVL0"},
	{.master = MT6768_M5_AXI_MST_LARB0_DISP_OVL0_2L, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x4,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_DISP_OVL0_2L"},
	{.master = MT6768_M5_AXI_MST_LARB0_DISP_RDMA0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x8,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_DISP_RDMA0"},
	{.master = MT6768_M5_AXI_MST_LARB0_DISP_WDMA0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0xC,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_DISP_WDMA0"},
	{.master = MT6768_M5_AXI_MST_LARB0_MDP_RDMA0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x10,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_MDP_RDMA0"},
	{.master = MT6768_M5_AXI_MST_LARB0_MDP_WDMA0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x14,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_MDP_WDMA0"},
	{.master = MT6768_M5_AXI_MST_LARB0_MDP_WROT0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x18,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_MDP_WROT0"},
	{.master = MT6768_M5_AXI_MST_LARB0_DISP_FAKE, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x1C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB0_DISP_FAKE"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_MC_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x80,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_MC_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_PP_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x84,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_PP_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_VLD_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x88,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_VLD_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_VLD2_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x8C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_VLD2_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_AVC_MV_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x90,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_AVC_MV_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_PRED_RD_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x94,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_PRED_RD_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_PRED_WR_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x98,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_PRED_WR_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_PPWRAP_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x9C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_PPWRAP_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB1_HW_VDEC_TILE_EXT, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0xA0,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB1_HW_VDEC_TILE_EXT"},
	{.master = MT6768_M5_AXI_MST_LARB2_IMGI, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x100,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_IMGI"},
	{.master = MT6768_M5_AXI_MST_LARB2_IMG2O, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x104,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_IMG2O"},
	{.master = MT6768_M5_AXI_MST_LARB2_IMG3O, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x108,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_IMG3O"},
	{.master = MT6768_M5_AXI_MST_LARB2_VIPI, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x10C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_VIPI"},
	{.master = MT6768_M5_AXI_MST_LARB2_LCEI, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x110,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_LCEI"},
	{.master = MT6768_M5_AXI_MST_LARB2_RP, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x114,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_RP"},
	{.master = MT6768_M5_AXI_MST_LARB2_WR, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x118,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_WR"},
	{.master = MT6768_M5_AXI_MST_LARB2_RB, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x11C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_RB"},
	{.master = MT6768_M5_AXI_MST_LARB2_DPE_RDMA, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x120,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_DPE_RDMA"},
	{.master = MT6768_M5_AXI_MST_LARB2_DPE_WDMA, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x124,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_DPE_WDMA"},
	{.master = MT6768_M5_AXI_MST_LARB2_RSC_RDMA0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x128,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_RSC_RDMA0"},
	{.master = MT6768_M5_AXI_MST_LARB2_RSC_WDMA, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x12C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB2_RSC_WDMA"},
	{.master = MT6768_M5_AXI_MST_LARB3_IMGO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x180,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_IMGO"},
	{.master = MT6768_M5_AXI_MST_LARB3_RRZO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x184,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_RRZO"},
	{.master = MT6768_M5_AXI_MST_LARB3_AAO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x188,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_AAO"},
	{.master = MT6768_M5_AXI_MST_LARB3_AFO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x18C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_AFO"},
	{.master = MT6768_M5_AXI_MST_LARB3_LSCI_0, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x190,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_LSCI_0"},
	{.master = MT6768_M5_AXI_MST_LARB3_LSCI_1, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x194,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_LSCI_1"},
	{.master = MT6768_M5_AXI_MST_LARB3_PDO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x198,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_PDO"},
	{.master = MT6768_M5_AXI_MST_LARB3_BPCI, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x19C,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_BPCI"},
	{.master = MT6768_M5_AXI_MST_LARB3_LSCO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1A0,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_LSCO"},
	{.master = MT6768_M5_AXI_MST_LARB3_RSSO_A, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x1A4,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_RSSO_A"},
	{.master = MT6768_M5_AXI_MST_LARB3_RSSO_B, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x1A8,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_RSSO_B"},
	{.master = MT6768_M5_AXI_MST_LARB3_UFEO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1AC,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_UFEO"},
	{.master = MT6768_M5_AXI_MST_LARB3_SOC0, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1B0,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_SOC0"},
	{.master = MT6768_M5_AXI_MST_LARB3_SOC1, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1B4,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_SOC1"},
	{.master = MT6768_M5_AXI_MST_LARB3_SOC2, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1B8,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_SOC2"},
	{.master = MT6768_M5_AXI_MST_LARB3_CCUI, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1BC,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_CCUI"},
	{.master = MT6768_M5_AXI_MST_LARB3_CCUO, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1C0,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_CCUO"},
	{.master = MT6768_M5_AXI_MST_LARB3_CACI, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1C4,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_CACI"},
	{.master = MT6768_M5_AXI_MST_LARB3_RAWI_A, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x1C8,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_RAWI_A"},
	{.master = MT6768_M5_AXI_MST_LARB3_RAWI_B, .port = 5,
		.id_mask = 0x1FFC,
		.id_val = 0x1CC,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_RAWI_B"},
	{.master = MT6768_M5_AXI_MST_LARB3_CCUG, .port = 5, .id_mask = 0x1FFC,
		.id_val = 0x1D0,
		.note = "",
		.name = "MT6768_M5_AXI_MST_LARB3_CCUG"},
	{.master = MT6768_M5_AXI_MST_CCU, .port = 5, .id_mask = 0x1F80,
		.id_val = 0x200,
		.note = "",
		.name = "MT6768_M5_AXI_MST_CCU"},
	{.master = MT6768_M5_AXI_MST_MM_IOMMU, .port = 5, .id_mask = 0x1FFF,
		.id_val = 0x3FC,
		.note = "",
		.name = "MT6768_M5_AXI_MST_MM_IOMMU"},
	{.master = MT6768_M5_AXI_MST_MM_IOMMU, .port = 5, .id_mask = 0x1FFF,
		.id_val = 0x3FD,
		.note = "",
		.name = "MT6768_M5_AXI_MST_MM_IOMMU"},
	{.master = MT6768_M6_AXI_MST_MFG_M0, .port = 6, .id_mask = 0x1FC0,
		.id_val = 0x0,
		.note = "",
		.name = "MT6768_M6_AXI_MST_MFG_M0"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_WIFI_PDMA, .port = 7,
		.id_mask = 0x1FEF,
		.id_val = 0x0,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_WIFI_PDMA"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_RBIST_INTERNAL_CAPTURE,
		.port = 7,
		.id_mask = 0x1FEF,
		.id_val = 0x4,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_RBIST_INTERNAL_CAPTURE"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_N9_MCU, .port = 7,
		.id_mask = 0x1FEF,
		.id_val = 0x8,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_N9_MCU"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_NA, .port = 7, .id_mask = 0x1FEF,
		.id_val = 0xC,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_NA"},
	{.master = MT6768_M7_AXI_MST_DEBUGTOP, .port = 7, .id_mask = 0x1FDF,
		.id_val = 0x2,
		.note = "",
		.name = "MT6768_M7_AXI_MST_DEBUGTOP"},
	{.master = MT6768_M7_AXI_MST_MSDC0, .port = 7, .id_mask = 0x1CFF,
		.id_val = 0x6,
		.note = "",
		.name = "MT6768_M7_AXI_MST_MSDC0"},
	{.master = MT6768_M7_AXI_MST_SPI0, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x326,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPI0"},
	{.master = MT6768_M7_AXI_MST_AUDIO, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x226,
		.note = "",
		.name = "MT6768_M7_AXI_MST_AUDIO"},
	{.master = MT6768_M7_AXI_MST_MSDC1, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x126,
		.note = "",
		.name = "MT6768_M7_AXI_MST_MSDC1"},
	{.master = MT6768_M7_AXI_MST_PWM, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x26,
		.note = "",
		.name = "MT6768_M7_AXI_MST_PWM"},
	{.master = MT6768_M7_AXI_MST_USB20, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x46,
		.note = "",
		.name = "MT6768_M7_AXI_MST_USB20"},
	{.master = MT6768_M7_AXI_MST_SPI1, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x346,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPI1"},
	{.master = MT6768_M7_AXI_MST_SPI2, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x246,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPI2"},
	{.master = MT6768_M7_AXI_MST_NA, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x146,
		.note = "",
		.name = "MT6768_M7_AXI_MST_NA"},
	{.master = MT6768_M7_AXI_MST_THERM, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x366,
		.note = "",
		.name = "MT6768_M7_AXI_MST_THERM"},
	{.master = MT6768_M7_AXI_MST_CCU, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x266,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CCU"},
	{.master = MT6768_M7_AXI_MST_SPM, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x166,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPM"},
	{.master = MT6768_M7_AXI_MST_MCUPM, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x66,
		.note = "",
		.name = "MT6768_M7_AXI_MST_MCUPM"},
	{.master = MT6768_M7_AXI_MST_DMA_EXT, .port = 7, .id_mask = 0x1EFF,
		.id_val = 0x86,
		.note = "",
		.name = "MT6768_M7_AXI_MST_DMA_EXT"},
	{.master = MT6768_M7_AXI_MST_SPI5, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x3A6,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPI5"},
	{.master = MT6768_M7_AXI_MST_SPI4, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x2A6,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPI4"},
	{.master = MT6768_M7_AXI_MST_SPI3, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0x1A6,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SPI3"},
	{.master = MT6768_M7_AXI_MST_NA, .port = 7, .id_mask = 0x1FFF,
		.id_val = 0xA6,
		.note = "",
		.name = "MT6768_M7_AXI_MST_NA"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_WIFI_PDMA, .port = 7,
		.id_mask = 0x1F7F,
		.id_val = 0xA,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_WIFI_PDMA"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_RBIST_INTERNAL_CAPTURE,
		.port = 7,
		.id_mask = 0x1F7F,
		.id_val = 0x2A,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_RBIST_INTERNAL_CAPTURE"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_N9_MCU, .port = 7,
		.id_mask = 0x1F7F,
		.id_val = 0x4A,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_N9_MCU"},
	{.master = MT6768_M7_AXI_MST_CONNSYS_NA, .port = 7, .id_mask = 0x1F7F,
		.id_val = 0x6A,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CONNSYS_NA"},
	{.master = MT6768_M7_AXI_MST_DX_CC, .port = 7, .id_mask = 0x1E1F,
		.id_val = 0xE,
		.note = "",
		.name = "MT6768_M7_AXI_MST_DX_CC"},
	{.master = MT6768_M7_AXI_MST_CQ_DMA, .port = 7, .id_mask = 0x1F1F,
		.id_val = 0x12,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CQ_DMA"},
	{.master = MT6768_M7_AXI_MST_CLDMA, .port = 7, .id_mask = 0x1F9F,
		.id_val = 0x16,
		.note = "",
		.name = "MT6768_M7_AXI_MST_CLDMA"},
	{.master = MT6768_M7_AXI_MST_GCE_M, .port = 7, .id_mask = 0x1F9F,
		.id_val = 0x1A,
		.note = "",
		.name = "MT6768_M7_AXI_MST_GCE_M"},
	{.master = MT6768_M7_AXI_MST_SCP, .port = 7, .id_mask = 0x1F3F,
		.id_val = 0x1E,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SCP"},
	{.master = MT6768_M7_AXI_MST_SSPM, .port = 7, .id_mask = 0x1F3F,
		.id_val = 0x3E,
		.note = "",
		.name = "MT6768_M7_AXI_MST_SSPM"},
	{.master = MT6768_M7_AXI_MST_GPU, .port = 7, .id_mask = 0x1F81,
		.id_val = 0x1,
		.note = "",
		.name = "MT6768_M7_AXI_MST_GPU"},
};

#endif /* __MPU_PLATFORM_H__ */
