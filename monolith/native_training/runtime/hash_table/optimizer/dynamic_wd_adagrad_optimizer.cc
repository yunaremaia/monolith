// Copyright 2022 ByteDance and/or its affiliates.
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


#include "monolith/native_training/runtime/hash_table/optimizer/dynamic_wd_adagrad_optimizer.h"

#include <exception>

#include "absl/strings/str_format.h"

namespace monolith {
namespace hash_table {

std::unique_ptr<OptimizerInterface> NewDynamicWdAdagradOptimizer(
    DynamicWdAdagradOptimizerConfig config) {
  throw std::invalid_argument(absl::StrFormat(
      "optimizer is not implemented yet. %s", config.ShortDebugString()));
}

}  // namespace hash_table
}  // namespace monolith
