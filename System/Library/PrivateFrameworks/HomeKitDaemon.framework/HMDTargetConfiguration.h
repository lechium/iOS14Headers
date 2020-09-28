/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSNumber, NSString, NSArray;

@interface HMDTargetConfiguration : HMFObject {

	NSUUID* _uuid;
	NSNumber* _identifier;
	NSString* _name;
	long long _category;
	NSArray* _buttonConfiguration;

}

@property (nonatomic,readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSNumber * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSArray * buttonConfiguration;              //@synthesize buttonConfiguration=_buttonConfiguration - In the implementation block
-(NSNumber *)identifier;
-(long long)category;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(NSArray *)buttonConfiguration;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(long long)arg3 buttonConfiguration:(id)arg4 ;
-(id)initWithAccessory:(id)arg1 buttonConfiguration:(id)arg2 ;
-(void)setButtonConfiguration:(NSArray *)arg1 ;
@end
