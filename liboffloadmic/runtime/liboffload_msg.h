/*
    Copyright (c) 2014-2015 Intel Corporation.  All Rights Reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
      * Neither the name of Intel Corporation nor the names of its
        contributors may be used to endorse or promote products derived
        from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
    A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
    HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
    SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
    LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
    DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
    THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// file: liboffload_msg.h
enum {
	__dummy__ = 0,
	msg_c_device_is_not_available,
	msg_c_invalid_device_number,
	msg_c_send_func_ptr,
	msg_c_receive_func_ptr,
	msg_c_malloc,
	msg_c_offload_malloc,
	msg_c_offload1,
	msg_c_unknown_var_type,
	msg_c_invalid_env_var_value,
	msg_c_invalid_env_var_int_value,
	msg_c_invalid_env_report_value,
	msg_c_offload_signaled1,
	msg_c_offload_signaled2,
	msg_c_myowrapper_checkresult,
	msg_c_myotarget_checkresult,
	msg_c_offload_descriptor_offload,
	msg_c_merge_var_descs1,
	msg_c_merge_var_descs2,
	msg_c_mic_parse_env_var_list1,
	msg_c_mic_parse_env_var_list2,
	msg_c_mic_process_exit_ret,
	msg_c_mic_process_exit_sig,
	msg_c_mic_process_exit,
	msg_c_mic_init3,
	msg_c_mic_init4,
	msg_c_mic_init5,
	msg_c_mic_init6,
	msg_c_no_static_var_data,
	msg_c_no_ptr_data,
	msg_c_get_engine_handle,
	msg_c_get_engine_index,
	msg_c_process_create,
	msg_c_process_set_cache_size,
	msg_c_process_get_func_handles,
	msg_c_process_wait_shutdown,
	msg_c_process_proxy_flush,
	msg_c_load_library,
	msg_c_pipeline_create,
	msg_c_pipeline_run_func,
	msg_c_pipeline_start_run_funcs,
	msg_c_buf_create,
	msg_c_buf_create_out_of_mem,
	msg_c_buf_create_from_mem,
	msg_c_buf_destroy,
	msg_c_buf_map,
	msg_c_buf_unmap,
	msg_c_buf_read,
	msg_c_buf_write,
	msg_c_buf_copy,
	msg_c_buf_get_address,
	msg_c_buf_add_ref,
	msg_c_buf_release_ref,
	msg_c_buf_set_state,
	msg_c_event_wait,
	msg_c_zero_or_neg_ptr_len,
	msg_c_zero_or_neg_transfer_size,
	msg_c_bad_ptr_mem_alloc,
	msg_c_bad_ptr_mem_range,
	msg_c_different_src_and_dstn_sizes,
	msg_c_non_contiguous_dope_vector,
	msg_c_omp_invalid_device_num_env,
	msg_c_omp_invalid_device_num,
	msg_c_unknown_binary_type,
	msg_c_multiple_target_exes,
	msg_c_no_target_exe,
	msg_c_report_unknown_timer_node,
	msg_c_report_unknown_trace_node,
	msg_c_incorrect_affinity,
	msg_c_cannot_set_affinity,
	msg_c_report_host,
	msg_c_report_mic,
	msg_c_report_title,
	msg_c_report_seconds,
	msg_c_report_bytes,
	msg_c_report_cpu_time,
	msg_c_report_mic_time,
	msg_c_report_tag,
	msg_c_report_from_file,
	msg_c_report_file,
	msg_c_report_line,
	msg_c_report_cpu_to_mic_data,
	msg_c_report_mic_to_cpu_data,
	msg_c_report_offload,
	msg_c_report_w_tag,
	msg_c_report_state,
	msg_c_report_start,
	msg_c_report_init,
	msg_c_report_logical_card,
	msg_c_report_physical_card,
	msg_c_report_register,
	msg_c_report_init_func,
	msg_c_report_create_buf_host,
	msg_c_report_create_buf_mic,
	msg_c_report_send_pointer_data,
	msg_c_report_sent_pointer_data,
	msg_c_report_gather_copyin_data,
	msg_c_report_copyin_data,
	msg_c_report_state_signal,
	msg_c_report_signal,
	msg_c_report_wait,
	msg_c_report_compute,
	msg_c_report_receive_pointer_data,
	msg_c_report_received_pointer_data,
	msg_c_report_start_target_func,
	msg_c_report_var,
	msg_c_report_scatter_copyin_data,
	msg_c_report_gather_copyout_data,
	msg_c_report_scatter_copyout_data,
	msg_c_report_copyout_data,
	msg_c_report_unregister,
	msg_c_report_destroy,
	msg_c_report_myoinit,
	msg_c_report_myoregister,
	msg_c_report_myofini,
	msg_c_report_mic_myo_shared,
	msg_c_report_mic_myo_fptr,
	msg_c_report_myosharedmalloc,
	msg_c_report_myosharedfree,
	msg_c_report_myosharedalignedmalloc,
	msg_c_report_myosharedalignedfree,
	msg_c_report_myoacquire,
	msg_c_report_myorelease,
	msg_c_report_myosupportsfeature,
	msg_c_report_myosharedarenacreate,
	msg_c_report_myosharedalignedarenamalloc,
	msg_c_report_myosharedalignedarenafree,
	msg_c_report_myoarenaacquire,
	msg_c_report_myoarenarelease,
	msg_c_report_host_total_offload_time,
	msg_c_report_host_initialize,
	msg_c_report_host_target_acquire,
	msg_c_report_host_wait_deps,
	msg_c_report_host_setup_buffers,
	msg_c_report_host_alloc_buffers,
	msg_c_report_host_setup_misc_data,
	msg_c_report_host_alloc_data_buffer,
	msg_c_report_host_send_pointers,
	msg_c_report_host_gather_inputs,
	msg_c_report_host_map_in_data_buffer,
	msg_c_report_host_unmap_in_data_buffer,
	msg_c_report_host_start_compute,
	msg_c_report_host_wait_compute,
	msg_c_report_host_start_buffers_reads,
	msg_c_report_host_scatter_outputs,
	msg_c_report_host_map_out_data_buffer,
	msg_c_report_host_unmap_out_data_buffer,
	msg_c_report_host_wait_buffers_reads,
	msg_c_report_host_destroy_buffers,
	msg_c_report_target_total_time,
	msg_c_report_target_descriptor_setup,
	msg_c_report_target_func_lookup,
	msg_c_report_target_func_time,
	msg_c_report_target_scatter_inputs,
	msg_c_report_target_add_buffer_refs,
	msg_c_report_target_compute,
	msg_c_report_target_gather_outputs,
	msg_c_report_target_release_buffer_refs,
	msg_c_coi_pipeline_max_number,
	msg_c_ranges_dont_match,
	msg_c_destination_is_over,
	msg_c_slice_of_noncont_array,
	msg_c_pointer_array_mismatch,
	msg_c_in_with_preallocated,
	msg_c_report_no_host_exe,
	msg_c_report_path_buff_overflow,
	msg_c_create_pipeline_for_stream,
	msg_c_offload_no_stream,
	msg_c_get_engine_info,
	msg_c_clear_cpu_mask,
	msg_c_set_cpu_mask,
	msg_c_report_state_stream,
	msg_c_report_stream,
	msg_c_unload_library,
	lastMsg = 174,
	firstMsg = 1
};


#if !defined(MESSAGE_TABLE_NAME)
#    define MESSAGE_TABLE_NAME __liboffload_message_table
#endif

static char const * MESSAGE_TABLE_NAME[] = {
	/*   0 __dummy__                                */ "Un-used message",
	/*   1 msg_c_device_is_not_available            */ "offload error: cannot offload to MIC - device is not available",
	/*   2 msg_c_invalid_device_number              */ "offload error: expected a number greater than or equal to -1",
	/*   3 msg_c_send_func_ptr                      */ "offload error: cannot find function name for address %p",
	/*   4 msg_c_receive_func_ptr                   */ "offload error: cannot find address of function %s",
	/*   5 msg_c_malloc                             */ "offload error: memory allocation failed",
	/*   6 msg_c_offload_malloc                     */ "offload error: memory allocation failed (requested=%lld bytes, align %lld)",
	/*   7 msg_c_offload1                           */ "offload error: device %d does not have a pending signal for wait(%p)",
	/*   8 msg_c_unknown_var_type                   */ "offload error: unknown variable type %d",
	/*   9 msg_c_invalid_env_var_value              */ "offload warning: ignoring invalid value specified for %s",
	/*  10 msg_c_invalid_env_var_int_value          */ "offload warning: specify an integer value for %s",
	/*  11 msg_c_invalid_env_report_value           */ "offload warning: ignoring %s setting; use a value in range 1-3",
	/*  12 msg_c_offload_signaled1                  */ "offload error: invalid device number %d specified in _Offload_signaled",
	/*  13 msg_c_offload_signaled2                  */ "offload error: invalid signal %p specified for _Offload_signaled",
	/*  14 msg_c_myowrapper_checkresult             */ "offload error: %s failed with error %d",
	/*  15 msg_c_myotarget_checkresult              */ "offload error: %s failed with error %d",
	/*  16 msg_c_offload_descriptor_offload         */ "offload error: cannot find offload entry %s",
	/*  17 msg_c_merge_var_descs1                   */ "offload error: unexpected number of variable descriptors",
	/*  18 msg_c_merge_var_descs2                   */ "offload error: unexpected variable type",
	/*  19 msg_c_mic_parse_env_var_list1            */ "offload_error: MIC environment variable must begin with an alpabetic character",
	/*  20 msg_c_mic_parse_env_var_list2            */ "offload_error: MIC environment variable value must be specified with '='",
	/*  21 msg_c_mic_process_exit_ret               */ "offload error: process on the device %d unexpectedly exited with code %d",
	/*  22 msg_c_mic_process_exit_sig               */ "offload error: process on the device %d was terminated by signal %d (%s)",
	/*  23 msg_c_mic_process_exit                   */ "offload error: process on the device %d was unexpectedly terminated",
	/*  24 msg_c_mic_init3                          */ "offload warning: ignoring MIC_STACKSIZE setting; use a value >= 16K and a multiple of 4K",
	/*  25 msg_c_mic_init4                          */ "offload error: thread key create failed with error %d",
	/*  26 msg_c_mic_init5                          */ "offload warning: specify OFFLOAD_DEVICES as comma-separated physical device numbers or 'none'",
	/*  27 msg_c_mic_init6                          */ "offload warning: OFFLOAD_DEVICES device number %d does not correspond to a physical device",
	/*  28 msg_c_no_static_var_data                 */ "offload error: cannot find data associated with statically allocated variable %p",
	/*  29 msg_c_no_ptr_data                        */ "offload error: cannot find data associated with pointer variable %p",
	/*  30 msg_c_get_engine_handle                  */ "offload error: cannot get device %d handle (error code %d)",
	/*  31 msg_c_get_engine_index                   */ "offload error: cannot get physical index for logical device %d (error code %d)",
	/*  32 msg_c_process_create                     */ "offload error: cannot start process on the device %d (error code %d)",
	/*  33 msg_c_process_set_cache_size             */ "offload error: cannot reserve buffer on the device %d (error code %d)",
	/*  34 msg_c_process_get_func_handles           */ "offload error: cannot get function handles on the device %d (error code %d)",
	/*  35 msg_c_process_wait_shutdown              */ "offload error: wait for process shutdown failed on device %d (error code %d)",
	/*  36 msg_c_process_proxy_flush                */ "offload error: cannot flush process output on device %d (error code %d)",
	/*  37 msg_c_load_library                       */ "offload error: cannot load library to the device %d (error code %d)",
	/*  38 msg_c_pipeline_create                    */ "offload error: cannot create pipeline on the device %d (error code %d)",
	/*  39 msg_c_pipeline_run_func                  */ "offload error: cannot execute function on the device %d (error code %d)",
	/*  40 msg_c_pipeline_start_run_funcs           */ "offload error: cannot start executing pipeline function on the device %d (error code %d)",
	/*  41 msg_c_buf_create                         */ "offload error: cannot create buffer on device %d (error code %d)",
	/*  42 msg_c_buf_create_out_of_mem              */ "offload error: cannot create buffer on device %d, out of memory",
	/*  43 msg_c_buf_create_from_mem                */ "offload error: cannot create buffer from memory on device %d (error code %d)",
	/*  44 msg_c_buf_destroy                        */ "offload error: buffer destroy failed (error code %d)",
	/*  45 msg_c_buf_map                            */ "offload error: buffer map failed (error code %d)",
	/*  46 msg_c_buf_unmap                          */ "offload error: buffer unmap failed (error code %d)",
	/*  47 msg_c_buf_read                           */ "offload error: buffer read failed (error code %d)",
	/*  48 msg_c_buf_write                          */ "offload error: buffer write failed (error code %d)",
	/*  49 msg_c_buf_copy                           */ "offload error: buffer copy failed (error code %d)",
	/*  50 msg_c_buf_get_address                    */ "offload error: cannot get buffer address on device %d (error code %d)",
	/*  51 msg_c_buf_add_ref                        */ "offload error: cannot reuse buffer memory on device %d (error code %d)",
	/*  52 msg_c_buf_release_ref                    */ "offload error: cannot release buffer memory on device %d (error code %d)",
	/*  53 msg_c_buf_set_state                      */ "offload error: buffer set state failed (error code %d)",
	/*  54 msg_c_event_wait                         */ "offload error: wait for event to become signaled failed (error code %d)",
	/*  55 msg_c_zero_or_neg_ptr_len                */ "offload error: memory allocation of zero or negative length is not supported",
	/*  56 msg_c_zero_or_neg_transfer_size          */ "offload error: data transfer of zero or negative size is not supported",
	/*  57 msg_c_bad_ptr_mem_alloc                  */ "offload error: allocation (base=%p, size=%d) overlaps with existing allocation (base=%p, size=%d)",
	/*  58 msg_c_bad_ptr_mem_range                  */ "offload error: data transfer (base=%p, size=%d) not subset of existing allocation (base=%p, size=%d)",
	/*  59 msg_c_different_src_and_dstn_sizes       */ "offload error: size of the source %d differs from size of the destination %d",
	/*  60 msg_c_non_contiguous_dope_vector         */ "offload error: offload data transfer supports only a single contiguous memory range per variable",
	/*  61 msg_c_omp_invalid_device_num_env         */ "offload warning: ignoring %s setting; use a non-negative integer value",
	/*  62 msg_c_omp_invalid_device_num             */ "offload error: device number should be a non-negative integer value",
	/*  63 msg_c_unknown_binary_type                */ "offload error: unexpected embedded target binary type, expected either an executable or shared library",
	/*  64 msg_c_multiple_target_exes               */ "offload error: more that one target executable found",
	/*  65 msg_c_no_target_exe                      */ "offload error: target executable is not available",
	/*  66 msg_c_report_unknown_timer_node          */ "offload error: unknown timer node",
	/*  67 msg_c_report_unknown_trace_node          */ "offload error: unknown trace node",
	/*  68 msg_c_incorrect_affinity                 */ "offload error: unknow affinity type %s, specify compact, scatter or balanced",
	/*  69 msg_c_cannot_set_affinity                */ "offload_error: unable to set affinity",
	/*  70 msg_c_report_host                        */ "HOST",
	/*  71 msg_c_report_mic                         */ "MIC",
	/*  72 msg_c_report_title                       */ "timer data       (sec)",
	/*  73 msg_c_report_seconds                     */ "(seconds)",
	/*  74 msg_c_report_bytes                       */ "(bytes)",
	/*  75 msg_c_report_cpu_time                    */ "CPU Time",
	/*  76 msg_c_report_mic_time                    */ "MIC Time",
	/*  77 msg_c_report_tag                         */ "Tag",
	/*  78 msg_c_report_from_file                   */ "Offload from file",
	/*  79 msg_c_report_file                        */ "File",
	/*  80 msg_c_report_line                        */ "Line",
	/*  81 msg_c_report_cpu_to_mic_data             */ "CPU->MIC Data",
	/*  82 msg_c_report_mic_to_cpu_data             */ "MIC->CPU Data",
	/*  83 msg_c_report_offload                     */ "Offload",
	/*  84 msg_c_report_w_tag                       */ "Tag %d",
	/*  85 msg_c_report_state                       */ "State",
	/*  86 msg_c_report_start                       */ "Start target",
	/*  87 msg_c_report_init                        */ "Initialize",
	/*  88 msg_c_report_logical_card                */ "logical card",
	/*  89 msg_c_report_physical_card               */ "physical card",
	/*  90 msg_c_report_register                    */ "Register static data tables",
	/*  91 msg_c_report_init_func                   */ "Setup target entry",
	/*  92 msg_c_report_create_buf_host             */ "Create host buffer",
	/*  93 msg_c_report_create_buf_mic              */ "Create target buffer",
	/*  94 msg_c_report_send_pointer_data           */ "Send pointer data",
	/*  95 msg_c_report_sent_pointer_data           */ "Host->target pointer data",
	/*  96 msg_c_report_gather_copyin_data          */ "Gather copyin data",
	/*  97 msg_c_report_copyin_data                 */ "Host->target copyin data",
	/*  98 msg_c_report_state_signal                */ "Signal",
	/*  99 msg_c_report_signal                      */ "signal :",
	/* 100 msg_c_report_wait                        */ "waits  :",
	/* 101 msg_c_report_compute                     */ "Execute task on target",
	/* 102 msg_c_report_receive_pointer_data        */ "Receive pointer data",
	/* 103 msg_c_report_received_pointer_data       */ "Target->host pointer data",
	/* 104 msg_c_report_start_target_func           */ "Start target entry",
	/* 105 msg_c_report_var                         */ "Var",
	/* 106 msg_c_report_scatter_copyin_data         */ "Scatter copyin data",
	/* 107 msg_c_report_gather_copyout_data         */ "Gather copyout data",
	/* 108 msg_c_report_scatter_copyout_data        */ "Scatter copyout data",
	/* 109 msg_c_report_copyout_data                */ "Target->host copyout data",
	/* 110 msg_c_report_unregister                  */ "Unregister data tables",
	/* 111 msg_c_report_destroy                     */ "Destroy",
	/* 112 msg_c_report_myoinit                     */ "Initialize MYO",
	/* 113 msg_c_report_myoregister                 */ "Register MYO tables",
	/* 114 msg_c_report_myofini                     */ "Finalize MYO",
	/* 115 msg_c_report_mic_myo_shared              */ "MIC MYO shared table register",
	/* 116 msg_c_report_mic_myo_fptr                */ "MIC MYO fptr table register",
	/* 117 msg_c_report_myosharedmalloc             */ "MYO shared malloc",
	/* 118 msg_c_report_myosharedfree               */ "MYO shared free",
	/* 119 msg_c_report_myosharedalignedmalloc      */ "MYO shared aligned malloc",
	/* 120 msg_c_report_myosharedalignedfree        */ "MYO shared aligned free",
	/* 121 msg_c_report_myoacquire                  */ "MYO acquire",
	/* 122 msg_c_report_myorelease                  */ "MYO release",
	/* 123 msg_c_report_myosupportsfeature          */ "MYO supports feature",
	/* 124 msg_c_report_myosharedarenacreate        */ "MYO shared arena create",
	/* 125 msg_c_report_myosharedalignedarenamalloc */ "MYO shared aligned arena malloc",
	/* 126 msg_c_report_myosharedalignedarenafree   */ "MYO shared aligned arena free",
	/* 127 msg_c_report_myoarenaacquire             */ "MYO arena acquire",
	/* 128 msg_c_report_myoarenarelease             */ "MYO arena release",
	/* 129 msg_c_report_host_total_offload_time     */ "host: total offload time",
	/* 130 msg_c_report_host_initialize             */ "host: initialize target",
	/* 131 msg_c_report_host_target_acquire         */ "host: acquire target",
	/* 132 msg_c_report_host_wait_deps              */ "host: wait dependencies",
	/* 133 msg_c_report_host_setup_buffers          */ "host: setup buffers",
	/* 134 msg_c_report_host_alloc_buffers          */ "host: allocate buffers",
	/* 135 msg_c_report_host_setup_misc_data        */ "host: setup misc_data",
	/* 136 msg_c_report_host_alloc_data_buffer      */ "host: allocate buffer",
	/* 137 msg_c_report_host_send_pointers          */ "host: send pointers",
	/* 138 msg_c_report_host_gather_inputs          */ "host: gather inputs",
	/* 139 msg_c_report_host_map_in_data_buffer     */ "host: map IN data buffer",
	/* 140 msg_c_report_host_unmap_in_data_buffer   */ "host: unmap IN data buffer",
	/* 141 msg_c_report_host_start_compute          */ "host: initiate compute",
	/* 142 msg_c_report_host_wait_compute           */ "host: wait compute",
	/* 143 msg_c_report_host_start_buffers_reads    */ "host: initiate pointer reads",
	/* 144 msg_c_report_host_scatter_outputs        */ "host: scatter outputs",
	/* 145 msg_c_report_host_map_out_data_buffer    */ "host: map OUT data buffer",
	/* 146 msg_c_report_host_unmap_out_data_buffer  */ "host: unmap OUT data buffer",
	/* 147 msg_c_report_host_wait_buffers_reads     */ "host: wait pointer reads",
	/* 148 msg_c_report_host_destroy_buffers        */ "host: destroy buffers",
	/* 149 msg_c_report_target_total_time           */ "target: total time",
	/* 150 msg_c_report_target_descriptor_setup     */ "target: setup offload descriptor",
	/* 151 msg_c_report_target_func_lookup          */ "target: entry lookup",
	/* 152 msg_c_report_target_func_time            */ "target: entry time",
	/* 153 msg_c_report_target_scatter_inputs       */ "target: scatter inputs",
	/* 154 msg_c_report_target_add_buffer_refs      */ "target: add buffer reference",
	/* 155 msg_c_report_target_compute              */ "target: compute",
	/* 156 msg_c_report_target_gather_outputs       */ "target: gather outputs",
	/* 157 msg_c_report_target_release_buffer_refs  */ "target: remove buffer reference",
	/* 158 msg_c_coi_pipeline_max_number            */ "number of host threads doing offload exceeds maximum of %d",
	/* 159 msg_c_ranges_dont_match                  */ "ranges of source and destination don't match together",
	/* 160 msg_c_destination_is_over                */ "insufficient destination memory to transfer source",
	/* 161 msg_c_slice_of_noncont_array             */ "a non-contiguous slice may be taken of contiguous arrays only",
	/* 162 msg_c_pointer_array_mismatch             */ "number of %s elements is less than described by the source",
	/* 163 msg_c_in_with_preallocated               */ "offload error: preallocated targetptr alloc_if(1) may not be used with an in clause",
	/* 164 msg_c_report_no_host_exe                 */ "offload error: Cannot find host executable",
	/* 165 msg_c_report_path_buff_overflow          */ "offload error: Size of host executable path exceeded 4KB",
	/* 166 msg_c_create_pipeline_for_stream         */ "offload error: number of cpus exceeds maximum of %d",
	/* 167 msg_c_offload_no_stream                  */ "offload error: the stream isn't found on device %d",
	/* 168 msg_c_get_engine_info                    */ "offload error: cannot get device %d info (error code %d)",
	/* 169 msg_c_clear_cpu_mask                     */ "offload error: cannot clear cpu mask (error code %d)",
	/* 170 msg_c_set_cpu_mask                       */ "offload error: cannot set cpu mask (error code %d)",
	/* 171 msg_c_report_state_stream                */ "Stream",
	/* 172 msg_c_report_stream                      */ "stream  :",
	/* 173 msg_c_unload_library                     */ "offload error: cannot unload library from the device %d (error code %d)",
};
