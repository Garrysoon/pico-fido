#ifndef BIP39_H
#define BIP39_H

#include <stdint.h>
#include <stddef.h>

#define BIP39_WORDLIST_SIZE     2048
#define BIP39_MNEMONIC_WORDS_24 24
#define BIP39_ENTROPY_BITS_256  256
#define BIP39_ENTROPY_BYTES     32
#define BIP39_CHECKSUM_BITS     8
#define BIP39_SEED_BYTES        64

extern const char *const bip39_wordlist[BIP39_WORDLIST_SIZE];

int bip39_generate_mnemonic(char *mnemonic, size_t mnemonic_len);
int bip39_mnemonic_to_seed(const char *mnemonic, const char *passphrase,
                           uint8_t seed[BIP39_SEED_BYTES]);
int bip39_validate_wordlist(void);

#endif
