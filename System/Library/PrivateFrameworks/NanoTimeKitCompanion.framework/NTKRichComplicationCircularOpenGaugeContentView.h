/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationCurvedProgressView, NTKColoringLabel, UIView;

@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {

	NTKRichComplicationCurvedProgressView* _progressView;
	NTKColoringLabel* _centerLabel;
	UIView* _bottomView;

}

@property (nonatomic,readonly) NTKRichComplicationCurvedProgressView * progressView; 
@property (nonatomic,readonly) NTKColoringLabel * centerLabel; 
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(long long)progressFillStyle;
-(NTKRichComplicationCurvedProgressView *)progressView;
-(void)layoutSubviews;
-(id)bottomView;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)centerLabel;
-(void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3 ;
@end

