/* Copyright 2022 Marcos Ivan Chow Castro
 * Inspired by Stephen Bösebeck
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// #pragma once

// #include <dt-bindings/zmk/keys.h>

#define XXX &none
#define ___ &trans

// Apple "Globe" key
// https://github.com/zmkfirmware/zmk/issues/947
// #define GLOBE CAPSLOCK

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_CIRC &kp GRAVE // ^ (dead)
#define DE_1    &kp N1    // 1
#define DE_2    &kp N2    // 2
#define DE_3    &kp N3    // 3
#define DE_4    &kp N4    // 4
#define DE_5    &kp N5    // 5
#define DE_6    &kp N6    // 6
#define DE_7    &kp N7    // 7
#define DE_8    &kp N8    // 8
#define DE_9    &kp N9    // 9
#define DE_0    &kp N0    // 0
#define DE_SS   &kp MINUS // ß
#define DE_ACUT &kp EQUAL // ´ (dead)
// Row 2
#define DE_Q    &kp Q    // Q
#define DE_W    &kp W    // W
#define DE_E    &kp E    // E
#define DE_R    &kp R    // R
#define DE_T    &kp T    // T
#define DE_Z    &kp Y    // Z
#define DE_U    &kp U    // U
#define DE_I    &kp I    // I
#define DE_O    &kp O    // O
#define DE_P    &kp P    // P
#define DE_UDIA &kp LBKT // Ü
#define DE_PLUS &kp RPAR // +
// Row 3
#define DE_A    &kp A    // A
#define DE_S    &kp S    // S
#define DE_D    &kp D    // D
#define DE_F    &kp F    // F
#define DE_G    &kp G    // G
#define DE_H    &kp H    // H
#define DE_J    &kp J    // J
#define DE_K    &kp K    // K
#define DE_L    &kp L    // L
#define DE_ODIA &kp SEMI // Ö
#define DE_ADIA &kp APOS // Ä
#define DE_HASH &kp BSLH // #
// Row 4
#define DE_LABK &kp GRAVE // <
#define DE_Y    &kp Z    // Y
#define DE_X    &kp X    // X
#define DE_C    &kp C    // C
#define DE_V    &kp V    // V
#define DE_B    &kp B    // B
#define DE_N    &kp N    // N
#define DE_M    &kp M    // M
#define DE_COMM &kp COMMA // ,
#define DE_DOT  &kp DOT  // .
#define DE_MINS &kp SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_DEG  LS(GRAVE) // °
#define DE_EXLM LS(N1)    // !
#define DE_DQUO LS(N2)    // "
#define DE_SECT LS(N3)    // §
#define DE_DLR  LS(N4)    // $
#define DE_PERC LS(N5)    // %
#define DE_AMPR LS(N6)    // &
#define DE_SLSH LS(N7)    // /
#define DE_LPRN LS(N8)    // (
#define DE_RPRN LS(N9)    // )
#define DE_EQL  LS(N0)    // =
#define DE_QUES LS(MINUS)   // ?
#define DE_GRV  LS(EQUAL) // ` (dead)
// Row 2
#define DE_ASTR LS(RPAR) // *
// Row 3
#define DE_QUOT LS(BSLH) // '
// Row 4
#define DE_RABK LS(GRAVE) // >
#define DE_SCLN LS(COMMA) // ;
#define DE_COLN LS(DOT)  // :
#define DE_UNDS LS(SLASH) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_DLQU LA(GRAVE)   // „
#define DE_IEXL LA(N1)    // ¡
#define DE_LDQU LA(N2)    // “
#define DE_PILC LA(N3)    // ¶
#define DE_CENT LA(N4)    // ¢
#define DE_LBRC LA(N5)    // [
#define DE_RBRC LA(N6)    // ]
#define DE_PIPE LA(N7)    // |
#define DE_LCBR LA(N8)    // {
#define DE_RCBR LA(N9)    // }
#define DE_NEQL LA(N0)    // ≠
#define DE_IQUE LA(MINUS)   // ¿
// Row 2
#define DE_LDAQ LA(Q)    // «
#define DE_NARS LA(W)    // ∑
#define DE_EURO LA(E)    // €
#define DE_REGD LA(R)    // ®
#define DE_DAGG LA(T)    // †
#define DE_OMEG LA(Z)    // Ω
#define DE_DIAE LA(U)    // ¨ (dead)
#define DE_FRSL LA(I)    // ⁄
#define DE_OSTR LA(O)    // Ø
#define DE_PI   LA(P)    // π
#define DE_BULT LA(LBKT) // •
#define DE_PLMN LA(RBKT) // ±
// Row 3
#define DE_ARNG LA(A)    // Å
#define DE_SLQU LA(S)    // ‚
#define DE_PDIF LA(D)    // ∂
#define DE_FHK  LA(F)    // ƒ
#define DE_COPY LA(G)    // ©
#define DE_FORD LA(H)    // ª
#define DE_MORD LA(J)    // º
#define DE_INCR LA(K)    // ∆
#define DE_AT   LA(L)    // @
#define DE_OE   LA(SEMICOLON) // Œ
#define DE_AE   LA(APOS) // Æ
#define DE_LSQU LA(BSLH) // ‘
// Row 4
#define DE_LTEQ LA(GRAVE) // ≤
#define DE_YEN  LA(Y)    // ¥
#define DE_AEQL LA(X)    // ≈
#define DE_CCCE LA(C)    // Ç
#define DE_SQRT LA(V)    // √
#define DE_INTG LA(B)    // ∫
#define DE_TILD LA(N)    // ~ (dead)
#define DE_MICR LA(M)    // µ
#define DE_INFN LA(COMMA) // ∞
#define DE_ELLP LA(DOT)  // …
#define DE_NDSH LA(MINS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_NOT  S(LA(N1))    // ¬
#define DE_RDQU LS(LA(N2))    // ”
#define DE_PND  LS(LA(N4))    // £
#define DE_FI   LS(LA(N5))    // ﬁ
#define DE_BSLS LS(LA(N7))    // (backslash)
#define DE_STIL LS(LA(N8))    // ˜
#define DE_MDDT LS(LA(N9))    // ·
#define DE_MACR LS(LA(N0))    // ¯
#define DE_DOTA LS(LA(MINUS))   // ˙
#define DE_RNGA LS(LA(EQUAL)) // ˚
// Row 2
#define DE_RDAQ LS(LA(Q))    // »
#define DE_PERM LS(LA(E))    // ‰
#define DE_CEDL LS(LA(R))    // ¸
#define DE_DACU LS(LA(T))    // ˝
#define DE_CARN LS(LA(Z))    // ˇ
#define DE_AACU LS(LA(U))    // Á
#define DE_UCIR LS(LA(I))    // Û
#define DE_NARP LS(LA(P))    // ∏
#define DE_APPL LS(LA(RPAR)) //  (Apple logo)
// Row 3
#define DE_IACU LS(LA(S))    // Í
#define DE_TM   LS(LA(D))    // ™
#define DE_IDIA LS(LA(F))    // Ï
#define DE_IGRV LS(LA(G))    // Ì
#define DE_OACU LS(LA(H))    // Ó
#define DE_DLSI LS(LA(J))    // ı
#define DE_FL   LS(LA(L))    // ﬂ
// Row 4
#define DE_GTEQ LS(LA(GRAVE)) // ≥
#define DE_DDAG LS(LA(Y))    // ‡
#define DE_UGRV LS(LA(X))    // Ù
#define DE_LOZN LS(LA(V))    // ◊
#define DE_LSAQ LS(LA(B))    // ‹
#define DE_RSAQ LS(LA(N))    // ›
#define DE_BREV LS(LA(M))    // ˘
#define DE_OGON LS(LA(COMMA)) // ˛
#define DE_DIV  LS(LA(DOT))  // ÷
#define DE_MDSH LS(LA(MINS)) // —