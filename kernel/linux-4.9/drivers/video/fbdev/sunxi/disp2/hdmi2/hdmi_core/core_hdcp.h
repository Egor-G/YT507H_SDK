/*
 * Allwinner SoCs hdmi2.0 driver.
 *
 * Copyright (C) 2016 Allwinner.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#include "hdmi_core.h"
#include "api/core_api.h"

#ifndef CORE_HDCP_H_
#define CORE_HDCP_H_

void core_init_hdcp(struct hdmi_mode *cfg, hdcpParams_t *hdcp);
int get_hdcp_type_core(struct hdmi_tx_core *core);
int get_hdcp_status_core(void);
void hdcp_enable_core(struct hdmi_tx_core *core, u8 enable);
ssize_t hdcp_dump_core(char *buf);
#endif
