//
//  ISO8601Serialization.h
//  ISO8601
//
//  Created by Sam Soffes on 7/30/14.
//  Copyright (c) 2014 Sam Soffes. All rights reserved.
//

#if __has_feature(modules)
	@import Foundation;
#else
	#import <Foundation/Foundation.h>
#endif

@interface ISO8601Serialization : NSObject

#pragma mark - Reading

/**
 Create date components from an ISO8601 string.

 @param string An ISO8601 string.

 @return An object containing the date components for a given ISO8601 string.
 */
+ (NSDateComponents * __nullable)dateComponentsForString:(NSString * __nonnull)string;


#pragma mark - Writing

/**
 Create an ISO8601 string from a date.

 @param date Date to use.
 @param calendar The calendar to use for converting the date to date components. If `nil` is specified, the current
 calendar is used.

 @return A string containing the date components as an ISO8601 string.
 */
+ (NSString * __nullable)stringForDate:(NSDate * __nonnull)date usingCalendar:(NSCalendar * __nonnull)calendar;

@end
