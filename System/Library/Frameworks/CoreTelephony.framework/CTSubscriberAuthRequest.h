/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTSubscriberAlgorithm;

@interface CTSubscriberAuthRequest : NSObject <NSSecureCoding> {

	CTSubscriberAlgorithm* _algorithm;

}

@property (nonatomic,retain) CTSubscriberAlgorithm * algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAlgorithm:(CTSubscriberAlgorithm *)arg1 ;
-(CTSubscriberAlgorithm *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

