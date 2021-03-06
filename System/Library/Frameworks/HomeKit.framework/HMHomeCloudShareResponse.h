/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKShareParticipant, HMUser, HMUserCloudShareClientInfo;

@interface HMHomeCloudShareResponse : NSObject {

	CKShareParticipant* _participant;
	HMUser* _ownerUser;
	HMUserCloudShareClientInfo* _clientInfo;

}

@property (readonly) CKShareParticipant * participant;                     //@synthesize participant=_participant - In the implementation block
@property (readonly) HMUser * ownerUser;                                   //@synthesize ownerUser=_ownerUser - In the implementation block
@property (readonly) HMUserCloudShareClientInfo * clientInfo;              //@synthesize clientInfo=_clientInfo - In the implementation block
-(HMUser *)ownerUser;
-(HMUserCloudShareClientInfo *)clientInfo;
-(id)initWithOwnerUser:(id)arg1 pariticipant:(id)arg2 clientInfo:(id)arg3 ;
-(CKShareParticipant *)participant;
@end

