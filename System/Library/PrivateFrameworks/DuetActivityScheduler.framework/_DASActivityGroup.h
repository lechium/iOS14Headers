/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _DASActivityGroup : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	unsigned long long _maxConcurrent;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrent;              //@synthesize maxConcurrent=_maxConcurrent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)groupWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)maxConcurrent;
-(void)setMaxConcurrent:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 maxConcurrent:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
@end

