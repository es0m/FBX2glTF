/**
 * Copyright (c) 2014-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#ifndef __OBJ2RAW_H__
#define __OBJ2RAW_H__

#include "RawModel.h"

bool LoadOBJFile(RawModel &raw, const char *objFileName, const char *textureExtensions);

#endif // !__FBX2RAW_H__
