/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REMObjectID, NSString;

@interface REMReplicaIDSource : NSObject <NSSecureCoding, NSCopying> {

	REMObjectID* _accountID;
	NSString* _crdtID;

}

@property (nonatomic,readonly) REMObjectID * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * crdtID;                    //@synthesize crdtID=_crdtID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)crdtIDWithObjectID:(id)arg1 property:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAccountID:(id)arg1 objectID:(id)arg2 property:(id)arg3 ;
-(NSString *)crdtID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)accountID;
-(id)initWithAccountID:(id)arg1 crdtID:(id)arg2 ;
-(id)description;
@end
