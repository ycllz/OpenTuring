#include "include\cinterface"
typedef	TLnat4	TL_TL_priority_t;
struct	TL_TL_ExceptionInfo {
    TLint4	quitCode;
    TLint4	libraryQuitCode;
    TLstring	errorMsg;
};
typedef	TLnat1	__x431[1];
struct	TL_TL_HandlerArea {
    TLint4	quitCode;
    TLnat4	lineAndFile;
    TLaddressint	fileTable;
    struct TL_TL_HandlerArea	*nextHandler;
    __x431	savedState;
};
typedef	TLnat4	TL_TL_hardwarePriority_t;
typedef	TL_TL_hardwarePriority_t	TL_TL_lockStatus_t;
typedef	TLnat4	TL_TL_lock_t;
struct	TL_TL_link_t {
    struct TL_TL_ProcessDescriptor	*flink;
    struct TL_TL_ProcessDescriptor	*blink;
};
struct	TL_TL_ProcessDescriptor {
    TLnat4	lineAndFile;
    TLaddressint	fileTable;
    TLaddressint	stackLimit;
    TLaddressint	stackPointer;
    struct TL_TL_HandlerArea	*handlerQhead;
    struct TL_TL_HandlerArea	*currentHandler;
    TLaddressint	name;
    struct TL_TL_ExceptionInfo	exception;
    TLnat4	waitParameter;
    struct TL_TL_ProcessDescriptor	*monitorQlink;
    TLnat4	timeOutStatus;
    TLnat4	pid;
    TLaddressint	memoryBase;
    TLnat4	timeoutTime;
    TLnat4	timeoutEpoch;
    struct TL_TL_link_t	timeoutQ;
    TLboolean	timedOut;
    TLboolean	pausing;
    TL_TL_priority_t	dispatchPriority;
    struct TL_TL_ProcessDescriptor	*runQlink;
    TLboolean	ready;
    struct TL_TL_ProcessDescriptor	*tsyncWaiter;
    TLnat4	quantum;
    TLnat4	quantumCntr;
    TLnat4	devmonLevel;
    TLaddressint	otherInfo;
};

extern void TL_TLM_TLMUDUMP ();

extern void TL_TLB_TLBMAL ();

extern void TL_TLB_TLBMFR ();

extern void TL_TLB_TLBNWU ();

extern void TL_TLB_TLBFRU ();

extern void TL_TLI_TLIFS ();

extern void TL_TLI_TLIAON ();

extern void TL_TLI_TLIAOFF ();

extern void TL_TLI_TLIUDUMP ();

extern void TL_TLI_TLIFINI ();

extern void TL_TLE_TLELF ();
typedef	TLint4	TL_Cint;
extern TLboolean	TL_TLECU;
extern struct TL_TL_ProcessDescriptor	*TL_TLKPD;

void TL_TLQUIT ();

extern void TL_TLK_TLKINI ();

extern void TL_TLK_TLKFINI ();

extern void TL_TLK_TLKUXRS ();

extern void TL_TLK_TLKUXRE ();

extern void TL_TLK_TLKUEXIT ();

extern void TL_TLK_TLKUDMPP ();

extern void TL_TLK_TLKPFORK ();

extern TLboolean TL_TLK_TLKFRKED ();

extern void TL_TLK_TLKLKON ();

extern void TL_TLK_TLKLKOFF ();

extern void TL_TLK_TLKSSYNC ();

extern void TL_TLK_TLKSWAKE ();

extern void TL_TLK_TLKSTIMO ();

extern void TL_TLK_TLKCINI ();

extern TLnat4 TL_TLK_TLKPGETP ();

extern void TL_TLK_TLKPSETP ();

extern void TL_TLK_TLKIPINI ();

extern void TL_TLK_TLKIPENT ();

extern void TL_TLK_TLKIPEXT ();

extern TLboolean TL_TLK_TLKDMINI ();

extern void TL_TLK_TLKDMENT ();

extern void TL_TLK_TLKDMEXT ();

extern void TL_TLK_TLKPPAUS ();

extern void TL_TLX_TLXPID ();

extern void TL_TLX_TLXTIM ();

extern void TL_TLX_TLXATF ();

extern void TL_TLX_TLXDT ();

extern void TL_TLX_TLXTM ();

extern void TL_TLX_TLXCL ();

extern void TL_TLX_TLXSC ();

extern void TL_TLX_TLXGE ();

extern void TL_TLX_TLXSYS ();

extern void TL_TLA_TLAVES ();

extern void TL_TLA_TLAVFS ();

extern void TL_TLA_TLAVS8 ();

extern void TL_TLA_TLAVSI ();

extern void TL_TLA_TLAVSN ();
typedef	TLint4	TL_TLA_Real4SignBit;
typedef	TLint4	TL_TLA_Real4ExponentBits;
typedef	TLint4	TL_TLA_Real4MantissaBits;
typedef	TLint4	TL_TLA_Real8SignBit;
typedef	TLint4	TL_TLA_Real8ExponentBits;
typedef	TLint4	TL_TLA_Real8MantissaBits;
typedef	TLnat4	TL_TLA___x434[11];
extern TL_TLA___x434	TL_TLA_TLARS;
extern TLint4	TL_TLA_TLA8HI;
extern TLint4	TL_TLA_TLA8LO;

extern void TL_TLA_TLAV8D ();

extern void TL_TLA_TLAVD8 ();

extern TLint4 TL_TLA_TLA8GX ();

extern TLreal8 TL_TLA_TLA8SX ();

extern TLreal8 TL_TLA_TLA8T ();
TLint4 TL_TLA_TLA8CM (right, left)
TLreal8	right;
TLreal8	left;
{
    TLnat4	hiOrderL;
    TLnat4	loOrderL;
    TLnat4	hiOrderR;
    TLnat4	loOrderR;
    TLnat2	exponentL;
    TLnat4	mantissaL;
    TLnat2	exponentR;
    TLnat4	mantissaR;
    TL_TLA_TLAV8D((TLreal8) left, &(hiOrderL), &(loOrderL));
    TL_TLA_TLAV8D((TLreal8) right, &(hiOrderR), &(loOrderR));
    exponentL = (hiOrderL & 2146435072) >> 20;
    mantissaL = (hiOrderL & 1048575) >> 0;
    exponentR = (hiOrderR & 2146435072) >> 20;
    mantissaR = (hiOrderR & 1048575) >> 0;
    if (((hiOrderL & (TLint4) -0x80000000) >> 31) != ((hiOrderR & (TLint4) -0x80000000) >> 31)) {
	if ((((((exponentL == 0) && (mantissaL == 0)) && (loOrderL == 0)) && (exponentR == 0)) && (mantissaR == 0)) && (loOrderR == 0)) {
	    return (0);
	} else {
	    if (((hiOrderL & (TLint4) -0x80000000) >> 31) != 0) {
		return (-1);
	    } else {
		return (1);
	    };
	};
    } else {
	if (((hiOrderL & (TLint4) -0x80000000) >> 31) != 0) {
	    if (exponentL > exponentR) {
		return (-1);
	    } else {
		if (exponentL < exponentR) {
		    return (1);
		} else {
		    if (mantissaL > mantissaR) {
			return (-1);
		    } else {
			if (mantissaL < mantissaR) {
			    return (1);
			} else {
			    if (loOrderL > loOrderR) {
				return (-1);
			    } else {
				if (loOrderL < loOrderR) {
				    return (1);
				} else {
				    return (0);
				};
			    };
			};
		    };
		};
	    };
	} else {
	    if (exponentL > exponentR) {
		return (1);
	    } else {
		if (exponentL < exponentR) {
		    return (-1);
		} else {
		    if (mantissaL > mantissaR) {
			return (1);
		    } else {
			if (mantissaL < mantissaR) {
			    return (-1);
			} else {
			    if (loOrderL > loOrderR) {
				return (1);
			    } else {
				if (loOrderL < loOrderR) {
				    return (-1);
				} else {
				    return (0);
				};
			    };
			};
		    };
		};
	    };
	};
    };
    /* NOTREACHED */
}