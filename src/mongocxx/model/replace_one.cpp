// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <mongocxx/model/replace_one.hpp>

namespace mongocxx {
MONGOCXX_INLINE_NAMESPACE_BEGIN
namespace model {

replace_one::replace_one(bsoncxx::document::view filter, bsoncxx::document::view replacement)
    : _filter(std::move(filter)), _replacement(std::move(replacement)) {
}

replace_one& replace_one::upsert(bool upsert) {
    _upsert = upsert;

    return *this;
}

const bsoncxx::document::view& replace_one::filter() const {
    return _filter;
}

const bsoncxx::document::view& replace_one::replacement() const {
    return _replacement;
}

const bsoncxx::stdx::optional<bool>& replace_one::upsert() const {
    return _upsert;
}

}  // namespace model
MONGOCXX_INLINE_NAMESPACE_END
}  // namespace mongocxx