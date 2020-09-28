/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {

	BOOL _alreadyRunning;
	NSString* _reason;

}

@property (nonatomic,retain) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithReason:(id)arg1 alreadyRunning:(BOOL)arg2 ;
-(id)_initWithReason:(id)arg1 alreadyRunning:(BOOL)arg2 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)setReason:(NSString *)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)reason;
@end
