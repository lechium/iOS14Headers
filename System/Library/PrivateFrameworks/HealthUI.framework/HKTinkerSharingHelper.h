/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@interface HKTinkerSharingHelper : NSObject {

	CTServerConnectionRef _ctServerConnection;

}

@property (nonatomic,readonly) BOOL isChinaSKUDevice; 
@property (assign,nonatomic) BOOL networkAccessEnabledForHealth; 
-(id)init;
-(BOOL)isChinaSKUDevice;
-(BOOL)networkAccessEnabledForHealth;
-(void)setNetworkAccessEnabledForHealth:(BOOL)arg1 ;
@end

