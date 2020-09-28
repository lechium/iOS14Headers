/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDictionary;

@interface AMSSubscriptionEntitlementsResult : NSObject {

	NSNumber* _appAdamId;
	NSNumber* _appVersion;
	NSDictionary* _entitlements;
	NSDictionary* _serverResponse;

}

@property (nonatomic,retain) NSNumber * appAdamId;                       //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,retain) NSNumber * appVersion;                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * entitlements;                //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSDictionary * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
-(void)setAppVersion:(NSNumber *)arg1 ;
-(NSDictionary *)entitlements;
-(NSNumber *)appVersion;
-(void)setEntitlements:(NSDictionary *)arg1 ;
-(id)exportObject;
-(NSNumber *)appAdamId;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(void)setServerResponse:(NSDictionary *)arg1 ;
-(NSDictionary *)serverResponse;
@end
