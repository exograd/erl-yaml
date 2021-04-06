// Copyright (c) 2021 Nicolas Martyanoff <khaelin@gmail.com>.
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
// SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR
// IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

#ifndef YAML_NIF_H
#define YAML_NIF_H

#include <ei.h>
#include <erl_nif.h>

#include <yaml.h>

#define YAML_EXPORT(name_) \
        ERL_NIF_TERM name_(ErlNifEnv *, int, const ERL_NIF_TERM [])

YAML_EXPORT(eyaml_get_version);
YAML_EXPORT(eyaml_get_version_string);

#endif
