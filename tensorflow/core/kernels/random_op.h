/* Copyright 2015 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_KERNELS_RANDOM_OP_H_
#define TENSORFLOW_KERNELS_RANDOM_OP_H_

#include "tensorflow/core/lib/random/philox_random.h"
#include "tensorflow/core/util/guarded_philox_random.h"

namespace tensorflow {

class OpKernelContext;

namespace functor {

template <typename Device, class Distribution>
struct FillPhiloxRandom;

}  // namespace functor

namespace random {

// Reserve enough random samples in the generator for the given output count.
PhiloxRandom ReserveRandomOutputs(GuardedPhiloxRandom* generator,
                                  int64 output_count);
}  // namespace random

}  // namespace tensorflow

#endif  // TENSORFLOW_KERNELS_RANDOM_OP_H_
