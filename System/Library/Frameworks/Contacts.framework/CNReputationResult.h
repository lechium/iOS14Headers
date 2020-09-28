/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNReputationHandle;

@interface CNReputationResult : NSObject {

	CNReputationHandle* _handle;
	long long _score;

}

@property (copy,readonly) CNReputationHandle * handle;              //@synthesize handle=_handle - In the implementation block
@property (readonly) long long score;                               //@synthesize score=_score - In the implementation block
+(id)descriptionForScore:(long long)arg1 ;
-(CNReputationHandle *)handle;
-(id)initWithHandle:(id)arg1 score:(long long)arg2 ;
-(long long)score;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
