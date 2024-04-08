
#include "ftl.h"

FemuCtrl n = {
	secsz = 512;
	secs_per_pg=8;
	pgs_per_blk=256;
	blks_per_pl=256;
	pls_per_lun=1;
	luns_per_ch=8;
	nchs=8;
	ssd_size=12288;
	gc_thres_pcent=85;
	gc_thres_pcent_high=95;

	req = NULL;
};

void main()
{
	NvmeRequest *req

	run_femu(&n);

	/* 
	   req = calloc(sizeof(NvmeRequest), 1);
	   req.opcode = NVME_CMD_WRITE;
	   req.slba = 0x0;
	   req.nlb = 0x8; //4K
	   n->req = req;
	 */
}
