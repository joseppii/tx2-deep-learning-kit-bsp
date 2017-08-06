/*
 * tegra210_i2s_alt.h - Definitions for Tegra210 I2S driver
 *
 * Copyright (c) 2014-2017 NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TEGRA210_I2S_ALT_H__
#define __TEGRA210_I2S_ALT_H__

/* Register offsets from TEGRA210_I2S*_BASE */

#define TEGRA210_I2S_AXBAR_RX_ENABLE			0x0
#define TEGRA210_I2S_AXBAR_RX_SOFT_RESET		0x4
#define TEGRA210_I2S_AXBAR_RX_STATUS			0x0c
#define TEGRA210_I2S_AXBAR_RX_INT_STATUS		0x10
#define TEGRA210_I2S_AXBAR_RX_INT_MASK			0x14
#define TEGRA210_I2S_AXBAR_RX_INT_SET			0x18
#define TEGRA210_I2S_AXBAR_RX_INT_CLEAR			0x1c
#define TEGRA210_I2S_AXBAR_RX_CIF_CTRL			0x20
#define TEGRA210_I2S_AXBAR_RX_CTRL			0x24
#define TEGRA210_I2S_AXBAR_RX_SLOT_CTRL			0x28
#define TEGRA210_I2S_AXBAR_RX_CLK_TRIM			0x2c
#define TEGRA210_I2S_AXBAR_RX_CYA			0x30
#define TEGRA210_I2S_AXBAR_RX_CIF_FIFO_STATUS		0x34
#define TEGRA210_I2S_AXBAR_TX_ENABLE			0x40
#define TEGRA210_I2S_AXBAR_TX_SOFT_RESET		0x44
#define TEGRA210_I2S_AXBAR_TX_STATUS			0x4c
#define TEGRA210_I2S_AXBAR_TX_INT_STATUS		0x50
#define TEGRA210_I2S_AXBAR_TX_INT_MASK			0x54
#define TEGRA210_I2S_AXBAR_TX_INT_SET			0x58
#define TEGRA210_I2S_AXBAR_TX_INT_CLEAR			0x5c
#define TEGRA210_I2S_AXBAR_TX_CIF_CTRL			0x60
#define TEGRA210_I2S_AXBAR_TX_CTRL			0x64
#define TEGRA210_I2S_AXBAR_TX_SLOT_CTRL			0x68
#define TEGRA210_I2S_AXBAR_TX_CLK_TRIM			0x6c
#define TEGRA210_I2S_AXBAR_TX_CYA			0x70
#define TEGRA210_I2S_AXBAR_TX_CIF_FIFO_STATUS		0x74
#define TEGRA210_I2S_ENABLE				0x80
#define TEGRA210_I2S_SOFT_RESET				0x84
#define TEGRA210_I2S_CG					0x88
#define TEGRA210_I2S_STATUS				0x8c
#define TEGRA210_I2S_INT_STATUS				0x90
#define TEGRA210_I2S_CTRL				0xa0
#define TEGRA210_I2S_TIMING				0xa4
#define TEGRA210_I2S_SLOT_CTRL				0xa8
#define TEGRA210_I2S_CLK_TRIM				0xac
#define TEGRA210_I2S_CYA				0xb0

/*
 * I2S_AXBAAR_RX registers are with respect to AXBAR.
 * The data is coming from AXBAR to I2S for playback.
 */

/* Fields in TEGRA210_I2S_AXBAR_RX_ENABLE */
#define TEGRA210_I2S_AXBAR_RX_EN_SHIFT			0
#define TEGRA210_I2S_AXBAR_RX_EN			(1 << TEGRA210_I2S_AXBAR_RX_EN_SHIFT)

/* Fields in TEGRA210_I2S_AXBAR_RX_CTRL */
#define TEGRA210_I2S_AXBAR_RX_CTRL_DATA_OFFSET_SHIFT			8
#define TEGRA210_I2S_AXBAR_RX_CTRL_DATA_OFFSET_MASK			(0x7ff << TEGRA210_I2S_AXBAR_RX_CTRL_DATA_OFFSET_SHIFT)

#define TEGRA210_I2S_AXBAR_RX_CTRL_MASK_BITS_SHIFT			4

#define TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_SHIFT			1
#define TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_MASK			(3 << TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_NOHIGHZ			(0 << TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_HIGHZ			(1 << TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_HIGHZ_ON_HALF_BIT_CLK	(2 << TEGRA210_I2S_AXBAR_RX_CTRL_HIGHZ_CTRL_SHIFT)

#define TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_SHIFT	0
#define TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_MASK	(1 << TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_MSB_FIRST	(0 << TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_LSB_FIRST	(1 << TEGRA210_I2S_AXBAR_RX_CTRL_BIT_ORDER_SHIFT)

/*
 * I2S_AXBAAR_TX registers are with respect to AXBAR.
 * The data is goint to AXBAR from I2S for capture.
 */

/* Fields in TEGRA210_I2S_AXBAR_TX_ENABLE */
#define TEGRA210_I2S_AXBAR_TX_EN_SHIFT			0
#define TEGRA210_I2S_AXBAR_TX_EN			(1 << TEGRA210_I2S_AXBAR_TX_EN_SHIFT)

/* Fields in TEGRA210_I2S_AXBAR_TX_CTRL */
#define TEGRA210_I2S_AXBAR_TX_CTRL_DATA_OFFSET_SHIFT	8
#define TEGRA210_I2S_AXBAR_TX_CTRL_DATA_OFFSET_MASK	(0x7ff << TEGRA210_I2S_AXBAR_TX_CTRL_DATA_OFFSET_SHIFT)

#define TEGRA210_I2S_AXBAR_TX_CTRL_MASK_BITS_SHIFT	4

#define TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_SHIFT	1
#define TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_MASK	(3 << TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_NOHIGHZ	(0 << TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_HIGHZ	(1 << TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_HIGHZ_ON_HALF_BIT_CLK	(2 << TEGRA210_I2S_AXBAR_TX_CTRL_HIGHZ_CTRL_SHIFT)

#define TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_SHIFT	0
#define TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_MASK	(1 << TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_MSB_FIRST	(0 << TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_LSB_FIRST	(1 << TEGRA210_I2S_AXBAR_TX_CTRL_BIT_ORDER_SHIFT)

/* Fields in TEGRA210_I2S_ENABLE */
#define TEGRA210_I2S_EN_SHIFT				0
#define TEGRA210_I2S_EN_MASK				(1 << TEGRA210_I2S_EN_SHIFT)
#define TEGRA210_I2S_EN					(1 << TEGRA210_I2S_EN_SHIFT)

/* Fields in TEGRA210_I2S_CTRL */
#define TEGRA210_I2S_CTRL_FSYNC_WIDTH_SHIFT		24
#define TEGRA210_I2S_CTRL_FSYNC_WIDTH_MASK		(0xff << TEGRA210_I2S_CTRL_FSYNC_WIDTH_SHIFT)

#define TEGRA210_I2S_POS_EDGE				0
#define TEGRA210_I2S_NEG_EDGE				1
#define TEGRA210_I2S_CTRL_EDGE_CTRL_SHIFT		20
#define TEGRA210_I2S_CTRL_EDGE_CTRL_MASK		(1 << TEGRA210_I2S_CTRL_EDGE_CTRL_SHIFT)
#define TEGRA210_I2S_CTRL_EDGE_CTRL_POS_EDGE		(TEGRA210_I2S_POS_EDGE << TEGRA210_I2S_CTRL_EDGE_CTRL_SHIFT)
#define TEGRA210_I2S_CTRL_EDGE_CTRL_NEG_EDGE		(TEGRA210_I2S_NEG_EDGE << TEGRA210_I2S_CTRL_EDGE_CTRL_SHIFT)

#define TEGRA210_I2S_CTRL_PIPE_MACRO_EN_SHIFT		19
#define TEGRA210_I2S_CTRL_PIPE_MACRO_EN			(1 << TEGRA210_I2S_CTRL_PIPE_MACRO_EN_SHIFT)

#define TEGRA210_I2S_FRAME_FORMAT_LRCK			0
#define TEGRA210_I2S_FRAME_FORMAT_FSYNC			1
#define TEGRA210_I2S_CTRL_FRAME_FORMAT_SHIFT		12
#define TEGRA210_I2S_CTRL_FRAME_FORMAT_MASK		(7 << TEGRA210_I2S_CTRL_FRAME_FORMAT_SHIFT)
#define TEGRA210_I2S_CTRL_FRAME_FORMAT_LRCK_MODE	(TEGRA210_I2S_FRAME_FORMAT_LRCK << TEGRA210_I2S_CTRL_FRAME_FORMAT_SHIFT)
#define TEGRA210_I2S_CTRL_FRAME_FORMAT_FSYNC_MODE	(TEGRA210_I2S_FRAME_FORMAT_FSYNC << TEGRA210_I2S_CTRL_FRAME_FORMAT_SHIFT)

#define TEGRA210_I2S_CTRL_MASTER_EN_SHIFT		10
#define TEGRA210_I2S_CTRL_MASTER_EN_MASK		(1 << TEGRA210_I2S_CTRL_MASTER_EN_SHIFT)
#define TEGRA210_I2S_CTRL_MASTER_EN			(1 << TEGRA210_I2S_CTRL_MASTER_EN_SHIFT)
#define TEGRA210_I2S_CTRL_SLAVE_EN			(1 << TEGRA210_I2S_CTRL_MASTER_EN_SHIFT)

#define TEGRA210_I2S_CTRL_LRCK_POLARITY_SHIFT		9
#define TEGRA210_I2S_CTRL_LRCK_POLARITY_MASK		(1 << TEGRA210_I2S_CTRL_LRCK_POLARITY_SHIFT)
#define TEGRA210_I2S_CTRL_LRCK_POLARITY_LOW		(0 << TEGRA210_I2S_CTRL_LRCK_POLARITY_SHIFT)
#define TEGRA210_I2S_CTRL_LRCK_POLARITY_HIGH		(1 << TEGRA210_I2S_CTRL_LRCK_POLARITY_SHIFT)

#define TEGRA210_I2S_CTRL_LPBK_SHIFT			8
#define TEGRA210_I2S_CTRL_LPBK_MASK			(1 << TEGRA210_I2S_CTRL_LPBK_SHIFT)
#define TEGRA210_I2S_CTRL_LPBK_EN			(1 << TEGRA210_I2S_CTRL_LPBK_SHIFT)

#define TEGRA210_I2S_BITS_8				1
#define TEGRA210_I2S_BITS_12				2
#define TEGRA210_I2S_BITS_16				3
#define TEGRA210_I2S_BITS_20				4
#define TEGRA210_I2S_BITS_24				5
#define TEGRA210_I2S_BITS_28				6
#define TEGRA210_I2S_BITS_32				7
#define TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT		0
#define TEGRA210_I2S_CTRL_BIT_SIZE_MASK			(7 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_8			(TEGRA210_I2S_BITS_8  << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_12			(TEGRA210_I2S_BITS_12 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_16			(TEGRA210_I2S_BITS_16 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_20			(TEGRA210_I2S_BITS_20 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_24			(TEGRA210_I2S_BITS_24 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_28			(TEGRA210_I2S_BITS_28 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)
#define TEGRA210_I2S_CTRL_BIT_SIZE_32			(TEGRA210_I2S_BITS_32 << TEGRA210_I2S_CTRL_BIT_SIZE_SHIFT)

/* Fields in TEGRA210_I2S_TIMING */
#define TEGRA210_I2S_TIMING_NON_SYM_EN_SHIFT		12
#define TEGRA210_I2S_TIMING_NON_SYM_EN			(1 << TEGRA210_I2S_TIMING_NON_SYM_EN_SHIFT)
#define TEGRA210_I2S_TIMING_CHANNEL_BIT_CNT_MASK	0x3ff
#define TEGRA210_I2S_TIMING_CHANNEL_BIT_CNT_SHIFT	0

/* Fields in TEGRA210_I2S_RX_SOFT_RESET */
#define TEGRA210_I2S_AXBAR_RX_SOFT_RESET_SHIFT		0
#define TEGRA210_I2S_AXBAR_RX_SOFT_RESET_MASK			(1 << TEGRA210_I2S_AXBAR_RX_SOFT_RESET_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_SOFT_RESET_EN			(1 << TEGRA210_I2S_AXBAR_RX_SOFT_RESET_SHIFT)
#define TEGRA210_I2S_AXBAR_RX_SOFT_RESET_DEFAULT			(0 << TEGRA210_I2S_AXBAR_RX_SOFT_RESET_SHIFT)

/* Fields in TEGRA210_I2S_TX_SOFT_RESET */
#define TEGRA210_I2S_AXBAR_TX_SOFT_RESET_SHIFT		0
#define TEGRA210_I2S_AXBAR_TX_SOFT_RESET_MASK			(1 << TEGRA210_I2S_AXBAR_TX_SOFT_RESET_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_SOFT_RESET_EN			(1 << TEGRA210_I2S_AXBAR_TX_SOFT_RESET_SHIFT)
#define TEGRA210_I2S_AXBAR_TX_SOFT_RESET_DEFAULT			(0 << TEGRA210_I2S_AXBAR_TX_SOFT_RESET_SHIFT)

/* Fields in TEGRA210_I2S_SLOT_CTRL */
#define TEGRA210_I2S_SLOT_CTRL_TOTAL_SLOTS_SHIFT	0
#define TEGRA210_I2S_SLOT_CTRL_TOTAL_SLOTS_MASK		0xf

struct tegra210_i2s_soc_data {
	void (*set_audio_cif)(struct regmap *map,
			unsigned int reg,
			struct tegra210_xbar_cif_conf *conf);
	void (*set_slot_ctrl)(struct regmap *map,
				unsigned int total_slots,
				unsigned int tx_slot_mask,
				unsigned int rx_slot_mask);
};

enum tegra210_i2s_path {
	I2S_RX_PATH,
	I2S_TX_PATH,
	I2S_PATHS,
};

struct tegra210_i2s {
	const struct tegra210_i2s_soc_data *soc_data;
	struct clk *clk_i2s;
	struct clk *clk_i2s_sync;
	struct clk *clk_audio_sync;
	struct clk *clk_i2s_source;
	struct regmap *regmap;
	struct pinctrl *pinctrl;
	struct pinctrl_state *pin_default_state;
	struct pinctrl_state *pin_idle_state;
	struct regulator_bulk_data *supplies;
	struct notifier_block slgc_notifier;
	int num_supplies;
	int bclk_ratio;
	int format_in;
	int codec_bit_format;
	int sample_rate_via_control;
	int channels_via_control;
	int stereo_to_mono[I2S_PATHS];
	int mono_to_stereo[I2S_PATHS];
	unsigned int fsync_width;
	unsigned int tx_mask;
	unsigned int rx_mask;
	unsigned int loopback;
	bool enable_cya;
	bool is_shutdown;
};

#endif