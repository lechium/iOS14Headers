/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTClock.h>

@protocol MTUIWorldClockCellViewDelegate;
@class NSTimeZone, MTUIDigitalClockLabel, UILabel;

@interface MTUIWorldClockCellView : UIView <MTClock> {

	NSTimeZone* _timeZone;
	long long _nowInMinutes;
	BOOL _editing;
	BOOL _started;
	BOOL _shouldStackViews;
	id<MTUIWorldClockCellViewDelegate> _delegate;
	MTUIDigitalClockLabel* _digitalClock;
	UILabel* _nameLabel;
	UILabel* _combinedLabel;

}

@property (assign,nonatomic,__weak) id<MTUIWorldClockCellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL started;                                                  //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) MTUIDigitalClockLabel * digitalClock;                          //@synthesize digitalClock=_digitalClock - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * combinedLabel;                                       //@synthesize combinedLabel=_combinedLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldStackViews;                                           //@synthesize shouldStackViews=_shouldStackViews - In the implementation block
@property (nonatomic,readonly) long long runMode; 
+(double)defaultHeight;
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(BOOL)arg4 ;
+(id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(BOOL)arg4 hoursOnly:(BOOL)arg5 ;
-(void)_configureFonts;
-(void)significantTimeChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)started;
-(void)setShouldStackViews:(BOOL)arg1 ;
-(void)layoutSubviews;
-(long long)runMode;
-(UILabel *)combinedLabel;
-(void)start;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)handleTextSizeChange:(id)arg1 ;
-(void)setDelegate:(id<MTUIWorldClockCellViewDelegate>)arg1 ;
-(UILabel *)nameLabel;
-(MTUIDigitalClockLabel *)digitalClock;
-(double)updateInterval;
-(void)updateTimeContinuously:(long long)arg1 ;
-(void)updateTime;
-(id<MTUIWorldClockCellViewDelegate>)delegate;
-(double)coarseUpdateInterval;
-(void)stop;
-(void)localeChange:(id)arg1 ;
-(BOOL)shouldStackViews;
-(void)updateLabelAdjustFontSize;
-(void)setTimeZone:(id)arg1 ;
@end

