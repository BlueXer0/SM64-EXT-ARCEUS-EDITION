@ requires RemoveInternalActorNames.s to free up space for the table extensions
@ we'll use the first 0x4c8 bytes (0x0208f670 - 0x0208fb38) of the actor names section for level table expansions

@ extend LEVEL_PART_TABLE and change it from s8 to u8
nsub_02013548:
	cmp r0, #52
	ldrlt r1, =0x02075264
	ldrge r1, =0x0208f670 - 52 @ subtraction to avoid changing r0
	ldrb r0, [r1, r0]
	bx r14

@ extend SUBLEVEL_LEVEL_TABLE and change it from s8 to u8
nsub_02013558:
	cmp r0, #52
	ldrlt r1, =0x02075298
	ldrge r1, =0x0208f73c - 52 @ subtraction to avoid changing r0
	ldrb r0, [r1, r0]
	bx r14

@ extend LEVEL_OVL_MAP
repl_0202def4:
repl_0202df24:
	cmp r4, #52
	ldrlt r1, =0x020758c8
	ldrge r1, =0x0208f808 - 208 @ subtraction to avoid changing r4
	bx r14