/**************************************************************************//**
* @copyright (C) 2019 Nuvoton Technology Corp. All rights reserved.
*
* SPDX-License-Identifier: Apache-2.0
*
* Change Logs:
* Date            Author       Notes
* 2020-1-16       Wayne        First version
*
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <rtthread.h>

int main(int argc, char **argv)
{
	rt_kprintf("\r\nApp run\r\n");
	while(1)
	{
		rt_thread_mdelay(2000);
	}
    return 0;
}
