/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationListCoalescingControlsHandler <NSObject>
@property (assign,nonatomic,__weak) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate; 
@required
-(void)resetClearButtonStateAnimated:(BOOL)arg1;
-(BOOL)shouldReceiveTouchAtPointInWindowSpace:(CGPoint)arg1;
-(BOOL)dismissModalFullScreenIfNeeded;
-(id<NCNotificationListCoalescingControlsHandlerDelegate>)handlerDelegate;
-(void)setHandlerDelegate:(id)arg1;

@end

