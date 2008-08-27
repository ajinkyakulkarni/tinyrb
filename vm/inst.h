#ifndef _INST_H_
#define _INST_H_

/* based on YARV instructions, http://www.atdot.net/yarv/insnstbl.html */
typedef enum {
  /*  0 */ NOP = 0,
  /*  1 */ GETLOCAL,
  /*  2 */ SETLOCAL,
  /*  3 */ GETSPECIAL,
  /*  4 */ SETSPECIAL,
  /*  5 */ GETDYNAMIC,
  /*  6 */ SETDYNAMIC,
  /*  7 */ GETINSTANCEVARIABLE,
  /*  8 */ SETINSTANCEVARIABLE,
  /*  9 */ GETCLASSVARIABLE,
  /* 10 */ SETCLASSVARIABLE,
  /* 11 */ GETCONSTANT,
  /* 12 */ SETCONSTANT,
  /* 13 */ GETGLOBAL,
  /* 14 */ SETGLOBAL,
  /* 15 */ PUTNIL,
  /* 16 */ PUTSELF,
  /* 17 */ PUTUNDEF,
  /* 18 */ PUTOBJECT,
  /* 19 */ PUTSTRING,
  /* 20 */ CONCATSTRINGS,
  /* 21 */ TOSTRING,
  /* 22 */ TOREGEXP,
  /* 23 */ NEWARRAY,
  /* 24 */ DUPARRAY,
  /* 25 */ EXPANDARRAY,
  /* 26 */ CONCATARRAY,
  /* 27 */ SPLATARRAY,
  /* 28 */ CHECKINCLUDEARRAY,
  /* 29 */ NEWHASH,
  /* 30 */ NEWRANGE,
  /* 31 */ PUTNOT,
  /* 32 */ POP,
  /* 33 */ DUP,
  /* 34 */ DUPN,
  /* 35 */ SWAP,
  /* 36 */ REPUT,
  /* 37 */ TOPN,
  /* 38 */ EMPTSTACK,
  /* 39 */ DEFINEMETHOD,
  /* 40 */ ALIAS,
  /* 41 */ UNDEF,
  /* 42 */ DEFINED,
  /* 43 */ POSTEXE,
  /* 44 */ TRACE,
  /* 45 */ DEFINECLASS,
  /* 46 */ SEND,
  /* 47 */ INVOKESUPER,
  /* 48 */ INVOKEBLOCK,
  /* 49 */ LEAVE,
  /* 50 */ FINISH,
  /* 51 */ THROW,
  /* 52 */ JUMP,
  /* 53 */ BRANCHIF,
  /* 54 */ BRANCHUNLESS,
  /* 55 */ SETN,
  
  /* my own lil instructions */
  /* 55 */ LABEL
} tr_inst_e;

#endif /* _INST_H_ */