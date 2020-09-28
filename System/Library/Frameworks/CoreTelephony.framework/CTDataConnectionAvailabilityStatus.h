/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:35:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _available;
	int _csiError;

}

@property (assign,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int csiError;                //@synthesize csiError=_csiError - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)available;
-(void)setAvailable:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCsiError:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)csiError;
@end
