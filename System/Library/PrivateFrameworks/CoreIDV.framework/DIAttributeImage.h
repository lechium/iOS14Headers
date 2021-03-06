/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface DIAttributeImage : DIAttribute <NSSecureCoding> {

	NSData* currentValue;
	NSString* _encoding;
	unsigned long long _format;
	unsigned long long _height;
	unsigned long long _width;

}

@property (nonatomic,copy) NSString * encoding;                                       //@synthesize encoding=_encoding - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSData * currentValue; 
@property (assign,nonatomic) unsigned long long format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFormat:(unsigned long long)arg1 ;
-(unsigned long long)format;
-(id)defaultValue;
-(unsigned long long)width;
-(NSString *)encoding;
-(void)setCurrentValue:(NSData *)arg1 ;
-(unsigned long long)height;
-(id)init;
-(void)setEncoding:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)getCurrentValue;
@end

