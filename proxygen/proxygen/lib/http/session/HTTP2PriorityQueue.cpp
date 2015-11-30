/*
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include <proxygen/lib/http/session/HTTP2PriorityQueue.h>


namespace proxygen {

int foo() {
  return 0;
}

folly::ThreadLocalPtr<HTTP2PriorityQueue::NextEgressResult>
  HTTP2PriorityQueue::nextEgressResults_;

}
