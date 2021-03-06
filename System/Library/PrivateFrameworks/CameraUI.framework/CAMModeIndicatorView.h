/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAMModeDialItem, UIImageView;

@interface CAMModeIndicatorView : UIControl {

	long long _selectedMode;
	CAMModeDialItem* __modeTextView;
	UIImageView* __symbolView;

}

@property (nonatomic,readonly) CAMModeDialItem * _modeTextView;              //@synthesize _modeTextView=__modeTextView - In the implementation block
@property (nonatomic,readonly) UIImageView * _symbolView;                    //@synthesize _symbolView=__symbolView - In the implementation block
@property (assign,nonatomic) long long selectedMode;                         //@synthesize selectedMode=_selectedMode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)selectedMode;
-(void)setSelectedMode:(long long)arg1 ;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)_symbolSize;
-(CAMModeDialItem *)_modeTextView;
-(UIImageView *)_symbolView;
-(void)_updateModeIndicatorAnimated:(BOOL)arg1 ;
@end

