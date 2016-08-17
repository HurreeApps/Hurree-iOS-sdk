//
//  ExceptionHandler.h
//
//  Created by Hurree on 15/06/16.
//  Copyright © 2016 Hurree. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ExceptionHandler : NSObject

volatile void exceptionHandler(NSException *exception);
extern NSUncaughtExceptionHandler *exceptionHandlerPtr;

@end
