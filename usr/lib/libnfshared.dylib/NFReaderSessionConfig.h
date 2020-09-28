/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NFReaderSessionConfig : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _uiMode;
	unsigned long long _sessionType;
	NSString* _initialScanText;
	NSArray* _vasPasses;

}

@property (nonatomic,readonly) unsigned long long uiMode;                    //@synthesize uiMode=_uiMode - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionType;               //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialScanText;              //@synthesize initialScanText=_initialScanText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * vasPasses;                     //@synthesize vasPasses=_vasPasses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigWithUIMode:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 initialScanText:(id)arg3 vasPass:(id)arg4 ;
+(id)sessionTypeString:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)sessionType;
-(unsigned long long)uiMode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)initialScanText;
-(NSArray *)vasPasses;
@end
