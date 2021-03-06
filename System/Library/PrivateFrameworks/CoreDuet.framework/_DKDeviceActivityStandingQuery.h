/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKStandingQuery.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery> {

	NSString* queryIdentifier;
	NSObject*<OS_xpc_object> activity;

}

@property (nonatomic,retain) NSString * queryIdentifier; 
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity; 
-(id)fetchResultForDayOfWeek:(long long)arg1 withStorage:(id)arg2 ;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)executeWithStorage:(id)arg1 referenceDate:(id)arg2 ;
-(void)executeWithStorage:(id)arg1 ;
-(id)init;
-(void)setQueryIdentifier:(NSString *)arg1 ;
-(id)fetchResult;
-(id)fetchResultForDayOfWeek:(long long)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(NSString *)queryIdentifier;
-(id)fetchResultFromStorage:(id)arg1 ;
@end

