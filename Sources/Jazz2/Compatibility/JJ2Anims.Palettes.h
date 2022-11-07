﻿#pragma once

#include "../../nCine/Primitives/Color.h"

using namespace nCine;

static constexpr uint8_t ToasterPowerUpFix[] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
	21, 22, 23, /*<*/88, 89, 90, 91, 92, 93, 94/*>*/, 31, /*<*/40, 41, 42, 43, 44, 45/*>*/, 38, 39, 40,
	41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
	61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, /*<*/41, 42, 43, 44/*>*/, 77, 78, 79, 80,
	81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
	101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
	121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140,
	141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160,
	161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180,
	181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200,
	201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220,
	221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240,
	241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255
};

static constexpr Color MenuPalette[] = {
	Color(0, 0, 0, 0), // 0
	Color(0, 0, 1, 255), // 1
	Color(0, 1, 0, 255), // 2
	Color(1, 0, 0, 255), // 3
	Color(0, 1, 1, 255), // 4
	Color(1, 0, 1, 255), // 5
	Color(1, 1, 0, 255), // 6
	Color(1, 1, 1, 255), // 7
	Color(0, 0, 2, 255), // 8
	Color(0, 1, 2, 255), // 9
	Color(127, 115, 95, 255), // 10
	Color(159, 143, 119, 255), // 11
	Color(191, 175, 151, 255), // 12
	Color(223, 207, 179, 255), // 13
	Color(255, 243, 211, 255), // 14
	Color(255, 255, 254, 255), // 15
	Color(247, 255, 223, 255), // 16
	Color(235, 255, 183, 255), // 17
	Color(227, 255, 147, 255), // 18
	Color(219, 255, 111, 255), // 19
	Color(199, 255, 0, 255), // 20
	Color(163, 231, 0, 255), // 21
	Color(127, 207, 0, 255), // 22
	Color(99, 183, 0, 255), // 23
	Color(75, 159, 0, 255), // 24
	Color(39, 139, 0, 255), // 25
	Color(11, 119, 0, 255), // 26
	Color(0, 99, 7, 255), // 27
	Color(0, 79, 19, 255), // 28
	Color(0, 59, 23, 255), // 29
	Color(0, 39, 23, 255), // 30
	Color(0, 19, 16, 255), // 31
	Color(251, 255, 235, 255), // 32
	Color(251, 255, 215, 255), // 33
	Color(251, 255, 199, 255), // 34
	Color(255, 247, 183, 255), // 35
	Color(255, 239, 167, 255), // 36
	Color(255, 227, 151, 255), // 37
	Color(255, 211, 135, 255), // 38
	Color(255, 195, 119, 255), // 39
	Color(223, 179, 115, 255), // 40
	Color(195, 167, 107, 255), // 41
	Color(163, 147, 95, 255), // 42
	Color(135, 123, 87, 255), // 43
	Color(107, 99, 71, 255), // 44
	Color(75, 75, 55, 255), // 45
	Color(47, 47, 35, 255), // 46
	Color(19, 19, 15, 255), // 47
	Color(235, 239, 255, 255), // 48
	Color(191, 207, 251, 255), // 49
	Color(155, 179, 247, 255), // 50
	Color(115, 155, 243, 255), // 51
	Color(79, 131, 239, 255), // 52
	Color(43, 115, 235, 255), // 53
	Color(19, 103, 219, 255), // 54
	Color(0, 91, 203, 255), // 55
	Color(0, 83, 179, 255), // 56
	Color(0, 75, 159, 255), // 57
	Color(0, 71, 135, 255), // 58
	Color(0, 63, 115, 255), // 59
	Color(0, 51, 95, 255), // 60
	Color(0, 43, 71, 255), // 61
	Color(0, 31, 51, 255), // 62
	Color(0, 20, 31, 255), // 63
	Color(255, 223, 223, 255), // 64
	Color(255, 183, 183, 255), // 65
	Color(255, 147, 147, 255), // 66
	Color(255, 111, 111, 255), // 67
	Color(255, 71, 71, 255), // 68
	Color(255, 35, 35, 255), // 69
	Color(255, 0, 0, 255), // 70
	Color(227, 0, 11, 255), // 71
	Color(199, 0, 35, 255), // 72
	Color(175, 0, 55, 255), // 73
	Color(147, 0, 71, 255), // 74
	Color(123, 0, 75, 255), // 75
	Color(95, 0, 71, 255), // 76
	Color(71, 0, 63, 255), // 77
	Color(39, 0, 43, 255), // 78
	Color(15, 0, 19, 255), // 79
	Color(255, 251, 223, 255), // 80
	Color(255, 243, 147, 255), // 81
	Color(255, 239, 71, 255), // 82
	Color(255, 215, 59, 255), // 83
	Color(255, 195, 47, 255), // 84
	Color(255, 167, 35, 255), // 85
	Color(255, 143, 23, 255), // 86
	Color(235, 115, 47, 255), // 87
	Color(219, 103, 67, 255), // 88
	Color(203, 95, 87, 255), // 89
	Color(171, 83, 59, 255), // 90
	Color(139, 71, 39, 255), // 91
	Color(111, 59, 23, 255), // 92
	Color(79, 47, 11, 255), // 93
	Color(47, 35, 0, 255), // 94
	Color(19, 15, 0, 255), // 95
	Color(0, 255, 67, 255), // 96
	Color(0, 235, 75, 255), // 97
	Color(0, 215, 83, 255), // 98
	Color(0, 199, 87, 255), // 99
	Color(0, 179, 91, 255), // 100
	Color(0, 163, 91, 255), // 101
	Color(0, 147, 87, 255), // 102
	Color(0, 131, 79, 255), // 103
	Color(0, 119, 75, 255), // 104
	Color(0, 103, 67, 255), // 105
	Color(0, 91, 59, 255), // 106
	Color(0, 75, 51, 255), // 107
	Color(0, 59, 43, 255), // 108
	Color(0, 47, 35, 255), // 109
	Color(0, 31, 23, 255), // 110
	Color(0, 19, 15, 255), // 111
	Color(251, 223, 255, 255), // 112
	Color(243, 175, 255, 255), // 113
	Color(235, 131, 255, 255), // 114
	Color(231, 87, 255, 255), // 115
	Color(223, 43, 255, 255), // 116
	Color(215, 0, 255, 255), // 117
	Color(191, 0, 231, 255), // 118
	Color(171, 0, 207, 255), // 119
	Color(151, 0, 183, 255), // 120
	Color(131, 0, 159, 255), // 121
	Color(111, 0, 135, 255), // 122
	Color(91, 0, 111, 255), // 123
	Color(71, 0, 87, 255), // 124
	Color(51, 0, 63, 255), // 125
	Color(31, 0, 43, 255), // 126
	Color(16, 0, 19, 255), // 127
	Color(247, 251, 255, 255), // 128
	Color(215, 227, 235, 255), // 129
	Color(183, 203, 219, 255), // 130
	Color(159, 179, 203, 255), // 131
	Color(135, 159, 183, 255), // 132
	Color(111, 139, 167, 255), // 133
	Color(91, 123, 151, 255), // 134
	Color(75, 107, 139, 255), // 135
	Color(59, 95, 127, 255), // 136
	Color(47, 83, 115, 255), // 137
	Color(35, 71, 103, 255), // 138
	Color(27, 63, 91, 255), // 139
	Color(15, 51, 75, 255), // 140
	Color(7, 39, 59, 255), // 141
	Color(0, 27, 43, 255), // 142
	Color(0, 19, 31, 255), // 143
	Color(223, 0, 255, 255), // 144
	Color(215, 0, 247, 255), // 145
	Color(207, 0, 243, 255), // 146
	Color(199, 0, 235, 255), // 147
	Color(191, 0, 227, 255), // 148
	Color(183, 0, 223, 255), // 149
	Color(175, 0, 215, 255), // 150
	Color(167, 0, 211, 255), // 151
	Color(159, 1, 203, 255), // 152
	Color(155, 0, 199, 255), // 153
	Color(147, 0, 191, 255), // 154
	Color(143, 0, 187, 255), // 155
	Color(135, 0, 179, 255), // 156
	Color(127, 0, 171, 255), // 157
	Color(123, 0, 167, 255), // 158
	Color(115, 0, 159, 255), // 159
	Color(111, 1, 155, 255), // 160
	Color(103, 0, 147, 255), // 161
	Color(99, 0, 143, 255), // 162
	Color(91, 0, 135, 255), // 163
	Color(87, 0, 131, 255), // 164
	Color(83, 0, 123, 255), // 165
	Color(75, 0, 119, 255), // 166
	Color(71, 0, 111, 255), // 167
	Color(67, 0, 103, 255), // 168
	Color(59, 0, 99, 255), // 169
	Color(55, 0, 91, 255), // 170
	Color(51, 0, 87, 255), // 171
	Color(47, 0, 79, 255), // 172
	Color(43, 0, 75, 255), // 173
	Color(39, 0, 67, 255), // 174
	Color(35, 0, 63, 255), // 175
	Color(215, 39, 203, 255), // 176
	Color(199, 35, 187, 255), // 177
	Color(183, 31, 175, 255), // 178
	Color(171, 31, 163, 255), // 179
	Color(155, 27, 147, 255), // 180
	Color(143, 23, 135, 255), // 181
	Color(127, 23, 119, 255), // 182
	Color(115, 19, 107, 255), // 183
	Color(99, 15, 95, 255), // 184
	Color(83, 15, 79, 255), // 185
	Color(71, 11, 67, 255), // 186
	Color(55, 7, 51, 255), // 187
	Color(43, 7, 39, 255), // 188
	Color(31, 0, 27, 255), // 189
	Color(19, 0, 15, 255), // 190
	Color(7, 0, 7, 255), // 191
	Color(255, 254, 255, 255), // 192
	Color(255, 255, 215, 255), // 193
	Color(255, 255, 179, 255), // 194
	Color(255, 255, 143, 255), // 195
	Color(255, 255, 107, 255), // 196
	Color(255, 255, 71, 255), // 197
	Color(255, 255, 35, 255), // 198
	Color(255, 255, 0, 255), // 199
	Color(247, 247, 0, 255), // 200
	Color(239, 239, 0, 255), // 201
	Color(231, 231, 0, 255), // 202
	Color(223, 223, 0, 255), // 203
	Color(215, 215, 0, 255), // 204
	Color(207, 207, 0, 255), // 205
	Color(199, 199, 0, 255), // 206
	Color(191, 191, 0, 255), // 207
	Color(35, 0, 87, 255), // 208
	Color(39, 0, 95, 255), // 209
	Color(43, 0, 99, 255), // 210
	Color(47, 0, 107, 255), // 211
	Color(51, 0, 115, 255), // 212
	Color(59, 0, 123, 255), // 213
	Color(63, 0, 131, 255), // 214
	Color(67, 0, 139, 255), // 215
	Color(75, 0, 147, 255), // 216
	Color(79, 0, 155, 255), // 217
	Color(87, 0, 163, 255), // 218
	Color(91, 0, 171, 255), // 219
	Color(99, 0, 179, 255), // 220
	Color(103, 0, 187, 255), // 221
	Color(111, 0, 195, 255), // 222
	Color(119, 0, 203, 255), // 223
	Color(51, 1, 87, 255), // 224
	Color(55, 0, 95, 255), // 225
	Color(63, 0, 99, 255), // 226
	Color(67, 0, 107, 255), // 227
	Color(75, 0, 115, 255), // 228
	Color(79, 0, 123, 255), // 229
	Color(88, 0, 131, 255), // 230
	Color(95, 0, 139, 255), // 231
	Color(104, 0, 147, 255), // 232
	Color(111, 0, 155, 255), // 233
	Color(115, 0, 163, 255), // 234
	Color(123, 0, 171, 255), // 235
	Color(131, 0, 179, 255), // 236
	Color(139, 0, 187, 255), // 237
	Color(151, 0, 195, 255), // 238
	Color(159, 0, 203, 255), // 239
	Color(0, 255, 195, 255), // 240
	Color(0, 227, 167, 255), // 241
	Color(0, 199, 143, 255), // 242
	Color(0, 171, 123, 255), // 243
	Color(0, 143, 99, 255), // 244
	Color(0, 115, 79, 255), // 245
	Color(247, 211, 255, 255), // 246
	Color(247, 212, 255, 255), // 247
	Color(248, 211, 255, 255), // 248
	Color(248, 212, 255, 255), // 249
	Color(246, 211, 255, 255), // 250
	Color(246, 212, 255, 255), // 251
	Color(246, 210, 255, 255), // 252
	Color(247, 210, 255, 255), // 253
	Color(248, 210, 255, 255), // 254
	Color(254, 255, 255, 255) // 255
};

static constexpr Color SpritePalette[] = {
	Color(0, 0, 0, 0), // 0
	Color(0, 0, 1, 255), // 1
	Color(0, 1, 0, 255), // 2
	Color(1, 0, 0, 255), // 3
	Color(0, 1, 1, 255), // 4
	Color(1, 0, 1, 255), // 5
	Color(1, 1, 0, 255), // 6
	Color(1, 1, 1, 255), // 7
	Color(0, 0, 2, 255), // 8
	Color(0, 1, 2, 255), // 9
	Color(255, 67, 195, 255), // 10
	Color(174, 176, 188, 255), // 11
	Color(63, 237, 224, 255), // 12
	Color(160, 153, 218, 255), // 13
	Color(36, 38, 50, 255), // 14
	Color(255, 255, 254, 255), // 15
	Color(199, 255, 0, 255), // 16
	Color(147, 223, 0, 255), // 17
	Color(107, 191, 0, 255), // 18
	Color(71, 163, 0, 255), // 19
	Color(43, 131, 0, 255), // 20
	Color(19, 103, 0, 255), // 21
	Color(7, 55, 0, 255), // 22
	Color(0, 12, 0, 255), // 23
	Color(255, 0, 0, 255), // 24
	Color(227, 0, 0, 255), // 25
	Color(199, 0, 0, 255), // 26
	Color(171, 0, 0, 255), // 27
	Color(143, 0, 0, 255), // 28
	Color(115, 0, 0, 255), // 29
	Color(63, 0, 0, 255), // 30
	Color(12, 0, 0, 255), // 31
	Color(187, 227, 255, 255), // 32
	Color(123, 199, 255, 255), // 33
	Color(59, 171, 255, 255), // 34
	Color(0, 139, 255, 255), // 35
	Color(0, 107, 203, 255), // 36
	Color(0, 79, 151, 255), // 37
	Color(0, 47, 79, 255), // 38
	Color(0, 7, 11, 255), // 39
	Color(255, 255, 0, 255), // 40
	Color(255, 199, 0, 255), // 41
	Color(255, 147, 0, 255), // 42
	Color(255, 95, 0, 255), // 43
	Color(203, 55, 0, 255), // 44
	Color(155, 27, 0, 255), // 45
	Color(83, 7, 0, 255), // 46
	Color(11, 0, 0, 255), // 47
	Color(251, 139, 183, 255), // 48
	Color(247, 91, 151, 255), // 49
	Color(243, 43, 123, 255), // 50
	Color(239, 0, 99, 255), // 51
	Color(191, 0, 75, 255), // 52
	Color(147, 0, 55, 255), // 53
	Color(99, 0, 35, 255), // 54
	Color(55, 0, 19, 255), // 55
	Color(56, 176, 181, 255), // 56
	Color(78, 219, 201, 255), // 57
	Color(202, 198, 245, 255), // 58
	Color(219, 195, 0, 255), // 59
	Color(187, 147, 0, 255), // 60
	Color(155, 107, 0, 255), // 61
	Color(83, 55, 0, 255), // 62
	Color(11, 7, 0, 255), // 63
	Color(255, 243, 211, 255), // 64
	Color(219, 207, 175, 255), // 65
	Color(187, 175, 147, 255), // 66
	Color(155, 139, 115, 255), // 67
	Color(119, 107, 87, 255), // 68
	Color(87, 75, 63, 255), // 69
	Color(47, 35, 31, 255), // 70
	Color(11, 7, 7, 255), // 71
	Color(211, 231, 255, 255), // 72
	Color(171, 195, 219, 255), // 73
	Color(139, 159, 187, 255), // 74
	Color(107, 127, 155, 255), // 75
	Color(75, 95, 119, 255), // 76
	Color(51, 63, 87, 255), // 77
	Color(27, 31, 47, 255), // 78
	Color(7, 7, 11, 255), // 79
	Color(0, 255, 163, 255), // 80
	Color(0, 227, 127, 255), // 81
	Color(7, 199, 95, 255), // 82
	Color(7, 171, 67, 255), // 83
	Color(11, 143, 47, 255), // 84
	Color(11, 119, 31, 255), // 85
	Color(0, 63, 7, 255), // 86
	Color(0, 11, 0, 255), // 87
	Color(219, 99, 255, 255), // 88
	Color(207, 47, 255, 255), // 89
	Color(199, 0, 255, 255), // 90
	Color(159, 0, 207, 255), // 91
	Color(119, 0, 159, 255), // 92
	Color(83, 0, 111, 255), // 93
	Color(47, 0, 63, 255), // 94
	Color(11, 0, 15, 255), // 95
	Color(207, 0, 143, 255), // 96
	Color(191, 0, 131, 255), // 97
	Color(175, 0, 123, 255), // 98
	Color(163, 7, 111, 255), // 99
	Color(147, 7, 103, 255), // 100
	Color(135, 7, 91, 255), // 101
	Color(119, 7, 83, 255), // 102
	Color(103, 7, 71, 255), // 103
	Color(91, 7, 63, 255), // 104
	Color(79, 7, 55, 255), // 105
	Color(67, 0, 51, 255), // 106
	Color(55, 0, 43, 255), // 107
	Color(43, 0, 35, 255), // 108
	Color(31, 0, 27, 255), // 109
	Color(19, 0, 15, 255), // 110
	Color(7, 0, 7, 255), // 111
	Color(211, 59, 255, 255), // 112
	Color(183, 43, 239, 255), // 113
	Color(159, 31, 223, 255), // 114
	Color(135, 23, 207, 255), // 115
	Color(111, 11, 191, 255), // 116
	Color(91, 7, 175, 255), // 117
	Color(71, 0, 159, 255), // 118
	Color(55, 0, 143, 255), // 119
	Color(39, 0, 127, 255), // 120
	Color(31, 0, 111, 255), // 121
	Color(19, 0, 95, 255), // 122
	Color(11, 0, 79, 255), // 123
	Color(7, 0, 63, 255), // 124
	Color(0, 0, 47, 255), // 125
	Color(0, 0, 31, 255), // 126
	Color(0, 0, 15, 255), // 127
	Color(0, 255, 247, 255), // 128
	Color(0, 231, 223, 255), // 129
	Color(0, 207, 203, 255), // 130
	Color(0, 183, 179, 255), // 131
	Color(0, 159, 155, 255), // 132
	Color(0, 135, 131, 255), // 133
	Color(0, 111, 111, 255), // 134
	Color(0, 99, 99, 255), // 135
	Color(0, 87, 87, 255), // 136
	Color(0, 79, 79, 255), // 137
	Color(0, 67, 67, 255), // 138
	Color(0, 55, 56, 255), // 139
	Color(0, 47, 47, 255), // 140
	Color(0, 35, 35, 255), // 141
	Color(0, 23, 23, 255), // 142
	Color(0, 15, 15, 255), // 143
	Color(119, 27, 199, 255), // 144
	Color(103, 23, 187, 255), // 145
	Color(87, 19, 175, 255), // 146
	Color(71, 15, 167, 255), // 147
	Color(59, 15, 155, 255), // 148
	Color(47, 11, 147, 255), // 149
	Color(35, 11, 135, 255), // 150
	Color(27, 7, 123, 255), // 151
	Color(15, 7, 115, 255), // 152
	Color(7, 7, 103, 255), // 153
	Color(0, 0, 95, 255), // 154
	Color(0, 7, 83, 255), // 155
	Color(0, 7, 71, 255), // 156
	Color(0, 11, 63, 255), // 157
	Color(0, 11, 51, 255), // 158
	Color(0, 12, 43, 255), // 159
	Color(0, 139, 175, 255), // 160
	Color(0, 131, 163, 255), // 161
	Color(0, 127, 151, 255), // 162
	Color(0, 119, 143, 255), // 163
	Color(0, 111, 131, 255), // 164
	Color(0, 103, 119, 255), // 165
	Color(0, 95, 111, 255), // 166
	Color(0, 87, 99, 255), // 167
	Color(0, 79, 87, 255), // 168
	Color(0, 71, 79, 255), // 169
	Color(0, 63, 67, 255), // 170
	Color(0, 55, 55, 255), // 171
	Color(95, 183, 183, 255), // 172
	Color(141, 131, 214, 255), // 173
	Color(207, 177, 28, 255), // 174
	Color(65, 168, 179, 255), // 175
	Color(107, 71, 251, 255), // 176
	Color(99, 67, 243, 255), // 177
	Color(95, 67, 239, 255), // 178
	Color(91, 63, 231, 255), // 179
	Color(83, 59, 227, 255), // 180
	Color(79, 55, 219, 255), // 181
	Color(71, 55, 211, 255), // 182
	Color(67, 51, 207, 255), // 183
	Color(63, 51, 199, 255), // 184
	Color(59, 47, 195, 255), // 185
	Color(55, 43, 187, 255), // 186
	Color(51, 43, 183, 255), // 187
	Color(43, 39, 175, 255), // 188
	Color(43, 39, 171, 255), // 189
	Color(39, 35, 163, 255), // 190
	Color(35, 35, 159, 255), // 191
	Color(31, 31, 151, 255), // 192
	Color(31, 31, 147, 255), // 193
	Color(27, 31, 139, 255), // 194
	Color(27, 31, 135, 255), // 195
	Color(23, 31, 127, 255), // 196
	Color(23, 31, 123, 255), // 197
	Color(19, 31, 111, 255), // 198
	Color(15, 27, 103, 255), // 199
	Color(11, 23, 91, 255), // 200
	Color(7, 19, 79, 255), // 201
	Color(7, 19, 71, 255), // 202
	Color(0, 15, 63, 255), // 203
	Color(0, 11, 55, 255), // 204
	Color(0, 11, 43, 255), // 205
	Color(0, 7, 35, 255), // 206
	Color(0, 7, 27, 255), // 207

	Color(120, 226, 220, 255), // 208
	Color(82, 205, 193, 255), // 209
	Color(98, 100, 112, 255), // 210
	Color(60, 251, 232, 255), // 211
	Color(96, 187, 169, 255), // 212
	Color(191, 255, 255, 255), // 213
	Color(209, 255, 255, 255), // 214
	Color(64, 152, 152, 255), // 215
	Color(203, 255, 255, 255), // 216
	Color(121, 147, 218, 255), // 217
	Color(209, 158, 33, 255), // 218
	Color(113, 106, 171, 255), // 219
	Color(152, 154, 166, 255), // 220
	Color(115, 144, 197, 255), // 221
	Color(214, 255, 255, 255), // 222
	Color(182, 190, 11, 255), // 223
	Color(197, 211, 252, 255), // 224
	Color(26, 146, 151, 255), // 225
	Color(207, 255, 255, 255), // 226
	Color(75, 71, 118, 255), // 227
	Color(158, 125, 250, 255), // 228
	Color(123, 155, 190, 255), // 229
	Color(126, 214, 214, 255), // 230
	Color(197, 199, 211, 255), // 231
	Color(33, 168, 185, 255), // 232
	Color(85, 75, 158, 255), // 233
	Color(47, 138, 120, 255), // 234
	Color(101, 174, 162, 255), // 235
	Color(67, 93, 164, 255), // 236
	Color(27, 201, 188, 255), // 237
	Color(124, 129, 224, 255), // 238
	Color(86, 56, 163, 255), // 239
	Color(30, 133, 144, 255), // 240
	Color(182, 193, 252, 255), // 241
	Color(89, 195, 189, 255), // 242
	Color(173, 255, 255, 255), // 243
	Color(86, 100, 141, 255), // 244
	Color(222, 116, 25, 255), // 245
	Color(0, 2, 1, 255), // 246
	Color(0, 2, 2, 255), // 247
	Color(1, 0, 2, 255), // 248
	Color(2, 0, 1, 255), // 249
	Color(2, 0, 2, 255), // 250
	Color(1, 2, 0, 255), // 251
	Color(2, 1, 0, 255), // 252
	Color(2, 2, 0, 255), // 253
	Color(1, 1, 2, 255), // 254
	Color(254, 255, 255, 255) // 255
};