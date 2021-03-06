/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFCarPlayConnectionTrigger : WFTrigger {

	BOOL _onConnect;
	BOOL _onDisconnect;

}

@property (assign,nonatomic) BOOL onConnect;                 //@synthesize onConnect=_onConnect - In the implementation block
@property (assign,nonatomic) BOOL onDisconnect;              //@synthesize onDisconnect=_onDisconnect - In the implementation block
+(id)onIcon;
+(id)onLabel;
+(id)offLabel;
+(id)triggerTypeIcon;
+(id)offIcon;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)supportsSecureCoding;
+(BOOL)isUserInitiated;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOnConnect:(BOOL)arg1 ;
-(id)init;
-(BOOL)onConnect;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(BOOL)onDisconnect;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setOnDisconnect:(BOOL)arg1 ;
@end

