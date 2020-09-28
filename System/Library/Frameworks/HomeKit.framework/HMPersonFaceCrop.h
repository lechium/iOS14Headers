/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMFaceCrop.h>

@class NSUUID;

@interface HMPersonFaceCrop : HMFaceCrop {

	NSUUID* _personUUID;

}

@property (copy,readonly) NSUUID * personUUID;              //@synthesize personUUID=_personUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(CGRect)arg4 personUUID:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)personUUID;
@end
