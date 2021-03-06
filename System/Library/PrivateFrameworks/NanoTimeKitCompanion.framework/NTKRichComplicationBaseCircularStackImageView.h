/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularStackContentTextView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularStackImageView : NTKRichComplicationCircularStackContentTextView {

	NTKRichComplicationImageView* _line1ImageView;

}

@property (nonatomic,retain) NTKRichComplicationImageView * line1ImageView;              //@synthesize line1ImageView=_line1ImageView - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg1 ;
-(NTKRichComplicationImageView *)line1ImageView;
-(void)setLine1ImageView:(NTKRichComplicationImageView *)arg1 ;
@end

