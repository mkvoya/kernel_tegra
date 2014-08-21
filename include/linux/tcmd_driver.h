/*
 * Copyright (C) 2009 Motorola, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA
 */

#ifndef __TCMD_H__
#define __TCMD_H__

#define TCMD_IOCTL_BASE 0x0a
#define TCMD_IOCTL_MASK_INT	_IOW(TCMD_IOCTL_BASE, 0x01, int)
#define TCMD_IOCTL_UNMASK_INT	_IOW(TCMD_IOCTL_BASE, 0x02, int)
#define TCMD_IOCTL_READ_INT	_IOWR(TCMD_IOCTL_BASE, 0x03, int)

enum tcmd_gpio_enum {
    TCMD_GPIO_ISL29030_INT = 0,
    TCMD_GPIO_KXTF9_INT,
    TCMD_GPIO_MMC_DETECT,
    TCMD_GPIO_INT_MAX_NUM
};

struct tcmd_driver_platform_data {
  int size;
  int gpio_list[TCMD_GPIO_INT_MAX_NUM+1];
};

#endif /* __TCMD_H__ */
