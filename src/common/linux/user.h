#ifndef COMMON_LINUX_USER_H_
#define COMMON_LINUX_USER_H_

#ifdef __aarch64__
#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus
struct user_regs_struct {
  __u64 regs[31];
  __u64 sp;
  __u64 pc;
  __u64 pstate;
};
struct user_fpsimd_struct {
  __uint128_t vregs[32];
  __u32 fpsr;
  __u32 fpcr;
};
#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus
#endif  // __aarch64__

#endif  // COMMON_LINUX_USER_H_
