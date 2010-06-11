/*
 *  Copyright 2008-2010 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>
#include <thrust/range/algorithm/detail/find_result.h>

namespace thrust
{

namespace experimental
{

namespace range
{


template<typename SinglePassRange, typename EqualityComparable>
  typename detail::find_result<const SinglePassRange>::type
    find(const SinglePassRange &rng,
         const EqualityComparable &value);


template<typename SinglePassRange, typename Predicate>
  typename detail::find_result<const SinglePassRange>::type
    find_if(const SinglePassRange &rng,
            Predicate pred);


} // end range

} // end experimental

} // end thrust

#include <thrust/range/algorithm/detail/find.inl>
