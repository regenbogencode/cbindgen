#ifdef __cplusplus
// These could be added as opaque types I guess.
template <typename T>
struct BuildHasherDefault;

struct DefaultHasher;
#endif


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct HashMap_i32__i32__BuildHasherDefault_DefaultHasher HashMap_i32__i32__BuildHasherDefault_DefaultHasher;

typedef struct Result_Foo Result_Foo;

/**
 * Fast hash map used internally.
 */
typedef HashMap_i32__i32__BuildHasherDefault_DefaultHasher FastHashMap_i32__i32;

typedef FastHashMap_i32__i32 Foo;

typedef Result_Foo Bar;

void root(const Foo *a, const Bar *b);