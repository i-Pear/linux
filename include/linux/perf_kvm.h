/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_PERF_KVM_H
#define _LINUX_PERF_KVM_H

/*
 * Structures as interface between Perf Event and KVM subsystem.
 * Add more members for new architectures if necessary.
 */

struct perf_kvm_guest_unwind_info {
	unsigned long ip_pointer;
	unsigned long frame_pointer;
	bool is_guest_64bit;
	unsigned long segment_cs_base;
	unsigned long segment_ss_base;
};

#endif /* _LINUX_PERF_KVM_H */
