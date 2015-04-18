#ifndef METAPHONE_PECL__H
#define METAPHONE_PECL__H
#include "../source/metaphone_ptbr.h"

// extern zend_module_entry metaphoneptbr_module_entry;
// #define phpext_metaphoneptbr_ptr &metaphoneptbr_module_entry

#define PHP_METAPHONEPTBR_EXTNAME "metaphoneptbr"
#define PHP_METAPHONEPTBR_VERSION "1.0"

PHP_FUNCTION(metaphone_ptbr);

#define META_MALLOC(v, n, t) \
    (v = (t*) emalloc(((n) * sizeof(t))))

#define META_REALLOC(v, n, t) \
    (v = (t*) erealloc((v), ((n) * sizeof(t))))

#define META_FREE(x) efree((x))

#endif /* METAPHONE_PECL__H */
