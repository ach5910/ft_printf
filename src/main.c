/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 20:42:09 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/02 15:05:52 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <locale.h>

int main(void)
{
 	int size;
    ft_printf("---Decimal Integer \"d\"---\n");
/*  ft_printf("This is a umber %+d\n, this is another number % d\nthis number has min width of 10 %.10d\nthis number has min width of 10 with + flag %+.10d\n...this is the last number %d\n 10 width left just, 5 per %-10.5d\n 10 width right just, 5 per %10.5d\n10 width, lf, 0 prep, 5per %010.5d\n10 w, rj, 0 prep, 5 per%-010.5d\nEND", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//	ft_printf("This is a number %d, this is another number %d..\nEND", 42, 24);
    size = ft_printf("%d d\n", 0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20d -+20+d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20d <space>20d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20d <space>20d\n", -12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20d +20d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20d +20d\n", -12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%020d 020d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("{% 03d}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{% 05d}", 42);
    ft_printf("\nReturn size: %d\n", size);

    size = ft_printf("%hhd hhd\n", (char)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20hhd -+20+hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hhd <space>20hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hhd <space>20hhd\n", (char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hhd +20hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hhd +20hhd\n", (char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hhd 020hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%hd hd\n", (short)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20hd -+20+hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hd <space>20hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hd <space>20hd\n", (short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hd +20hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hd +20hd\n", (short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hd 020hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%ld ld\n", (long)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20ld -+20+ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20ld <space>20ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20ld <space>20ld\n", (long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20ld +20ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20ld +20ld\n", (long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020ld 020ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%lld lld\n", (long long)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20lld -+20+lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20lld <space>20lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20lld <space>20lld\n", (long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20lld +20lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20lld +20lld\n", (long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020lld 020lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%jd jd\n", (intmax_t)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20jd -+20+jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20jd <space>20jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20jd <space>20jd\n", (intmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20jd +20jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20jd +20jd\n", (intmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020jd 020jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%zd zd\n", (ssize_t)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+20zd -+20+zd\n", (ssize_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20zd <space>20zd\n", (ssize_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20zd <space>20zd\n", (ssize_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20zd +20zd\n", (ssize_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20zd +20zd\n", (ssize_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020zd 020zd\n", (ssize_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+.10d +.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5d -5d\n", 12345678);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.5d .5d\n", 123456789);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.10d .10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+.5d +.5d\n", 123456789);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% .10d  .10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-15.10d  -15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%15.10d  15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    //	ft_printf("%-015.10d  -015.10d\n", 12345);
    size = ft_printf("%015.10d  015.10d\n",  12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+15.10d  -+15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+15.10d  +15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    //	ft_printf("%-+015.10d -+015.10d\n", 12345);
    size = ft_printf("%+015.10d +015.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    //	prinft("%+.00010d +.00010d\n", 12345);

    ft_printf("\n\n\n---Decimal Integer \"i\"---\n");
/*  ft_printf("This is a umber %+i\n, this is another number % i\nthis number has min wiith of 10 %.10i\nthis number has min wiith of 10 with + flag %+.10i\n...this is the last number %i\n 10 wiith left just, 5 per %-10.5i\n 10 wiith right just, 5 per %10.5i\n10 wiith, lf, 0 prep, 5per %010.5i\n10 w, rj, 0 prep, 5 per%-010.5i\nENi", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//  ft_printf("This is a number %i, this is another number %i..\nENi", 42, 24);
    size = ft_printf("%-+20i -+20+i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20i <space>20i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20i <space>20i\n", -12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20i +20i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20i +20i\n", -12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020i 020i\n", 12345);
    ft_printf("Return size: %i\n", size);

    size = ft_printf("%-+20hhi -+20+hhi\n", (char)123);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20hhi <space>20hhi\n", (char)123);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20hhi <space>20hhi\n", (char)-123);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20hhi +20hhi\n", (char)123);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20hhi +20hhi\n", (char)-123);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020hhi 020hhi\n", (char)123);
    ft_printf("Return size: %i\n", size);

    size = ft_printf("%-+20hi -+20+hi\n", (short)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20hi <space>20hi\n", (short)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20hi <space>20hi\n", (short)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20hi +20hi\n", (short)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20hi +20hi\n", (short)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020hi 020hi\n", (short)12345);
    ft_printf("Return size: %i\n", size);

    size = ft_printf("%-+20li -+20+li\n", (long)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20li <space>20li\n", (long)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20li <space>20li\n", (long)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20li +20li\n", (long)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20li +20li\n", (long)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020li 020li\n", (long)12345);
    ft_printf("Return size: %i\n", size);

    size = ft_printf("%-+20lli -+20+lli\n", (long long)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20lli <space>20lli\n", (long long)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20lli <space>20lli\n", (long long)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20lli +20lli\n", (long long)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20lli +20lli\n", (long long)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020lli 020lli\n", (long long)12345);
    ft_printf("Return size: %i\n", size);

    size = ft_printf("%-+20ji -+20+ji\n", (intmax_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20ji <space>20ji\n", (intmax_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20ji <space>20ji\n", (intmax_t)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20ji +20ji\n", (intmax_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20ji +20ji\n", (intmax_t)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020ji 020ji\n", (intmax_t)12345);
    ft_printf("Return size: %i\n", size);

    size = ft_printf("%-+20zi -+20+zi\n", (ssize_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20zi <space>20zi\n", (ssize_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% 20zi <space>20zi\n", (ssize_t)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20zi +20zi\n", (ssize_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+20zi +20zi\n", (ssize_t)-12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%020zi 020zi\n", (ssize_t)12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+.10i +.10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%-5i -5i\n", 12345678);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%.5i .5i\n", 123456789);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%.10i .10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+.5i +.5i\n", 123456789);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("% .10i  .10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%-15.10i  -15.10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%15.10i  15.10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    //  ft_printf("%-015.10i  -015.10i\n", 12345);
    size = ft_printf("%015.10i  015.10i\n",  12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%-+15.10i  -+15.10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    size = ft_printf("%+15.10i  +15.10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    //  ft_printf("%-+015.10i -+015.10i\n", 12345);
    size = ft_printf("%+015.10i +015.10i\n", 12345);
    ft_printf("Return size: %i\n", size);
    //  prinft("%+.00010i +.00010i\n", 12345);

    ft_printf("\n\n\n---Unsigned Int---\n");
    // size = ft_printf("%-+20u -+20+u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20u <space>20u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("%+20u +20u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%u u\n", 0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020u 020u\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-20u -20u\n", 12345);
    ft_printf("Return size: %d\n", size);
    // size = ft_printf("%-020u -020u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%-.020u -.020u\n", 12345);
    ft_printf("Return size: %d\n", size);
    // size = ft_printf("%+.10u +.10u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5u -5u\n", 12345678);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.5u .5u\n", 123456789);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.10u .10u\n", 12345);
    ft_printf("Return size: %d\n", size);
    // size = ft_printf("%+.5u +.5u\n", 123456789);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% .10u  .10u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%-15.10u  -15.10u\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%15.10u  15.10u\n", 12345);
    ft_printf("Return size: %d\n", size);
//  ft_printf("%-015.10d  -015.10d\n", 12345);
    size = ft_printf("%015.10u  015.10u\n",  12345);
    ft_printf("Return size: %d\n", size);
//     size = ft_printf("%-+15.10u  -+15.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
//     size = ft_printf("%+15.10u  +15.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
// //  ft_printf("%-+015.10d -+015.10d\n", 12345);
//     size = ft_printf("%+015.10u +015.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
//  prinft("%+.00010d +.00010d\n", 12345);

    // size = ft_printf("%-+20hhu -+20+hhu\n", (unsigned char)123);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20hhu <space>20hhu\n", (unsigned char)123);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%hhu hhu\n", (unsigned char)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5hhu <space>20hhu\n", (unsigned char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hhu 20hhu\n", (unsigned char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hhu 20hhu\n", (unsigned char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hhu 020hhu\n", (unsigned char)123);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20hu -+20+hu\n", (unsigned short)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20hu <space>20hu\n", (unsigned short)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%hu hu\n", (unsigned short)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5hu 20.5hu\n", (unsigned short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hu 20hu\n", (unsigned short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hu 20hu\n", (unsigned short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hu 020hu\n", (unsigned short)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20lu -+20+lu\n", (unsigned long)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20lu <space>20lu\n", (unsigned long)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%lu lu\n", (unsigned long)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5lu 20.5lu\n", (unsigned long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20lu 20lu\n", (unsigned long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20lu 20lu\n", (unsigned long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020lu 020lu\n", (unsigned long)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20llu -+20+llu\n", (unsigned long long)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20llu <space>20llu\n", (unsigned long long)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%llu llu\n", (unsigned long long)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%2.50llu 20.5llu\n", (unsigned long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20llu 20llu\n", (unsigned long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20llu 20llu\n", (unsigned long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020llu 020llu\n", (unsigned long long)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20ju -+20+ju\n", (uintmax_t)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20ju <space>20ju\n", (uintmax_t)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%ju ju\n", (uintmax_t)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5ju 20.5ju\n", (uintmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20ju 20ju\n", (uintmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20ju 20ju\n", (uintmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020ju 020ju\n", (uintmax_t)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20zu -+20+zu\n", (size_t)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20zu <space>20zu\n", (size_t)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%zu zu\n", (size_t)0);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5zu 20.5zu\n", (size_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20zu 20zu\n", (size_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20zu 20zu\n", (size_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020zu 020zu\n", (size_t)12345);
    ft_printf("Return size: %d\n", size);

	ft_printf("\n\n\n---Hexadecimal--\n");
    size = ft_printf("%#x #x\n", 0);
    ft_printf("Return size: %d\n", size);
	size = ft_printf("%#x #x\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#x #x\n", 128);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#x #x\n", -45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20x #20x\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20x #-20x\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20.10x #20.10x\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20.10x #-20.10x\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#X #X\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#X #X\n", 128);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#X #X\n", -45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20X #20X\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20X #-20X\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20.10X #20.10X\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20.10X #-20.10X\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%010x \n", 542);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("@moulitest: %#.x %#.0x", 0, 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%ll#x", 9223372036854775807);
    ft_printf("\nReturn size: %d\n", size);

	ft_printf("\n\n\n---Octal---\n");
    size = ft_printf("%#o #o\n", 0);
    ft_printf("Return size: %d\n", size);
	size = ft_printf("%#o #o\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#o #o\n", 128);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#o #o\n", -45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20o #20o\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20o #-20o\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20.10o #20.10o\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20.10o #-20.10o\n", 45);
    ft_printf("Return size: %d\n", size);
	size = ft_printf("%#O #O\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#O #O\n", 128);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#O #O\n", -45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20O #20O\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20O #-20O\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#20.10O #20.10O\n", 45);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%#-20.10O #-20.10O\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("@moulitest: %#.o %#.0o", 0, 0);
    ft_printf("\nReturn size: %d\n", size);


    ft_printf("\n\n\n---Binary(Bonus)---\n");
    size = ft_printf("%b b\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20b 20b\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-20b -20b\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%b b\n", 128);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%b b\n", 255);
    ft_printf("Return size: %d\n", size);

	ft_printf("\n\n\n---String---\n");
    size = ft_printf("%s s\n", "");
    ft_printf("Return size: %d\n", size);
	size = ft_printf("%s s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%.10s .10s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%.15s .15s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%20.10s 20.10s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%20.15s 20.15s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-20.10s -20.10s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-20.15s -20.15s\n", "Hello World");
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%s", NULL);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%05.s}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%05s}", "abc");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%4.s", "42");
    ft_printf("\nReturn size: %d\n", size);

	ft_printf("\n\n\n---Character---\n");
    size = ft_printf("%c c\n", 0);
    ft_printf("Return size: %d\n", size);
	size = ft_printf("%c c\n", 'a');
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%10c 10c\n", 'a');
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-10c -10c\n", 'a');
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%20c 20c\n", 'a');
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-20c -20c\n", 'a');
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%c c\n", 49);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%10c 10c\n", 49);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-10c -10c\n", 49);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%20c 20c\n", 49);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-20c -20c\n", 49);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%c c\n", 20);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%10c 10c\n", 20);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-10c -10c\n", 20);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%20c 20c\n", 20);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-20c -20c\n", 20);
	ft_printf("Return size: %d\n", size);

	// size = ft_printf("%c c\n", 0);
	// ft_printf("Return size: %d\n", size);
	// size = ft_printf("%10c 10c\n", 0);
	// ft_printf("Return size: %d\n", size);
	// size = ft_printf("%-10c -10c\n", 0);
	// ft_printf("Return size: %d\n", size);
	// size = ft_printf("%20c 20c\n", 0);
	// ft_printf("Return size: %d\n", size);
	// size = ft_printf("%-20c -20c\n", 0);
	// ft_printf("Return size: %d\n", size);

	size = ft_printf("%c c\n", 10);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%10c 10c\n", 10);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-10c -10c\n", 10);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%20c 20c\n", 10);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%-20c -20c\n", 10);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("{%C}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%05.c}", 0);
    ft_printf("\nReturn size: %d\n", size);

    ft_printf("\n\n\n---Wide Character---\n");
    setlocale(LC_ALL, "");
    wchar_t c = L'Ω';
    wchar_t d = L'a';
    wchar_t f = L'¥';
    wchar_t t = L'▓';

    size = ft_printf("%lc lc\n", c);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-20lc -20lc\n", d);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%lc lc\n", L'◴');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%C C\n", L'Ԙ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%10C 10C\n", L'Ԅ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%5C 5C\n", L'Њ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-10C -10C\n", L'Ѭ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5C -5C\n", L'Ѽ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-20C -20C\n", L'Ӻ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%5C 5C\n", L'ϰ');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-10C -10C\n", L'✌');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%15C 15C\n", L'☫');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5C -5C\n", L'☬');
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-15C -15C\n", f);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%15C 15C\n", t);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("{%S}", NULL);
    ft_printf("\nReturn size: %d\n", size);


    ft_printf("\n\n\n---Wide String---\n");
    wchar_t *wstr = L"Ωa¥";
    wchar_t *wsrc = L"Приве́т नमस्ते שָׁלוֹם";
    wchar_t *wbuf = L"🐨 ☺ mЖuvoϟϿ_ԧ ☠ ✊ ∞";

    size = ft_printf("%ls ls\n", wstr);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%S S\n", wsrc);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%S S\n", wbuf);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%ls ls\n", L"ϟϿनमसpop🐨");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%ls ls\n", L"Hello World");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%10ls 10ls\n", wstr);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-10ls -10ls\n", L"☞☭☶☻♕♧♬");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5ls 20.5ls\n", L"♨");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-20.5ls -20.5ls\n", L"♲♾⚔⚗⚰⛄⛳");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%5.20ls 5.20ls\n", L"∰ _ ≝ ⊈⇟ iiℋ ");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5.20ls -5.20ls\n", L"Å ≖ ℌ ∐ ℕ ₮ ");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-10.20ls -10.20ls\n", L"Å ≖ ℌ ∐ ℕ ₮ ");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-.5ls -.5ls\n", L"∀§§ ↗𝔑↖ 𝒯ⅈ𝓉𝓉ΐξƧ  👅⩐  👉👌");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-35ls -35ls\n", L"↖ ∀§§ ⅋ 𝒯 ⅈ𝓉𝓉ΐξƧ ↗ ⩐👅  👉👌");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("@moulitest: 丽");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("@moulitest: Ԙ");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%20.5ls", L"Ԙ");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%05.S}", L"42 c est cool");
    ft_printf("\nReturn size: %d\n", size); 
    size = ft_printf("{%030S}", L"我是一只猫。");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%4.S", L"我是一只猫。");
    ft_printf("\nReturn size: %d\n", size);

	ft_printf("\n\n\n---Pointer---\n");
	int buf[10] = {150, 255, 12, 16, 21, 42};
	int *tab = buf;
	char *str = "Hello World";
	int a = 10;

	size = ft_printf("%p p\n", tab);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%p p\n", str);
	ft_printf("Return size: %d\n", size);
	size = ft_printf("%p p\n", &a);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("{%s}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%5p}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%-5p}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%.p, %.0p", 0, 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%05p}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%.5p", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%2.9p", 1234);
    ft_printf("\nReturn size: %d\n", size);

    ft_printf("\n\n\n---Percent Sign(edge case)---\n");
    size = ft_printf("%% percent %% percent %%\n");
    ft_printf("Return size: %d\n", size);
    size = ft_printf("{%05.%}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%-05%}");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("%%   %", "test");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%10R}");
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("{%05.Z}", 0);
    ft_printf("\nReturn size: %d\n", size);
    size = ft_printf("@main_ftprintf: %####0000 33..1..#00d\n", 256);
    ft_printf("\nReturn size: %d\n", size);

    // size = ft_printf("%lhh", "2147483647");
    // ft_printf("\nReturn size: %d\n", size);

    // ft_printf("---Color(Bonus)---\n");
    // // size = ft_printf("%T%d%d%d%s T\n",BOLD, RED, BLACK, "BOLD, RED, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%T%d%d%d%s T\n",DIM, BLUE, YELLOW, "DIM, BLUE, YELLOW");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%T%d%d%d%s T\n",UNDERLINE, GREEN, MAGENTA, "UNDERLINE, GREEN, MAGENTA");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%T%d%d%d%s T\n",ITALIC, CYAN, WHITE, "ITALIC, CYAN, WHITE");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%T%d%d%d%s T\n",BLINK, BLACK, GREEN, "BLINK, BLACK, GREEN");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%T%d%d%d%s T\n",REVERSE, WHITE, RED, "REVERSE, WHITE, RED");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%T%d%d%d%s T\n",HIDDEN, YELLOW, BLACK, "HIDDEN, YELLOW, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%20T%d%d%d%s 20T\n",BOLD, RED, BLACK, "BOLD, RED, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%-20T%d%d%d%s -20T\n",BOLD, RED, BLACK, "BOLD, RED, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%-20.10T%d%d%d%s -20.10T\n",BOLD, RED, BLACK, "BOLD, RED, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%20.10T%d%d%d%s 20.10T\n",BOLD, RED, BLACK, "BOLD, RED, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // // size = ft_printf("%.5T%d%d%d%s .5T\n",BOLD, RED, BLACK, "BOLD, RED, BLACK");
    // // ft_printf("Return size: %d\n", size);

    // size = ft_printf(RED" This is red "RESET);
    // ft_printf("\nResturn size: %d\n", size);

	return (0);
}
