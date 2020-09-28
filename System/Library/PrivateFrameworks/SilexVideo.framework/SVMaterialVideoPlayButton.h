/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVVideoPlayButton.h>

@class AVBackgroundView;

@interface SVMaterialVideoPlayButton : SVVideoPlayButton {

	AVBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) AVBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateBackgroundColor;
-(AVBackgroundView *)backgroundView;
-(unsigned long long)accessibilityTraits;
@end
