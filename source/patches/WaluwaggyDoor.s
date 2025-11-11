nsub_02144564_ov_64 = 0x02144568
nsub_02144588_ov_64 = 0x0214458c

nsub_0214457c_ov_64:
    ldr     r14, [r5, #8]
    cmp     r14, #0xd
    ldrneb  r1, [r1, r2]
    moveq   r1, #3
    b       0x02144580