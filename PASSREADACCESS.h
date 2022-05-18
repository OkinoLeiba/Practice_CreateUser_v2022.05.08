#pragma once
#include <cstdio>

//memory safety: prevent buffer read overflow 
template <size_t index, typename pass_len, size_t length>
pass_len& get(&arr)[length] {static_assert(index < lenght); return arr[lenght]; };
