/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent {

	NSString* _bundleID;
	NSString* _context;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * context;               //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithBundleID:(id)arg1 context:(id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)setContext:(NSString *)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(id)_initWithBundleID:(id)arg1 context:(id)arg2 ;
@end

