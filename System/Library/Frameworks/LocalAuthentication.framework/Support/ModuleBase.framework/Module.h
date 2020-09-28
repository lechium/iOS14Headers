/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MechanismManager;

@interface Module : NSObject {

	MechanismManager* _mechanismManager;
	long long _type;

}

@property (nonatomic,readonly) MechanismManager * mechanismManager;              //@synthesize mechanismManager=_mechanismManager - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
+(id)missingSubclassErrorWithIdentifier:(id)arg1 ;
-(void)untrackPlugin:(id)arg1 ;
-(id)initWithMechanismManager:(id)arg1 type:(long long)arg2 ;
-(long long)type;
-(MechanismManager *)mechanismManager;
-(void)trackPlugin:(id)arg1 processId:(int)arg2 proxy:(id)arg3 context:(id)arg4 invalidationBlock:(/*^block*/id)arg5 ;
-(void)contextPluginWithExternalizedContext:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
