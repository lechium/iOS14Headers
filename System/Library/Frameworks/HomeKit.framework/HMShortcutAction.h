/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAction.h>

@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction {

	WFHomeWorkflow* _shortcut;

}

@property (readonly) WFHomeWorkflow * shortcut;              //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
+(BOOL)isSupportedForHome:(id)arg1 ;
-(id)initWithShortcut:(id)arg1 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(WFHomeWorkflow *)shortcut;
-(BOOL)isValid;
-(id)_serializeForAdd;
-(BOOL)requiresDeviceUnlock;
@end

