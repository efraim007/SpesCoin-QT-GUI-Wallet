// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, SpesCoin dev's
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SpesCoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with SpesCoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <vector>
#include <string>
#include <utility>

namespace CryptoNote {

class IReadBatch {
public:
  virtual std::vector<std::string> getRawKeys() const = 0; 
  virtual void submitRawResult(const std::vector<std::string>& values, const std::vector<bool>& resultStates) = 0;
};

} //namespace CryptoNote
