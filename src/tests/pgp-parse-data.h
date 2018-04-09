/*
 * Copyright (c) 2017, [Ribose Inc](https://www.ribose.com).
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1.  Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *
 * 2.  Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef PGP_PARSE_DATA_H
#define PGP_PARSE_DATA_H

#include <repgp/repgp_def.h>

static const pgp_content_enum tags_keyrings_1_pubring[] = {
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_KEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_USER_ID,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_PREFERRED_SKA,
  PGP_PTAG_SS_PREFERRED_HASH,
  PGP_PTAG_SS_PREF_COMPRESS,
  PGP_PTAG_SS_FEATURES,
  PGP_PTAG_SS_KEYSERV_PREFS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_USER_ID,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_PREFERRED_SKA,
  PGP_PTAG_SS_PREFERRED_HASH,
  PGP_PTAG_SS_PREF_COMPRESS,
  PGP_PTAG_SS_FEATURES,
  PGP_PTAG_SS_KEYSERV_PREFS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_USER_ID,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_PREFERRED_SKA,
  PGP_PTAG_SS_PREFERRED_HASH,
  PGP_PTAG_SS_PREF_COMPRESS,
  PGP_PTAG_SS_FEATURES,
  PGP_PTAG_SS_KEYSERV_PREFS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_SUBKEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_SUBKEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_KEY_EXPIRY,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_SS_EMBEDDED_SIGNATURE,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_SUBKEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_KEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_USER_ID,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_KEY_EXPIRY,
  PGP_PTAG_SS_FEATURES,
  PGP_PTAG_SS_KEYSERV_PREFS,
  PGP_PTAG_SS_PREFERRED_SKA,
  PGP_PTAG_SS_PREFERRED_HASH,
  PGP_PTAG_SS_PREF_COMPRESS,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_PREF_KEYSERV,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_USER_ID,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_KEY_EXPIRY,
  PGP_PTAG_SS_PREFERRED_SKA,
  PGP_PTAG_SS_PREFERRED_HASH,
  PGP_PTAG_SS_PREF_COMPRESS,
  PGP_PTAG_SS_FEATURES,
  PGP_PTAG_SS_KEYSERV_PREFS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_USER_ID,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_KEY_EXPIRY,
  PGP_PTAG_SS_PREFERRED_SKA,
  PGP_PTAG_SS_PREFERRED_HASH,
  PGP_PTAG_SS_PREF_COMPRESS,
  PGP_PTAG_SS_FEATURES,
  PGP_PTAG_SS_KEYSERV_PREFS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_SUBKEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_KEY_EXPIRY,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_PUBLIC_SUBKEY,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_SIGNATURE_HEADER,
  PGP_PTAG_SS_CREATION_TIME,
  PGP_PTAG_SS_KEY_FLAGS,
  PGP_PTAG_SS_ISSUER_KEY_ID,
  PGP_PTAG_CT_SIGNATURE_FOOTER,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_PTAG,
  PGP_PTAG_CT_TRUST,
  PGP_PARSER_PACKET_END,
  PGP_PARSER_DONE
};

#endif
