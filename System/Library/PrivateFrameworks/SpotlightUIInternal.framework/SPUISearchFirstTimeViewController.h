/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIFirstTimeExperienceViewController.h>

@class UIView;

@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController {

	BOOL _hasBeenDisplayed;
	UIView* _contentView;

}

@property (assign) BOOL hasBeenDisplayed;              //@synthesize hasBeenDisplayed=_hasBeenDisplayed - In the implementation block
@property (retain) UIView * contentView;               //@synthesize contentView=_contentView - In the implementation block
+(long long)viewCount;
+(void)updateViewCountToCount:(long long)arg1 ;
+(void)dismissForever;
+(BOOL)needsDisplay;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(BOOL)hasBeenDisplayed;
-(void)setHasBeenDisplayed:(BOOL)arg1 ;
-(id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(void)updateViewCount;
-(double)idealContentHeight;
@end

