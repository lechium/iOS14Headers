/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AUAudioUnitProperty : NSObject <NSSecureCoding> {

	NSString* _key;
	unsigned _v2propID;
	unsigned _scope;
	unsigned _element;

}
+(BOOL)supportsSecureCoding;
+(id)propertyWithKey:(id)arg1 ;
+(id)propertyWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
+(id)propertyWithKey:(id)arg1 v2propID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(id)initWithKey:(id)arg1 v2propID:(unsigned)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
@end

