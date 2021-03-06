/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@protocol STMenuButtonDelegate;
@interface STMenuButton : UIButton {

	id<STMenuButtonDelegate> _delegate;

}

@property (__weak) id<STMenuButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)setDelegate:(id<STMenuButtonDelegate>)arg1 ;
-(id<STMenuButtonDelegate>)delegate;
@end

