/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface SBExternalSetupDefaults : BSAbstractDefaultDomain

@property (assign,getter=isDeviceSetup,nonatomic) BOOL deviceSetup; 
@property (nonatomic,readonly) NSString * setupState; 
-(void)setSetupState:(NSString *)arg1 ;
-(NSString *)setupState;
-(void)setDeviceSetup:(BOOL)arg1 ;
-(BOOL)isDeviceSetup;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end
