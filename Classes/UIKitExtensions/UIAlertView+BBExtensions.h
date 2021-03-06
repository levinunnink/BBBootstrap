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
//

//
//  Created by Bruno de Carvalho (@biasedbit, http://biasedbit.com)
//  Copyright (c) 2013 BiasedBit. All rights reserved.
//

#pragma mark -

@interface UIAlertView (BBExtensions) <UIAlertViewDelegate>


///----------------
/// @name Shortcuts
///----------------

+ (void)showAlertWithTitle:(NSString*)title;

/**
 Display a `UIAlertView` with a single button ("Dismiss").
 
 @param message Message text.
 @param title Title text.
 */
+ (void)showAlertWithTitle:(NSString*)message andMessage:(NSString*)message;

+ (instancetype)noticeWithTitle:(NSString*)title message:(NSString*)message buttonTitle:(NSString*)buttonTitle
                     completion:(void (^)())completion;

+ (instancetype)inputWithTitle:(NSString*)title submission:(void (^)(NSString* text))submission;

+ (instancetype)confirmationWithTitle:(NSString*)title confirmation:(void (^)())confirmation;

- (instancetype)initWithTitle:(NSString*)title message:(NSString*)message
            cancelButtonTitle:(NSString*)cancelButtonTitle otherButtonTitles:(NSArray*)otherButtonTitles
                   completion:(void (^)(NSInteger buttonIndex))completion;

- (void)setCompletion:(void (^)(NSInteger buttonIndex))completion;

@end
