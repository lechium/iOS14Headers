/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMLogItem : NSObject <NSSecureCoding, NSCopying> {

	id _internalLogItem;

}

@property (nonatomic,readonly) double timestamp; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithTimestamp:(double)arg1 ;
@end

