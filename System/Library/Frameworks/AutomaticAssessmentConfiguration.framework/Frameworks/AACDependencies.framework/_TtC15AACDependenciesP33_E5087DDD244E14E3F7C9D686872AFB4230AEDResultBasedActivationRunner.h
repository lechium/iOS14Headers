/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Frameworks/AACDependencies.framework/AACDependencies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AEPolicyActivation.h>

@class NSString;

@interface _TtC15AACDependenciesP33_E5087DDD244E14E3F7C9D686872AFB4230AEDResultBasedActivationRunner : _UKNOWN_SUPERCLASS_ <AEPolicyActivation> {

	 activation;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long event; 
-(NSString *)identifier;
-(long long)event;
-(void)prepareForActivationWithScratchpad:(id)arg1 ;
-(id)deactivationForScratchpad:(id)arg1 ;
-(void)activateWithInvalidationHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end
