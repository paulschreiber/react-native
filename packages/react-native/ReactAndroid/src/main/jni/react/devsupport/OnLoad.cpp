/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "JCxxInspectorPackagerConnection.h"
#include "JCxxInspectorPackagerConnectionWebSocketDelegate.h"

#include <fbjni/fbjni.h>

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return facebook::jni::initialize(vm, [] {
    facebook::react::jsinspector_modern::JCxxInspectorPackagerConnection::
        registerNatives();
    facebook::react::jsinspector_modern::
        JCxxInspectorPackagerConnectionWebSocketDelegate::registerNatives();
  });
}
