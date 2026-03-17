
// INVESTIGATE: this addres is set to 0 in 3 situations: JVFIRM upload begins, ACCORE starts, `acJvModuleStop()` is called
#define ACJV_UNK_RESET_NOTICE 0x12416000

// base address where `mc0:ACJVLD` copies `mc0:JVFIRM` into
#define JVFIRM_DESTINATION_ADDR 0x12400000
#define JVFIRM_RANGE 0x1240