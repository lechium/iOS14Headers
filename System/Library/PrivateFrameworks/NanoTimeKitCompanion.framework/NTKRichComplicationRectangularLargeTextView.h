/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularLargeHeadlineBaseView.h>

@class NTKColoringLabel;

@interface NTKRichComplicationRectangularLargeTextView : NTKRichComplicationRectangularLargeHeadlineBaseView {

	NTKColoringLabel* _line1Label;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)layoutSubviews;
-(id)init;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
@end

