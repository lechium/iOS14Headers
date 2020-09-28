/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSTimeZone, NSDate, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {

	NSTimeZone* _timeZone;
	BOOL _useCompactDateFormat;
	NSDate* _date;
	SBFLockScreenAlternateDateLabel* _alternateDateLabel;
	double _alignmentPercent;

}

@property (nonatomic,retain) SBFLockScreenAlternateDateLabel * alternateDateLabel;              //@synthesize alternateDateLabel=_alternateDateLabel - In the implementation block
@property (assign,nonatomic) double alignmentPercent;                                           //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL useCompactDateFormat;                                         //@synthesize useCompactDateFormat=_useCompactDateFormat - In the implementation block
+(double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
+(id)dateTimeLunarDateFont;
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(SCD_Struct_SB7)dateTimeLunarDateFontMetrics;
-(void)_updateDateLabelForCompact;
-(void)_overlayCalendarDidChange;
-(id)initWithDate:(id)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(BOOL)useCompactDateFormat;
-(void)setDate:(NSDate *)arg1 ;
-(NSDate *)date;
-(void)_setupAlternateDateLabel;
-(void)setUseCompactDateFormat:(BOOL)arg1 ;
-(void)dealloc;
-(CGRect)alternateDateLabelFrame;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setAlignmentPercent:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SBFLockScreenAlternateDateLabel *)alternateDateLabel;
-(double)alignmentPercent;
-(CGRect)subtitleLabelFrame;
-(void)_setDate:(id)arg1 inTimeZone:(id)arg2 ;
-(double)_lunarDateLabelYOffsetFromDateLabel;
-(void)setStrength:(double)arg1 ;
-(void)setAlternateDateLabel:(SBFLockScreenAlternateDateLabel *)arg1 ;
@end
