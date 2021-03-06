/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASCredentialIdentityStoreState : NSObject {

	BOOL _enabled;
	BOOL _supportsIncrementalUpdates;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsIncrementalUpdates;              //@synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates - In the implementation block
-(BOOL)isEnabled;
-(id)description;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 ;
-(BOOL)supportsIncrementalUpdates;
@end

