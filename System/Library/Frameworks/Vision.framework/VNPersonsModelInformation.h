/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _version;
	NSDate* _lastModificationDate;

}

@property (nonatomic,readonly) unsigned long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModificationDate;              //@synthesize lastModificationDate=_lastModificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)lastModificationDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2 ;
@end
