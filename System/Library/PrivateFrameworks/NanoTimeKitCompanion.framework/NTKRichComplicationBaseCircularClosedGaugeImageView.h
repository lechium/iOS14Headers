/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularClosedGaugeContentView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView : NTKRichComplicationCircularClosedGaugeContentView {

	NTKRichComplicationImageView* _imageView;

}

@property (nonatomic,retain) NTKRichComplicationImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)setImageView:(NTKRichComplicationImageView *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(NTKRichComplicationImageView *)imageView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)innerView;
-(id)gaugeProviderFromTemplate:(id)arg1 ;
@end

