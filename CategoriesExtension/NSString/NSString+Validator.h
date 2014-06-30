//
//  NSString+Validator.h
//  PocketGuard
//
//  Created by Петровский Максим on 21.05.14.
//  Copyright (c) 2014 realme. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Validator)

- (BOOL)validEmail;
- (BOOL)validPassword;
@end
