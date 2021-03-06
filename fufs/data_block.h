#ifndef __FUFS_DATA_BLOCK__H__
#define __FUFS_DATA_BLOCK__H__

#include "block.h"
#include "../device_io.h"

bool data_blocks_init(device_handle_t device, int sectors_per_block, block_no_t data_block_start, block_no_t data_block_count, block_no_t* p_start);

bool data_block_alloc(device_handle_t device, int sectors_per_block, block_no_t data_blocks_stack, block_no_t* p_block, block_no_t *p_used_block_count);
bool data_block_free(device_handle_t device, int sectors_per_block, block_no_t data_blocks_stack, block_no_t block, block_no_t *p_used_block_count);


#endif /* __FUFS_DATA_BLOCK__H__ */
s