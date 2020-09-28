/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding> {

	double _timeInterval;

}

@property (assign,nonatomic) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timeInterval;
-(id)initWithTimeInterval:(double)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
