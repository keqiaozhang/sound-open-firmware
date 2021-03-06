/* SRC conversions */
#include <reef/audio/coefficients/src/src_small_int24_1_2_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_1_3_2188_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_1_3_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_2_1_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_2_3_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_3_1_2188_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_3_1_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_3_2_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_7_8_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_8_7_4375_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_20_21_4020_5000.h>
#include <reef/audio/coefficients/src/src_small_int24_21_20_4020_5000.h>

/* SRC table */
int32_t fir_one = 4194304;
struct src_stage src_int24_1_1_0_0 =  { 0, 0, 1, 1, 1, 1, 1, 0, -1, &fir_one };
struct src_stage src_int24_0_0_0_0 =  { 0, 0, 0, 0, 0, 0, 0, 0,  0, &fir_one };
int src_in_fs[6] = { 8000, 16000, 24000, 32000, 44100, 48000};
int src_out_fs[6] = { 8000, 16000, 24000, 32000, 44100, 48000};
struct src_stage *src_table1[6][6] = {
	{ &src_int24_1_1_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_3_2188_5000
	},
	{ &src_int24_0_0_0_0, &src_int24_1_1_0_0,
	 &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_3_4375_5000
	},
	{ &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_1_1_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_2_4375_5000
	},
	{ &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_1_0_0,
	 &src_int24_0_0_0_0, &src_int24_2_3_4375_5000
	},
	{ &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_1_1_0_0, &src_int24_21_20_4020_5000
	},
	{ &src_int24_2_1_4375_5000, &src_int24_3_1_4375_5000,
	 &src_int24_2_1_4375_5000, &src_int24_3_2_4375_5000,
	 &src_int24_8_7_4375_5000, &src_int24_1_1_0_0
	}
};
struct src_stage *src_table2[6][6] = {
	{ &src_int24_1_1_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_2_4375_5000
	},
	{ &src_int24_0_0_0_0, &src_int24_1_1_0_0,
	 &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_1_0_0
	},
	{ &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_1_1_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_1_0_0
	},
	{ &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_1_0_0,
	 &src_int24_0_0_0_0, &src_int24_1_1_0_0
	},
	{ &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_0_0_0_0, &src_int24_0_0_0_0,
	 &src_int24_1_1_0_0, &src_int24_7_8_4375_5000
	},
	{ &src_int24_3_1_2188_5000, &src_int24_1_1_0_0,
	 &src_int24_1_1_0_0, &src_int24_1_1_0_0,
	 &src_int24_20_21_4020_5000, &src_int24_1_1_0_0
	}
};
