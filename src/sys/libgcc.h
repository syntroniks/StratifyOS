/* Copyright 2011-2017 Tyler Gilbert;
 * This file is part of Stratify OS.
 *
 * Stratify OS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Stratify OS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Stratify OS.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 */

#ifndef LIBGCC_H_
#define LIBGCC_H_

#include <stdint.h>

extern uint32_t __aeabi_uidiv();
extern uint32_t __aeabi_uidivmod();
extern uint32_t __aeabi_idiv();
extern uint32_t __aeabi_idivmod();
extern uint32_t __umodsi3();
extern uint32_t __modsi3();
extern void __div0();
extern uint32_t __aeabi_llsr();
extern uint32_t __aeabi_lasr();
extern uint32_t __aeabi_llsl();
extern uint32_t __aeabi_dneg();
extern uint32_t __aeabi_drsub();
extern uint32_t __aeabi_dsub();
extern uint32_t __adddf3();
extern uint32_t __aeabi_ui2d();
extern uint32_t __aeabi_i2d();
extern uint32_t __aeabi_f2d();
extern uint32_t __aeabi_ul2d();
extern uint32_t __aeabi_l2d();
extern uint32_t __aeabi_dmul();
extern uint32_t __aeabi_ddiv();
extern uint32_t __gedf2();
extern uint32_t __ledf2();
extern uint32_t __cmpdf2();
extern uint32_t __aeabi_cdrcmple();
extern uint32_t __aeabi_cdcmpeq();
extern uint32_t __aeabi_dcmpeq();
extern uint32_t __aeabi_dcmplt();
extern uint32_t __aeabi_dcmple();
extern uint32_t __aeabi_dcmpge();
extern uint32_t __aeabi_dcmpgt();
extern uint32_t __aeabi_dcmpun();
extern uint32_t __aeabi_d2iz();
extern uint32_t __aeabi_d2uiz();
extern uint32_t __aeabi_d2f();
extern uint32_t __aeabi_fneg();
extern uint32_t __aeabi_frsub();
extern uint32_t __aeabi_fsub();
extern uint32_t __aeabi_fadd();
extern uint32_t __addsf3();
extern uint32_t __aeabi_ui2f();
extern uint32_t __aeabi_i2f();
extern uint32_t __aeabi_ul2f();
extern uint32_t __aeabi_l2f();
extern uint32_t __aeabi_fmul();
extern uint32_t __aeabi_fdiv();
extern uint32_t __gesf2();
extern uint32_t __lesf2();
extern uint32_t __cmpsf2();
extern uint32_t __aeabi_cfrcmple();
extern uint32_t __aeabi_cfcmpeq();
extern uint32_t __aeabi_fcmpeq();
extern uint32_t __aeabi_fcmplt();
extern uint32_t __aeabi_fcmple();
extern uint32_t __aeabi_fcmpge();
extern uint32_t __aeabi_fcmpgt();
extern uint32_t __aeabi_fcmpun();
extern uint32_t __aeabi_f2iz();
extern uint32_t __aeabi_f2uiz();
extern uint32_t __aeabi_f2ulz();
extern uint32_t __clzsi2();
extern uint32_t __clzdi2();
extern uint32_t __muldi3();
extern uint32_t __negdi2();
extern uint32_t __cmpdi2();
extern uint32_t __ucmpdi2();
extern uint32_t __absvsi2();
extern uint32_t __absvdi2();
extern uint32_t __addvsi3();
extern uint32_t __addvdi3();
extern uint32_t __subvsi3();
extern uint32_t __subvdi3();
extern uint32_t __mulvsi3();
extern uint32_t __mulvdi3();
extern uint32_t __negvsi2();
extern uint32_t __negvdi2();
extern uint32_t __ffsdi2();
extern uint32_t __popcountsi2();
extern uint32_t __popcountdi2();
extern uint32_t __paritysi2();
extern uint32_t __paritydi2();
extern uint32_t __powisf2();
extern uint32_t __powidf2();
extern float _Complex __mulsc3(float __a, float __b, float __c, float __d);
extern double _Complex __muldc3(double __a, double __b, double __c, double __d);
extern float _Complex __divsc3(float __a, float __b, float __c, float __d);
extern double _Complex __divdc3(double __a, double __b, double __c, double __d);
extern uint32_t __bswapsi2();
extern uint32_t __bswapdi2();
extern uint32_t __fixsfdi();
extern uint32_t __fixdfdi();
extern uint32_t __fixunssfdi();
extern uint32_t __fixunsdfdi();
extern uint32_t __divdi3();
extern uint32_t __moddi3();
extern uint32_t __udivdi3();
extern uint32_t __umoddi3();
extern uint32_t __aeabi_f2lz();
extern uint32_t __aeabi_dadd();
extern uint32_t __aeabi_d2lz();
extern uint32_t __aeabi_d2ulz();
extern uint32_t __gnu_f2h_ieee();
extern uint32_t __gnu_h2f_ieee();

#endif /* LIBGCC_H_ */
