/**
 * @file method_factory.cpp
 * @author your name (you@domain.com)
 * @brief DO NOT MODIFY THIS FILE, WHICH IS AUTO GENERATED BY COMPILER
 * @version 0.1
 * @date 2018-11-23
 *
 * @copyright Copyright (c) 2018
 *
 */

#include "hobotxstream/method_factory.h"
#include <string>
#include "include/TestMethod.h"
#include "include/TestInitMethod.h"
#include "method/bbox_filter.h"
#include "OrderTestMethod.h"
#include "threadSafeMethod.h"
#include "passthroughMethod.h"
#include "MultiSourceTestMethod.h"
#include "ScrambleOrderMethod.h"

namespace xstream {
namespace method_factory {
MethodPtr CreateMethod(const std::string &method_name) {
  if ("TestMethod" == method_name) {
    return MethodPtr(new TestMethod());
  } else if ("BBoxFilter" == method_name) {
    return MethodPtr(new BBoxFilter());
  } else if ("OrderTestMethod" == method_name) {
    return MethodPtr(new OrderTestThread());
  } else if ("threadsafeMethod" == method_name) {
    return MethodPtr(new SafeTestThread());
  } else if ("passthroughMethod" == method_name) {
    return MethodPtr(new passthroughMethod());
  } else if ("Scrambler" == method_name) {
    return MethodPtr(new ScrambleOrderMethod());
  } else if ("MultiSourceTest" == method_name) {
    return MethodPtr(new MultiSourceTestMethod());
  } else if ("TestInitMethod" == method_name) {
    return MethodPtr(new TestInitMethod());
  } else {
    return MethodPtr();
  }
}
}  // namespace method_factory
}  // namespace xstream
