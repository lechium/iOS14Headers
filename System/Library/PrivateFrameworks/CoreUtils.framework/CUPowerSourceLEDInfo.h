/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CUPowerSourceLEDInfo : NSObject <NSSecureCoding> {

	int _LEDColor;
	int _LEDState;

}

@property (assign,nonatomic) int LEDColor;              //@synthesize LEDColor=_LEDColor - In the implementation block
@property (assign,nonatomic) int LEDState;              //@synthesize LEDState=_LEDState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLEDColor:(int)arg1 ;
-(void)setLEDState:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)LEDColor;
-(int)LEDState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

