;
;	FOCS (Fortran Compile System)
;

;
;	configurations
;

CFG_ENABLE_MULTI_STATE	equ	0
CFG_ENABLE_DEBUG	equ	1

;
;	FOCS definitions
;

OBJECT_START		equ	$c000
OBJECT_END		equ	$e6ff
LNTOP			equ	$e700
ARRAY_TABLE		equ	$edd0
DATA_SIZE		equ	$0010
NSTMAX			equ	$2a

;
;	FOCS data in basic work
;

VARBUF			equ	$ea00
LSTOP			equ	$ec96
BASIC_WORK		equ	$edc8
ARYBUF			equ	$edd0
VAR_TOP			equ	$f216
NAMMAX			equ	$f2ff
WORK_TOP		equ	$ff40
ARYNAM			equ	$ff40
VARNAM			equ	$ff42
ARYPTR			equ	$ff44
VAROBJ			equ	$ff46
VARAD			equ	$ff48
LSCNT			equ	$ff4a
LNCNT			equ	$ff4b
LSPTR			equ	$ff4c
LNPTR			equ	$ff4e
LSPC			equ	$ff50
LNPC			equ	$ff52
LSCC			equ	$ff54
LNCC			equ	$ff55

;
;	basic ROM functions
;

BASIC_WARM_START	equ	$0081
BASIC_PST_RST_2		equ	$06c6
BASIC_POINT		equ	$0753
BASIC_PST_RST_1		equ	$076b
BASIC_CONSOLE		equ	$08f6
BASIC_WIDTH		equ	$0939
BASIC_COLOR		equ	$098e
BASIC_GET_KEY		equ	$0f75
BASIC_CUR_OFF		equ	$0fac
BASIC_LINE_PSET		equ	$147c
BASIC_LINE_PRESET	equ	$1482
BASIC_LINE_INPUT	equ	$1b8a
BASIC_CINT		equ	$277f
BASIC_HL_FAC2		equ	$279c		; HL -> FAC(2)
BASIC_MUL		equ	$28fd
BASIC_DIV_INT		equ	$2950
BASIC_MOD		equ	$29b2
BASIC_ASC2VAL		equ	$2bbe		; convert ascii to value
BASIC_PRT_DEC		equ	$2d13		; print decmal
BASIC_FAC_ASCII		equ	$2d22		; FAC -> ASCII(F0B7)
BASIC_MEM_ERR		equ	$3bb4		; out of memory
BASIC_SYN_ERR		equ	$3bdf
BASIC_ARY_REDEF		equ	$3be8		; array redefinition
BASIC_INT_OVR		equ	$3bf1		; integer overflow?
BASIC_MIS_MATCH		equ	$3bf7		; type miss match?
BASIC_LIN_OVR		equ	$4053		; line buffer overflow
BASIC_BREAK		equ	$432a		; break
BASIC_NOT_CONT		equ	$4388		; can't continue?
BASIC_ISALPHA		equ	$4499		; isalpha
BASIC_ILL_FNC		equ	$44a5		; illegal function call
BASIC_UNDEF_ERR		equ	$459e		; undefined line#
BASIC_PRT_REDO		equ	$48d0		; print "redo from start"
BASIC_OUT_DATA		equ	$4961		; out of data (no END statement)
BASIC_ARY_OVER		equ	$4fbd		; array out of range
BASIC_PRINT		equ	$52ed
BASIC_ARY_OVR		equ	$5324		; out of string space
BASIC_GO_MON 		equ	$5c66		; go to monitor
BASIC_CHK_HEX		equ	$5e39
BASIC_HEX2BIN		equ	$5e4b
BASIC_BIN2HEX		equ	$5e83
BASIC_CMP_HLDE		equ	$5ed3
BASIC_TOUPPER		equ	$5fc1

;
;	basic work area definitions
;

BASIC_TEXT_START	equ	$8021
BASIC_CUR_LINE		equ	$eb52		; basic current execution line
BASIC_CUR_VERT		equ	$ea63
BASIC_CUR_HORZ		equ	$ea64
BASIC_PSET_PARMS	equ	$eb1d
BASIC_FN_PARMS		equ	$edbb
BASIC_FAC		equ	$f0a8
BASIC_FAC_ABUF		equ	$f0b7



