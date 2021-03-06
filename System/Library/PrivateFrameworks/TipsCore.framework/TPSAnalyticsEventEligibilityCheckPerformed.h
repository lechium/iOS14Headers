/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed : TPSAnalyticsEvent {

	NSString* _error;

}

@property (nonatomic,retain) NSString * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithError:(id)arg1 ;
-(NSString *)error;
-(id)mutableAnalyticsEventRepresentation;
-(void)setError:(NSString *)arg1 ;
-(id)_initWithError:(id)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

