/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPBeaconUpdates : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	long long _roleId;
	NSString* _emoji;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long roleId;              //@synthesize roleId=_roleId - In the implementation block
@property (nonatomic,copy) NSString * emoji;                //@synthesize emoji=_emoji - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)emoji;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)roleId;
-(id)debugDescription;
-(void)setEmoji:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setRoleId:(long long)arg1 ;
-(id)initWithName:(id)arg1 roleId:(long long)arg2 ;
@end

