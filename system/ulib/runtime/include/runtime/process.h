// Copyright 2016 The Fuchsia Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <magenta/processargs.h>
#include <system/compiler.h>

__BEGIN_CDECLS

#pragma GCC visibility push(hidden)

// Parse the argument of _start() and setup the global
// proc info structure.  Return a pointer to the same.
mx_proc_info_t* mxr_process_parse_args(void* arg);

// Obtain the global proc info structure.
mx_proc_info_t* mxr_process_get_info(void);

// Obtain a handle from proc args, if such a handle exists.
mx_handle_t mxr_process_get_handle(uint32_t id);

#pragma GCC visibility pop

__END_CDECLS
