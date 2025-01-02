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

#ifndef MONOLITH_MONOLITH_NATIVE_TRAINING_RUNTIME_PARAMETER_SYNC_SYNC_CLIENT_INTERFACE_H_
#define MONOLITH_MONOLITH_NATIVE_TRAINING_RUNTIME_PARAMETER_SYNC_SYNC_CLIENT_INTERFACE_H_

#include "grpcpp/grpcpp.h"
#include "monolith/native_training/runtime/parameter_sync/parameter_sync.pb.h"

namespace monolith {
namespace parameter_sync {

class SyncClientInterface {
 public:
  virtual grpc::Status Push(const PushRequest&, PushResponse*) const = 0;
};

}  // namespace parameter_sync
}  // namespace monolith

#endif  // MONOLITH_MONOLITH_NATIVE_TRAINING_RUNTIME_PARAMETER_SYNC_SYNC_CLIENT_INTERFACE_H_
