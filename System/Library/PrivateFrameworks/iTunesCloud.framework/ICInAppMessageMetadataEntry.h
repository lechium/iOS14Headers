/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface ICInAppMessageMetadataEntry : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _metadataValues;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(id)allMetadataValues;
@end
