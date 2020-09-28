/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding> {

	BOOL _enabled;
	NSDecimalNumber* _threshold;

}

@property (nonatomic,retain) NSDecimalNumber * threshold;                //@synthesize threshold=_threshold - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEnabled;
-(NSDecimalNumber *)threshold;
-(id)initWithThreshold:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)description;
-(void)setThreshold:(NSDecimalNumber *)arg1 ;
@end
