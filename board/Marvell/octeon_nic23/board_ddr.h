/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * https://spdx.org/licenses
 */

#ifndef __BOARD_DDR_H__
#define __BOARD_DDR_H__

#define OCTEON_NIC23_DRAM_SOCKET_CONFIGURATION0			\
	{ {0x0, 0x0}, {octeon_nic23_cfg0_spd_values, NULL} }

#define NIC23_MTA8ATF51264AZ2G3_SPD_VALUES			\
	0x23, 0x10, 0x0c, 0x02, 0x84, 0x19, 0x00, 0x08,		\
	0x00, 0x00, 0x00, 0x03, 0x01, 0x0b, 0x80, 0x00,		\
	0x00, 0x00, 0x08, 0x0c, 0xf4, 0x1b, 0x00, 0x00,		\
	0x6c, 0x6c, 0x6c, 0x11, 0x08, 0x74, 0x20, 0x08,		\
	0x00, 0x05, 0x70, 0x03, 0x00, 0xa8, 0x1e, 0x2b,		\
	0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x0c, 0x2c, 0x15, 0x35,		\
	0x15, 0x35, 0x0b, 0x2c, 0x15, 0x35, 0x0b, 0x35,		\
	0x0b, 0x2c, 0x0b, 0x35, 0x15, 0x36, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0xec, 0xb5, 0xce,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x30, 0x0e,		\
	0x11, 0x11, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x2e,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x80, 0x2c, 0x0f, 0x14, 0x50, 0x0e, 0x08, 0x18,		\
	0xc8, 0x31, 0x38, 0x41, 0x53, 0x46, 0x31, 0x47,		\
	0x37, 0x32, 0x41, 0x5a, 0x2d, 0x32, 0x47, 0x31,		\
	0x41, 0x31, 0x20, 0x20, 0x20, 0x31, 0x80, 0x2c,		\
	0x41, 0x44, 0x50, 0x41, 0x45, 0x4e, 0x43, 0x39,		\
	0x30, 0x30, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,		\
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#define OCTEON_NIC23_CFG0_SPD_VALUES	NIC23_MTA8ATF51264AZ2G3_SPD_VALUES

#define OCTEON_NIC23_BOARD_EEPROM_TWSI_ADDR	0x56

#define OCTEON_NIC23_MODEREG_PARAMS1_1RANK_1SLOT		\
{								\
		.cn78xx = {					\
			.pasr_00	= 0,			\
			.asr_00		= 0,			\
			.srt_00		= 0,			\
			.rtt_wr_00	= ddr4_rttwr_80ohm & 3,	\
			.rtt_wr_00_ext	= (ddr4_rttwr_80ohm >> 2) & 1, \
			.dic_00		= ddr4_dic_34ohm,	\
			.rtt_nom_00	= 0,                    \
			.pasr_01	= 0,			\
			.asr_01		= 0,			\
			.srt_01		= 0,			\
			.rtt_wr_01	= 0,			\
			.dic_01		= ddr4_dic_34ohm,	\
			.rtt_nom_01	= 0,			\
			.pasr_10	= 0,			\
			.asr_10		= 0,			\
			.srt_10		= 0,			\
			.rtt_wr_10	= 0,			\
			.dic_10		= ddr4_dic_34ohm,	\
			.rtt_nom_10	= 0,			\
			.pasr_11	= 0,			\
			.asr_11		= 0,			\
			.srt_11		= 0,			\
			.rtt_wr_11	= 0,			\
			.dic_11		= ddr4_dic_34ohm,	\
			.rtt_nom_11	= 0,			\
		}						\
	}

#define OCTEON_NIC23_MODEREG_PARAMS1_1RANK_2SLOT		\
{								\
		.cn78xx = {					\
			.pasr_00	= 0,			\
			.asr_00		= 0,			\
			.srt_00		= 0,			\
			.rtt_wr_00	= ddr4_rttwr_80ohm & 3,	\
			.rtt_wr_00_ext	= (ddr4_rttwr_80ohm >> 2) & 1, \
			.dic_00		= ddr4_dic_34ohm,	\
			.rtt_nom_00	= 0,			\
			.pasr_01	= 0,			\
			.asr_01		= 0,			\
			.srt_01		= 0,			\
			.rtt_wr_01	= 0,			\
			.dic_01		= ddr4_dic_34ohm,	\
			.rtt_nom_01	= 0,			\
			.pasr_10	= 0,			\
			.asr_10		= 0,			\
			.srt_10		= 0,                    \
			.rtt_wr_10	= ddr4_rttwr_80ohm & 3,	\
			.rtt_wr_10_ext	= (ddr4_rttwr_80ohm >> 2) & 1, \
			.dic_10		= ddr4_dic_34ohm,	\
			.rtt_nom_10	= 0,			\
			.pasr_11	= 0,			\
			.asr_11		= 0,			\
			.srt_11		= 0,			\
			.rtt_wr_11	= 0,			\
			.dic_11		= ddr4_dic_34ohm,	\
			.rtt_nom_11	= 0			\
		}                                               \
}

#define OCTEON_NIC23_MODEREG_PARAMS2_1RANK_1SLOT	\
{							\
	.cn78xx = {					\
		.rtt_park_00    = ddr4_rttpark_60ohm,	\
		.vref_value_00  = 0x22,			\
		.vref_range_00  = 0,			\
		.rtt_park_01    = 0,			\
		.vref_value_01  = 0,			\
		.vref_range_01  = 0,			\
		.rtt_park_10    = 0,			\
		.vref_value_10  = 0,			\
		.vref_range_10  = 0,			\
		.rtt_park_11    = 0,			\
		.vref_value_11  = 0,			\
		.vref_range_11  = 0			\
	}						\
}

#define  OCTEON_NIC23_MODEREG_PARAMS2_1RANK_2SLOT	\
{							\
	.cn78xx = {					\
		.rtt_park_00    = ddr4_rttpark_48ohm,	\
		.vref_value_00  = 0x1f,			\
		.vref_range_00  = 0,			\
		.rtt_park_01    = 0,			\
		.vref_value_01  = 0,			\
		.vref_range_01  = 0,			\
		.rtt_park_10    = ddr4_rttpark_48ohm,	\
		.vref_value_10  = 0x1f,			\
		.vref_range_10  = 0,			\
		.rtt_park_11    = 0,			\
		.vref_value_11  = 0,			\
		.vref_range_11  = 0			\
	}						\
}

#define OCTEON_NIC23_CN73XX_DRAM_ODT_1RANK_CONFIGURATION		\
	/*   1 */							\
	{								\
		ddr4_dqx_driver_34_ohm,					\
		0x00000000ULL,						\
		OCTEON_NIC23_MODEREG_PARAMS1_1RANK_1SLOT,		\
		OCTEON_NIC23_MODEREG_PARAMS2_1RANK_1SLOT,		\
		ddr4_rodt_ctl_48_ohm,					\
		0x00000000ULL,						\
		0							\
	},								\
	/*   2 */							\
	{								\
		ddr4_dqx_driver_34_ohm,					\
		0x00000000ULL,						\
		OCTEON_NIC23_MODEREG_PARAMS1_1RANK_2SLOT,		\
		OCTEON_NIC23_MODEREG_PARAMS2_1RANK_2SLOT,		\
		ddr4_rodt_ctl_80_ohm,					\
		0x00000000ULL,						\
		0							\
	}

/*
 * Construct a static initializer for the ddr_configuration_t variable that
 * holds (almost) all of the information required for DDR initialization.
 */

/*
 * The parameters below make up the custom_lmc_config data structure.
 * This structure is used to customize the way that the LMC DRAM
 * Controller is configured for a particular board design.
 *
 * Refer to the file lib_octeon_board_table_entry.h for a description
 * of the custom board settings.  It is usually kept in the following
 * location... arch/mips/include/asm/arch-octeon/
 *
 */

#define OCTEON_NIC23_DDR_CONFIGURATION					\
/* Interface 0 */							\
{									\
	.custom_lmc_config = {						\
		.min_rtt_nom_idx	= 2,				\
		.max_rtt_nom_idx	= 5,				\
		.min_rodt_ctl		= 2,				\
		.max_rodt_ctl		= 4,				\
		.ck_ctl                 = ddr4_driver_34_ohm,           \
		.cmd_ctl                = ddr4_driver_34_ohm,           \
		.ctl_ctl                = ddr4_driver_34_ohm,           \
		.min_cas_latency	= 7,				\
		.offset_en		= 1,				\
		.offset_udimm		= 2,				\
		.offset_rdimm		= 2,				\
		.ddr_rtt_nom_auto	= 0,				\
		.ddr_rodt_ctl_auto	= 0,				\
		.rlevel_compute		= 0,				\
		.ddr2t_udimm		= 1,				\
		.ddr2t_rdimm		= 1,				\
		.maximum_adjacent_rlevel_delay_increment = 2,           \
		.fprch2			= 2,				\
		.dll_write_offset       = NULL,                         \
		.dll_read_offset        = NULL,                         \
		.disable_sequential_delay_check = 1,                    \
		.parity			= 0				\
	},								\
	.dimm_config_table = {						\
		OCTEON_NIC23_DRAM_SOCKET_CONFIGURATION0,		\
		DIMM_CONFIG_TERMINATOR					\
	},								\
	.unbuffered = {							\
		.ddr_board_delay = 0,					\
		.lmc_delay_clk = 0,					\
		.lmc_delay_cmd = 0,					\
		.lmc_delay_dq = 0					\
	},								\
	.registered = {							\
		.ddr_board_delay = 0,					\
		.lmc_delay_clk = 0,					\
		.lmc_delay_cmd = 0,					\
		.lmc_delay_dq = 0					\
	},								\
	.odt_1rank_config = {						\
		OCTEON_NIC23_CN73XX_DRAM_ODT_1RANK_CONFIGURATION	\
	},								\
},

#endif /* __BOARD_DDR_H__ */