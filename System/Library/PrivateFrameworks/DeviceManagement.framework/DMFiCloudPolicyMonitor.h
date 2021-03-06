/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSUUID;

@interface DMFiCloudPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	NSUUID* _identifier;
	long long _iCloudLogoutPolicy;

}

@property (nonatomic,copy,readonly) NSArray * policyTypes;              //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long iCloudLogoutPolicy;              //@synthesize iCloudLogoutPolicy=_iCloudLogoutPolicy - In the implementation block
+(id)new;
+(id)iCloudLogoutPolicyForPoliciesByType:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSArray *)policyTypes;
-(id)init;
-(id)requestiCloudLogoutPolicyWithError:(id*)arg1 ;
-(void)setICloudLogoutPolicy:(long long)arg1 ;
-(void)requestiCloudLogoutPolicyWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)iCloudLogoutPolicy;
@end

