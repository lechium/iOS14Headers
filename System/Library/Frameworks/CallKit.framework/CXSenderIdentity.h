/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, CXAccount, NSString, CXHandle;

@interface CXSenderIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	CXAccount* _account;
	NSString* _localizedShortName;

}

@property (nonatomic,readonly) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) CXAccount * account;                             //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) CXHandle * handle; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedShortName;              //@synthesize localizedShortName=_localizedShortName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2 ;
+(id)unarchivedObjectClasses;
-(CXHandle *)handle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedShortName;
-(BOOL)isEqualToSenderIdentity:(id)arg1 ;
-(NSUUID *)UUID;
-(NSString *)localizedName;
-(CXAccount *)account;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)archivedDataWithError:(id*)arg1 ;
-(id)initWithUUID:(id)arg1 account:(id)arg2 ;
-(id)initWithUUID:(id)arg1 handle:(id)arg2 localizedName:(id)arg3 ;
@end
