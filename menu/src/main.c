/*
 * Copyright (c) 2017 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/console/console.h>

void main(void)
{
	console_init();
	

	printk("1 for Advertising\n2 for scanning\n3 for connecting\n4 for begining\n");
	printk("Enter Your Option:");
	
		int c = console_getchar();
		printk("%c\n",c);
		switch(c){
			case '1':
				printk("Advertising");
				break;
			case '2':
				printk("Scanning");
				break;
			case '3':
				printk("Connecting");
				break;
			case '4':
				printk("Begining");
				break;
		}
	
}	