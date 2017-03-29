/*	$NetBSD: sha1.h,v 1.2 2016/06/14 20:47:08 agc Exp $	*/

/*
 * SHA-1 in C
 * By Steve Reid <steve@edmweb.com>
 * 100% Public Domain
 */

#ifndef _SYS_SHA1_H_
#define	_SYS_SHA1_H_

#include <sys/types.h>

#include <inttypes.h>

#define SHA1_DIGEST_LENGTH		20
#define SHA1_DIGEST_STRING_LENGTH	41

#ifndef __BEGIN_DECLS
#  if defined(__cplusplus)
#  define __BEGIN_DECLS           extern "C" {
#  define __END_DECLS             }
#  else
#  define __BEGIN_DECLS
#  define __END_DECLS
#  endif
#endif

typedef struct {
	uint32_t state[5];
	uint32_t count[2];
	uint8_t buffer[64];
} RNPV_SHA1_CTX;

__BEGIN_DECLS
void	rnpv_SHA1Transform(uint32_t[5], const uint8_t[64]);
void	rnpv_SHA1Init(RNPV_SHA1_CTX *);
void	rnpv_SHA1Update(RNPV_SHA1_CTX *, const uint8_t *, unsigned int);
void	rnpv_SHA1Final(uint8_t[SHA1_DIGEST_LENGTH], RNPV_SHA1_CTX *);
#ifndef _KERNEL
char	*rnpv_SHA1End(RNPV_SHA1_CTX *, char *);
char	*rnpv_SHA1FileChunk(const char *, char *, off_t, off_t);
char	*rnpv_SHA1File(const char *, char *);
char	*rnpv_SHA1Data(const uint8_t *, size_t, char *);
#endif /* _KERNEL */
__END_DECLS

#endif /* _SYS_SHA1_H_ */
