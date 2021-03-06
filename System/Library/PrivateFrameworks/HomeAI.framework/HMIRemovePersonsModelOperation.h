/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@class NSUUID;

@interface HMIRemovePersonsModelOperation : HMFOperation {

	BOOL _external;
	NSUUID* _sourceUUID;
	NSUUID* _homeUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) NSUUID * homeUUID;                //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) BOOL external;                    //@synthesize external=_external - In the implementation block
+(id)logCategory;
-(NSUUID *)homeUUID;
-(BOOL)external;
-(NSUUID *)sourceUUID;
-(id)logIdentifier;
-(void)main;
-(id)initWithSourceUUID:(id)arg1 homeUUID:(id)arg2 external:(BOOL)arg3 ;
-(void)removePersonsModelWithRetryOnError:(BOOL)arg1 ;
@end

