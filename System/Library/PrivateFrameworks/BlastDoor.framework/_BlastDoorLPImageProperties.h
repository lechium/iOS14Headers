/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _BlastDoorLPPlatformColor;

@interface _BlastDoorLPImageProperties : NSObject <NSCopying> {

	NSString* _accessibilityText;
	long long _type;
	_BlastDoorLPPlatformColor* _overlaidTextColor;

}

@property (nonatomic,copy) NSString * accessibilityText;                                 //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _BlastDoorLPPlatformColor * overlaidTextColor;              //@synthesize overlaidTextColor=_overlaidTextColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accessibilityText;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(_BlastDoorLPPlatformColor *)overlaidTextColor;
-(void)setOverlaidTextColor:(_BlastDoorLPPlatformColor *)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
@end
