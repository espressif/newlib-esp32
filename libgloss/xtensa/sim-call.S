
	.type	__sim_call, @function
	.align	4
	.global __sim_call
__sim_call:
	entry	a1, 32
	simcall
	retw
