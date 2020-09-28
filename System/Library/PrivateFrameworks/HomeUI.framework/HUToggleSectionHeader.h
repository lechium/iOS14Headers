/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol HUToggleSectionHeaderDelegate;
@class UIButton;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView {

	unsigned long long _toggleState;
	id<HUToggleSectionHeaderDelegate> _delegate;
	UIButton* _toggleButton;

}

@property (nonatomic,retain) UIButton * toggleButton;                                        //@synthesize toggleButton=_toggleButton - In the implementation block
@property (assign,nonatomic) unsigned long long toggleState;                                 //@synthesize toggleState=_toggleState - In the implementation block
@property (assign,nonatomic,__weak) id<HUToggleSectionHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL toggleButtonHidden; 
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIButton *)toggleButton;
-(void)prepareForReuse;
-(void)setDelegate:(id<HUToggleSectionHeaderDelegate>)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(id<HUToggleSectionHeaderDelegate>)delegate;
-(unsigned long long)toggleState;
-(void)_toggle:(id)arg1 ;
-(void)setToggleState:(unsigned long long)arg1 ;
-(BOOL)toggleButtonHidden;
-(void)setToggleButtonHidden:(BOOL)arg1 ;
@end
