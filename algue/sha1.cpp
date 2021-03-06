/** @file
 * @author Edouard DUPIN
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license MPL v2.0 (see license file)
 */
#include <etk/types.hpp>
#include <algue/sha1.hpp>
#include <openssl/sha.h>

etk::Vector<uint8_t> algue::sha1::encode(const uint8_t* _data, int32_t _len) {
	etk::Vector<uint8_t> out;
	out.resize(SHA_DIGEST_LENGTH);
	SHA1(_data, _len, &out[0]);
	return out;
}


