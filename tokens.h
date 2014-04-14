enum Token {
  SHL = 257, // The first 256 LLnextgen reserves for chars
  SHR,
  LE,
  EQEQ,
  NE,
  GE,
  ANDAND,
  OROR,
  BINOPEQ,
  DOTDOT,
  DOTDOTDOT,
  MOD_SEP,
  RARROW,
  FAT_ARROW,
  LIT_CHAR,
  LIT_INT,
  LIT_UINT,
  LIT_INT_UNSUFFIXED,
  LIT_FLOAT,
  LIT_FLOAT_UNSUFFIXED,
  LIT_STR,
  LIT_STR_RAW,
  IDENT,
  UNDERSCORE,
  LIFETIME,

  // keywords
  SELF,
  STATIC,
  AS,
  BREAK,
  CRATE,
  ELSE,
  ENUM,
  EXTERN,
  FALSE,
  FN,
  FOR,
  IF,
  IMPL,
  IN,
  LET,
  LOOP,
  MATCH,
  MOD,
  MUT,
  ONCE,
  PRIV,
  PUB,
  REF,
  RETURN,
  STRUCT,
  SUPER,
  TRUE,
  TRAIT,
  TYPE,
  UNSAFE,
  USE,
  WHILE,
  CONTINUE,
  PROC,
  BOX,
  TYPEOF,

  // not in rustc:
  SHEBANG,
  STATIC_LIFETIME
};

void print_token(enum Token token);
