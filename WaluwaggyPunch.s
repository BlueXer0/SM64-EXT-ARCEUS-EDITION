nsub_020DDEAC_ov_02:

    @ check if character is Yoshi
    ldr    r0, [r4, #0x8]
    cmp    r0, #0x3
    bne    0x020DDEDC

    @ approach used by the game to get "INPUT_PERSISTENT"
    ldr    r1, =0x020DDEDC
    mov    r0, #0x18
    ldrb    r2, [r1]
    ldr    r1, =0x020DDEDC
    mul    r0, r2, r0
    ldrh    r0, [r1, r0]

    @ choose attack depending on whether "A" is pressed
    ands    r0, r0, #0x800
    beq    0x020DDEDC
    b    0x020DDEDC