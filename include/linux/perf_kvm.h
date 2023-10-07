/* SPDX-License-Identifier: GPL-2.0 */

#ifndef _LINUX_PERF_KVM_H
#define _LINUX_PERF_KVM_H

struct perf_kvm_guest_unwind_info {
	unsigned long ip_pointer;
	unsigned long frame_pointer;
	bool is_64bit;
	unsigned long segment_cs_base;
	unsigned long segment_ss_base;
};

#endif /* _LINUX_PERF_KVM_H */
