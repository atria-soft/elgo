/** @file
 * @author Edouard DUPIN
 * @copyright 2011, Edouard DUPIN, all right reserved
 * @license APACHE v2.0 (see license file)
 */
#pragma once

#include <etk/types.h>

namespace algue {
	namespace md5 {
		std::vector<uint8_t> encode(const uint8_t* _data, int32_t _len);
		inline std::vector<uint8_t> encode(const std::vector<uint8_t>& _data) {
			return algue::md5::encode(&_data[0], _data.size());
		}
		inline std::vector<uint8_t> encode(const std::string& _data) {
			return algue::md5::encode(reinterpret_cast<const uint8_t*>(&_data[0]), _data.size());
		}
	}
}
