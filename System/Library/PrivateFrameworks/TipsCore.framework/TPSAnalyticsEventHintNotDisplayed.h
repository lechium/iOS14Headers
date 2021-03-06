/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventHintNotDisplayed : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	NSString* _displayType;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contentID;
-(NSString *)displayType;
-(id)mutableAnalyticsEventRepresentation;
-(id)duetEvent;
-(id)eventName;
-(id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)context;
-(id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(id)arg4 reason:(id)arg5 date:(id)arg6 ;
-(id)initWithContentID:(id)arg1 bundleID:(id)arg2 reason:(long long)arg3 context:(id)arg4 date:(id)arg5 ;
-(id)initWithReason:(id)arg1 lastOfferedContentID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 date:(id)arg5 ;
-(id)initWithContentID:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)reason;
-(void)setDataProvider:(id)arg1 ;
-(NSString *)bundleID;
@end

