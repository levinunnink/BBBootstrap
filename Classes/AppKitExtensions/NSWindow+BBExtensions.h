//
// Copyright 2013 BiasedBit
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

//  Created by Levi Nunnink on 2/18/13.
//  Copyright (c) 2013 Culturezoo LLC. All rights reserved.
//

typedef void (^NSWindowAnimationCompleteBlock)(void);

@interface NSWindow (BBExtensions)
- (void)fadeIn:(id)sender complete:(NSWindowAnimationCompleteBlock)complete;
- (void)fadeOut:(id)sender complete:(NSWindowAnimationCompleteBlock)complete;
@end