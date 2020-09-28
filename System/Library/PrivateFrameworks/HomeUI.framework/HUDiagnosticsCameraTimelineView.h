/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton;

@interface HUDiagnosticsCameraTimelineView : UIView {

	UILabel* _cameraStatusLabel;
	UILabel* _currentPositionLabel;
	UILabel* _currentEventLabel;
	UIButton* _moreButton;
	UILabel* _currentTimelineStateLabel;

}

@property (nonatomic,retain) UILabel * cameraStatusLabel;                      //@synthesize cameraStatusLabel=_cameraStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentPositionLabel;                   //@synthesize currentPositionLabel=_currentPositionLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentEventLabel;                      //@synthesize currentEventLabel=_currentEventLabel - In the implementation block
@property (nonatomic,retain) UILabel * currentTimelineStateLabel;              //@synthesize currentTimelineStateLabel=_currentTimelineStateLabel - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                            //@synthesize moreButton=_moreButton - In the implementation block
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMoreButton:(UIButton *)arg1 ;
-(void)updateWithPlaybackEngine:(id)arg1 ;
-(UILabel *)cameraStatusLabel;
-(UILabel *)currentTimelineStateLabel;
-(UILabel *)currentPositionLabel;
-(UILabel *)currentEventLabel;
-(void)setCameraStatusLabel:(UILabel *)arg1 ;
-(void)setCurrentPositionLabel:(UILabel *)arg1 ;
-(void)setCurrentEventLabel:(UILabel *)arg1 ;
-(void)setCurrentTimelineStateLabel:(UILabel *)arg1 ;
@end
