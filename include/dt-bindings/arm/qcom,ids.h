/* SPDX-License-Identifier: GPL-2.0-only OR BSD-2-Clause */
/*
 * Copyright (c) 2015, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022 Linaro Ltd
 * Author: Krzysztof Kozlowski <krzk@kernel.org> based on previous work of Kumar Gala.
 */
#ifndef _DT_BINDINGS_ARM_QCOM_IDS_H
#define _DT_BINDINGS_ARM_QCOM_IDS_H

/*
 * The MSM chipset and hardware revision used by Qualcomm bootloaders, DTS for
 * older chipsets (qcom,msm-id) and in socinfo driver:
 */
#define QCOM_ID_MSM8260			70
#define QCOM_ID_MSM8660			71
#define QCOM_ID_APQ8060			86
#define QCOM_ID_MSM8960			87
#define QCOM_ID_APQ8064			109
#define QCOM_ID_MSM8930			116
#define QCOM_ID_MSM8630			117
#define QCOM_ID_MSM8230			118
#define QCOM_ID_APQ8030			119
#define QCOM_ID_MSM8627			120
#define QCOM_ID_MSM8227			121
#define QCOM_ID_MSM8660A		122
#define QCOM_ID_MSM8260A		123
#define QCOM_ID_APQ8060A		124
#define QCOM_ID_MSM8974			126
#define QCOM_ID_MSM8225			127
#define QCOM_ID_MSM8625			129
#define QCOM_ID_MPQ8064			130
#define QCOM_ID_MSM8960AB		138
#define QCOM_ID_APQ8060AB		139
#define QCOM_ID_MSM8260AB		140
#define QCOM_ID_MSM8660AB		141
#define QCOM_ID_MSM8930AA		142
#define QCOM_ID_MSM8630AA		143
#define QCOM_ID_MSM8230AA		144
#define QCOM_ID_MSM8626			145
#define QCOM_ID_MSM8610			147
#define QCOM_ID_APQ8064AB		153
#define QCOM_ID_MSM8930AB		154
#define QCOM_ID_MSM8630AB		155
#define QCOM_ID_MSM8230AB		156
#define QCOM_ID_APQ8030AB		157
#define QCOM_ID_MSM8226			158
#define QCOM_ID_MSM8526			159
#define QCOM_ID_APQ8030AA		160
#define QCOM_ID_MSM8110			161
#define QCOM_ID_MSM8210			162
#define QCOM_ID_MSM8810			163
#define QCOM_ID_MSM8212			164
#define QCOM_ID_MSM8612			165
#define QCOM_ID_MSM8112			166
#define QCOM_ID_MSM8125			167
#define QCOM_ID_MSM8225Q		168
#define QCOM_ID_MSM8625Q		169
#define QCOM_ID_MSM8125Q		170
#define QCOM_ID_APQ8064AA		172
#define QCOM_ID_APQ8084			178
#define QCOM_ID_MSM8130			179
#define QCOM_ID_MSM8130AA		180
#define QCOM_ID_MSM8130AB		181
#define QCOM_ID_MSM8627AA		182
#define QCOM_ID_MSM8227AA		183
#define QCOM_ID_APQ8074			184
#define QCOM_ID_MSM8274			185
#define QCOM_ID_MSM8674			186
#define QCOM_ID_MDM9635			187
#define QCOM_ID_MSM8974PRO_AC		194
#define QCOM_ID_MSM8126			198
#define QCOM_ID_APQ8026			199
#define QCOM_ID_MSM8926			200
#define QCOM_ID_IPQ8062			201
#define QCOM_ID_IPQ8064			202
#define QCOM_ID_IPQ8066			203
#define QCOM_ID_IPQ8068			204
#define QCOM_ID_MSM8326			205
#define QCOM_ID_MSM8916			206
#define QCOM_ID_MSM8994			207
#define QCOM_ID_APQ8074PRO_AA		208
#define QCOM_ID_APQ8074PRO_AB		209
#define QCOM_ID_APQ8074PRO_AC		210
#define QCOM_ID_MSM8274PRO_AA		211
#define QCOM_ID_MSM8274PRO_AB		212
#define QCOM_ID_MSM8274PRO_AC		213
#define QCOM_ID_MSM8674PRO_AA		214
#define QCOM_ID_MSM8674PRO_AB		215
#define QCOM_ID_MSM8674PRO_AC		216
#define QCOM_ID_MSM8974PRO_AA		217
#define QCOM_ID_MSM8974PRO_AB		218
#define QCOM_ID_APQ8028			219
#define QCOM_ID_MSM8128			220
#define QCOM_ID_MSM8228			221
#define QCOM_ID_MSM8528			222
#define QCOM_ID_MSM8628			223
#define QCOM_ID_MSM8928			224
#define QCOM_ID_MSM8510			225
#define QCOM_ID_MSM8512			226
#define QCOM_ID_MSM8936			233
#define QCOM_ID_MDM9640			234
#define QCOM_ID_MSM8939			239
#define QCOM_ID_APQ8036			240
#define QCOM_ID_APQ8039			241
#define QCOM_ID_MSM8236			242
#define QCOM_ID_MSM8636			243
#define QCOM_ID_MSM8909			245
#define QCOM_ID_MSM8996			246
#define QCOM_ID_APQ8016			247
#define QCOM_ID_MSM8216			248
#define QCOM_ID_MSM8116			249
#define QCOM_ID_MSM8616			250
#define QCOM_ID_MSM8992			251
#define QCOM_ID_APQ8092			252
#define QCOM_ID_APQ8094			253
#define QCOM_ID_MSM8209			258
#define QCOM_ID_MSM8208			259
#define QCOM_ID_MDM9209			260
#define QCOM_ID_MDM9309			261
#define QCOM_ID_MDM9609			262
#define QCOM_ID_MSM8239			263
#define QCOM_ID_MSM8952			264
#define QCOM_ID_APQ8009			265
#define QCOM_ID_MSM8956			266
#define QCOM_ID_MSM8929			268
#define QCOM_ID_MSM8629			269
#define QCOM_ID_MSM8229			270
#define QCOM_ID_APQ8029			271
#define QCOM_ID_APQ8056			274
#define QCOM_ID_MSM8609			275
#define QCOM_ID_APQ8076			277
#define QCOM_ID_MSM8976			278
#define QCOM_ID_MDM9650			279
#define QCOM_ID_IPQ8065			280
#define QCOM_ID_IPQ8069			281
#define QCOM_ID_MDM9655			283
#define QCOM_ID_MDM9250			284
#define QCOM_ID_MDM9255			285
#define QCOM_ID_MDM9350			286
#define QCOM_ID_APQ8052			289
#define QCOM_ID_MDM9607			290
#define QCOM_ID_APQ8096			291
#define QCOM_ID_MSM8998			292
#define QCOM_ID_MSM8953			293
#define QCOM_ID_MSM8937			294
#define QCOM_ID_APQ8037			295
#define QCOM_ID_MDM8207			296
#define QCOM_ID_MDM9207			297
#define QCOM_ID_MDM9307			298
#define QCOM_ID_MDM9628			299
#define QCOM_ID_MSM8909W		300
#define QCOM_ID_APQ8009W		301
#define QCOM_ID_MSM8996L		302
#define QCOM_ID_MSM8917			303
#define QCOM_ID_APQ8053			304
#define QCOM_ID_MSM8996SG		305
#define QCOM_ID_APQ8017			307
#define QCOM_ID_MSM8217			308
#define QCOM_ID_MSM8617			309
#define QCOM_ID_MSM8996AU		310
#define QCOM_ID_APQ8096AU		311
#define QCOM_ID_APQ8096SG		312
#define QCOM_ID_MSM8940			313
#define QCOM_ID_SDX201			314
#define QCOM_ID_SDM660			317
#define QCOM_ID_SDM630			318
#define QCOM_ID_APQ8098			319
#define QCOM_ID_MSM8920			320
#define QCOM_ID_SDM845			321
#define QCOM_ID_MDM9206			322
#define QCOM_ID_IPQ8074			323
#define QCOM_ID_SDA660			324
#define QCOM_ID_SDM658			325
#define QCOM_ID_SDA658			326
#define QCOM_ID_SDA630			327
#define QCOM_ID_MSM8905			331
#define QCOM_ID_SDX202			333
#define QCOM_ID_SDM670			336
#define QCOM_ID_SDM450			338
#define QCOM_ID_SM8150			339
#define QCOM_ID_SDA845			341
#define QCOM_ID_IPQ8072			342
#define QCOM_ID_IPQ8076			343
#define QCOM_ID_IPQ8078			344
#define QCOM_ID_SDM636			345
#define QCOM_ID_SDA636			346
#define QCOM_ID_SDM632			349
#define QCOM_ID_SDA632			350
#define QCOM_ID_SDA450			351
#define QCOM_ID_SDM439			353
#define QCOM_ID_SDM429			354
#define QCOM_ID_SM8250			356
#define QCOM_ID_SA8155			362
#define QCOM_ID_SDA439			363
#define QCOM_ID_SDA429			364
#define QCOM_ID_SM7150			365
#define QCOM_ID_SM7150P			366
#define QCOM_ID_IPQ8070			375
#define QCOM_ID_IPQ8071			376
#define QCOM_ID_QM215			386
#define QCOM_ID_IPQ8072A		389
#define QCOM_ID_IPQ8074A		390
#define QCOM_ID_IPQ8076A		391
#define QCOM_ID_IPQ8078A		392
#define QCOM_ID_SM6125			394
#define QCOM_ID_IPQ8070A		395
#define QCOM_ID_IPQ8071A		396
#define QCOM_ID_IPQ8172			397
#define QCOM_ID_IPQ8173			398
#define QCOM_ID_IPQ8174			399
#define QCOM_ID_IPQ6018			402
#define QCOM_ID_IPQ6028			403
#define QCOM_ID_SDM429W			416
#define QCOM_ID_SM4250			417
#define QCOM_ID_IPQ6000			421
#define QCOM_ID_IPQ6010			422
#define QCOM_ID_SC7180			425
#define QCOM_ID_SM6350			434
#define QCOM_ID_QCM2150			436
#define QCOM_ID_SDA429W			437
#define QCOM_ID_SM8350			439
#define QCOM_ID_QCM2290			441
#define QCOM_ID_SM7125			443
#define QCOM_ID_SM6115			444
#define QCOM_ID_IPQ5010			446
#define QCOM_ID_IPQ5018			447
#define QCOM_ID_IPQ5028			448
#define QCOM_ID_SC8280XP		449
#define QCOM_ID_IPQ6005			453
#define QCOM_ID_QRB5165			455
#define QCOM_ID_SM8450			457
#define QCOM_ID_SM7225			459
#define QCOM_ID_SA8295P			460
#define QCOM_ID_SA8540P			461
#define QCOM_ID_QCM4290			469
#define QCOM_ID_QCS4290			470
#define QCOM_ID_SM7325			475
#define QCOM_ID_SM8450_2		480
#define QCOM_ID_SM8450_3		482
#define QCOM_ID_SC7280			487
#define QCOM_ID_SC7180P			495
#define QCOM_ID_QCM6490			497
#define QCOM_ID_SM7325P			499
#define QCOM_ID_IPQ5000			503
#define QCOM_ID_IPQ0509			504
#define QCOM_ID_IPQ0518			505
#define QCOM_ID_SM6375			507
#define QCOM_ID_IPQ9514			510
#define QCOM_ID_IPQ9550			511
#define QCOM_ID_IPQ9554			512
#define QCOM_ID_IPQ9570			513
#define QCOM_ID_IPQ9574			514
#define QCOM_ID_SM8550			519
#define QCOM_ID_IPQ5016			520
#define QCOM_ID_IPQ9510			521
#define QCOM_ID_QRB4210			523
#define QCOM_ID_QRB2210			524
#define QCOM_ID_SAR2130P		525
#define QCOM_ID_SM8475			530
#define QCOM_ID_SM8475P			531
#define QCOM_ID_SA8255P			532
#define QCOM_ID_SA8775P			534
#define QCOM_ID_QRU1000			539
#define QCOM_ID_SM8475_2		540
#define QCOM_ID_QDU1000			545
#define QCOM_ID_X1E80100		555
#define QCOM_ID_SM8650			557
#define QCOM_ID_SM4450			568
#define QCOM_ID_SAR1130P		579
#define QCOM_ID_QDU1010			587
#define QCOM_ID_QRU1032			588
#define QCOM_ID_QRU1052			589
#define QCOM_ID_QRU1062			590
#define QCOM_ID_IPQ5332			592
#define QCOM_ID_IPQ5322			593
#define QCOM_ID_IPQ5312			594
#define QCOM_ID_IPQ5302			595
#define QCOM_ID_QCS8550			603
#define QCOM_ID_QCM8550			604
#define QCOM_ID_IPQ5300			624
#define QCOM_ID_IPQ5321			650
#define QCOM_ID_IPQ5424			651
#define QCOM_ID_IPQ5404			671
#define QCOM_ID_QCS9100			667
#define QCOM_ID_QCS8300			674
#define QCOM_ID_QCS8275			675
#define QCOM_ID_QCS9075			676
#define QCOM_ID_QCS615			680

/*
 * The board type and revision information, used by Qualcomm bootloaders and
 * DTS for older chipsets (qcom,board-id):
 */
#define QCOM_BOARD_ID(a, major, minor) \
	(((major & 0xff) << 16) | ((minor & 0xff) << 8) | QCOM_BOARD_ID_##a)

#define QCOM_BOARD_ID_MTP			8
#define QCOM_BOARD_ID_DRAGONBOARD		10
#define QCOM_BOARD_ID_QRD			11
#define QCOM_BOARD_ID_SBC			24

#endif /* _DT_BINDINGS_ARM_QCOM_IDS_H */
