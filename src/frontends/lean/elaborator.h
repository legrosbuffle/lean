/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include <utility>
#include "util/list.h"
#include "kernel/environment.h"
#include "kernel/metavar.h"
#include "library/io_state.h"

namespace lean {
expr elaborate(environment const & env, io_state const & ios, expr const & e, name_generator const & ngen,
               substitution const & s = substitution(), list<expr> const & ctx = list<expr>(), pos_info_provider * pp = nullptr);
expr elaborate(environment const & env, io_state const & ios, expr const & e, expr const & expected_type, name_generator const & ngen,
               list<expr> const & ctx = list<expr>(), pos_info_provider * pp = nullptr);
expr elaborate(environment const & env, io_state const & ios, expr const & e, pos_info_provider * pp = nullptr);
std::pair<expr, expr> elaborate(environment const & env, io_state const & ios, name const & n, expr const & t, expr const & v,
                                pos_info_provider * pp = nullptr);
}
