enum varType {
  SIGNED=0,
  UNSIGNED,
  // Basic char types
  CHAR,
  SIGNED_CHAR,
  UNSIGNED_CHAR,

  // Short types
  SHORT,
  SIGNED_SHORT,
  UNSIGNED_SHORT,
  SHORT_INT,
  SIGNED_SHORT_INT,
  UNSIGNED_SHORT_INT,

  // Int types
  INT,
  SIGNED_INT,
  UNSIGNED_INT,

  LONG,
  SIGNED_LONG,
  UNSIGNED_LONG,

  LONG_INT,
  SIGNED_LONG_INT,
  UNSIGNED_LONG_INT,

  LONG_LONG,
  SIGNED_LONG_LONG,
  UNSIGNED_LONG_LONG,

  LONG_LONG_INT,
  SIGNED_LONG_LONG_INT,
  UNSIGNED_LONG_LONG_INT,

  // Floating point types
  FLOAT,
  DOUBLE,
  LONG_DOUBLE,

  maxValue
};

char dataTypesName []={"signed","unsigned",\
  "char","signed char","unsigned char",\
  "short","signed short","unsigned short",\
  "short int", " signed short int", "unsigned short int","int", "signed int","unsigned int",\
  "long", " signed long", "unsigned long",\
  "long int","signed long int","unsigned long int",\
  "long long","signed long long","unsigned long long",\
  "long long int","signed long long int","unsigned long long int",\
  "float","double","long double"} 

void printSizeof();