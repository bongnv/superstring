#ifndef SUPERSTRING_STRING_CONVERSION_H
#define SUPERSTRING_STRING_CONVERSION_H

#include <string>
#include "nan.h"
#include "optional.h"
#include "text.h"

namespace string_conversion {
  v8::Local<v8::String> string_to_js(const std::u16string &);
  optional<std::u16string> string_from_js(v8::Local<v8::Value>);
};

#endif // SUPERSTRING_STRING_CONVERSION_H