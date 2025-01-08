/******************************************************************************
 *
 * Copyright (c) 2020 MaxLinear, Inc.
 * Copyright (c) 2017 - 2019 Intel Corporation
 *
 * For licensing information, see the file 'LICENSE' in the root folder of
 * this software module.
 *
 ******************************************************************************/

/**
 * \file
 *
 * This is a PON Adapter OMCI Managed Entity header file for the
 * IEEE 802.1x Port Extension Package.
 */

#ifndef _pon_adapter_dot1x_port_ext_pkg_h
#define _pon_adapter_dot1x_port_ext_pkg_h

#include "pon_adapter_base.h"

#ifdef __cplusplus
extern "C" {
#endif

/** \addtogroup PON_ADAPTER_ME
 * @{
 */

/** \defgroup PON_ADAPTER_ME_DOT1X_PORT_EXTENSION_PACKAGE\
 *	      Dot1x Port Extension Package
 *
 * This Managed Entity represents a set of attributes that control a port's
 * IEEE 802.1x operation.
 *
 * @{
 */

/** Dot1x Port Extension Package data */
struct pa_dot1x_port_ext_pkg {
	/** Dot1x Enable */
	uint8_t dot1x_enable;
	/** Action Register */
	uint8_t action_register;
	/** Admin Controlled Directions */
	uint8_t adm_ctrled_dirs;
	/** Quiet Period */
	uint16_t quiet_period;
	/** Server Timeout Period */
	uint16_t server_timeout_period;
};

/** Dot1x Port Extension Package operations structure */
struct pa_dot1x_port_ext_pkg_ops {
	/** Update Dot1x Port Extension Package Managed Entity resources
	 *  associated with PPTP ETH.
	 *
	 * \param[in] ll_handle             Lower layer context pointer
	 * \param[in] me_id                 Managed Entity identifier
	 * \param[in] update_data           Update data
	 */
	enum pon_adapter_errno (*update)(
		void *ll_handle,
		const uint16_t me_id,
		const struct pa_dot1x_port_ext_pkg *update_data);
};

/** @} */

/** @} */

#ifdef __cplusplus
}
#endif

#endif
