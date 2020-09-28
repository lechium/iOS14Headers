/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIView, NTKColoringLabel;

@interface NTKRichComplicationCircularStackContentTextView : NTKRichComplicationCircularBaseView {

	UIView* _line1View;
	NTKColoringLabel* _line2Label;

}

@property (nonatomic,readonly) NTKColoringLabel * line2Label; 
-(void)layoutSubviews;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg1 ;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)line2Label;
@end
