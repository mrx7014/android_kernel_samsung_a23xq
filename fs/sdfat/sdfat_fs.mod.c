#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xfcfc62c3, "module_layout" },
	{ 0x9121d184, "kobject_put" },
	{ 0x75b8b51e, "blkdev_issue_discard" },
	{ 0x8e305244, "kset_create_and_add" },
	{ 0xd60b755b, "kmem_cache_destroy" },
	{ 0x6cdab585, "fs_bio_set" },
	{ 0xb68fa9, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x778ecc42, "drop_nlink" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x64b1c0e2, "sb_min_blocksize" },
	{ 0x53b954a2, "up_read" },
	{ 0xe5d74901, "unload_nls" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x8a92af37, "bio_alloc_bioset" },
	{ 0x44746f42, "generic_file_llseek" },
	{ 0x438ad996, "__mark_inode_dirty" },
	{ 0x5fe8bfec, "clean_bdev_aliases" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb27c97e2, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x1e1db28c, "seq_puts" },
	{ 0xc7ff45, "touch_buffer" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x51565e8d, "__lock_buffer" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe688fc2, "dput" },
	{ 0xb7d478e4, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x44e9a829, "match_token" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x35fc3936, "inc_nlink" },
	{ 0x2113c974, "d_find_alias" },
	{ 0xc64d53da, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3096be16, "names_cachep" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe7c4d950, "filemap_fdatawait_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x865dc046, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6ccfece2, "kobject_del" },
	{ 0x8da0321, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xacc87de5, "__getblk_gfp" },
	{ 0x53c7aac4, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb4c643fb, "unlock_buffer" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xca4e4de2, "sysfs_remove_group" },
	{ 0x15c03856, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbeba83e6, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x478ac1cc, "end_page_writeback" },
	{ 0x4bf5a2a, "from_kgid_munged" },
	{ 0x405124be, "make_kgid" },
	{ 0xaa33dad0, "__insert_inode_hash" },
	{ 0x8d6209c9, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0xd1ed4e9f, "mpage_readpage" },
	{ 0x7c0ead63, "current_task" },
	{ 0x54ab4ef8, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb7d866bf, "d_rehash" },
	{ 0xa7e82ebb, "sysfs_create_group" },
	{ 0x938847c6, "write_inode_now" },
	{ 0x3b7960d6, "generic_writepages" },
	{ 0x8dac994d, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0x557971ea, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6f732c48, "d_move" },
	{ 0x5a921311, "strncmp" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xfb481954, "vprintk" },
	{ 0x6af521cd, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd21423d0, "set_nlink" },
	{ 0x9926018e, "__wait_on_buffer" },
	{ 0x99518682, "setattr_copy" },
	{ 0xd7b45759, "sync_dirty_buffer" },
	{ 0x343d319f, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xf61a2259, "unlock_page" },
	{ 0x59f9f09f, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x3ff11266, "__brelse" },
	{ 0x7f78c23c, "bio_put" },
	{ 0xc319ce69, "kobject_uevent_env" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xc744a909, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe84ce330, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0xfd74702f, "invalidate_inode_buffers" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xeea9a458, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf2b5f607, "sync_mapping_buffers" },
	{ 0x73be909b, "generic_file_mmap" },
	{ 0xe5ea6078, "__filemap_set_wb_err" },
	{ 0xbf2ff08f, "fs_kobj" },
	{ 0xff5a1585, "block_write_full_page" },
	{ 0x767bc404, "sync_blockdev" },
	{ 0x5e68e1fe, "make_kuid" },
	{ 0xbfc98a34, "generic_cont_expand_simple" },
	{ 0xd1957f1f, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4d6f0a7f, "generic_write_end" },
	{ 0xa4f0e1db, "__breadahead" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x7c47181, "kill_block_super" },
	{ 0xcae928b4, "d_drop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xda1928a7, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x677485d9, "kmem_cache_create" },
	{ 0x5791fcc0, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x604b2cf5, "generic_file_write_iter" },
	{ 0x2ea3e5fe, "__test_set_page_writeback" },
	{ 0x9fd7956f, "I_BDEV" },
	{ 0x964927ce, "blockdev_superblock" },
	{ 0xfb97d05e, "kset_unregister" },
	{ 0x9d626930, "iput" },
	{ 0x6e98a361, "cont_write_begin" },
	{ 0xe59e189a, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0xb817d33f, "iunique" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb7f0313, "current_time" },
	{ 0x53f30e61, "d_splice_alias" },
	{ 0x99f3380, "sync_filesystem" },
	{ 0x8adfe6a2, "write_dirty_buffer" },
	{ 0x2682c5d5, "block_truncate_page" },
	{ 0x76fc9fa3, "sb_set_blocksize" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xfe23e314, "__bforget" },
	{ 0x9963710a, "d_make_root" },
	{ 0x5b7c36a0, "__blockdev_direct_IO" },
	{ 0xbbacee0a, "filemap_fdatawrite_range" },
	{ 0xc5c7f54e, "__find_get_block" },
	{ 0x633b4145, "mark_buffer_dirty" },
	{ 0x5e9c91f9, "unregister_filesystem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe83f7c68, "new_inode" },
	{ 0xa9cba6cd, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5ffc6797, "clear_inode" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x395bebd4, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd25bffb7, "generic_block_bmap" },
	{ 0x666617e8, "clear_nlink" },
	{ 0x4c3764b2, "setattr_prepare" },
	{ 0x271a8e5, "generic_fillattr" },
	{ 0xe00d6b0d, "noop_backing_dev_info" },
	{ 0x78747837, "truncate_inode_pages" },
	{ 0x9dac82a5, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "22EEE8CF8A4812A3016B8AE");
