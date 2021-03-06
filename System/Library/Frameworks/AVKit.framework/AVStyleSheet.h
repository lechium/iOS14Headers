/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVKit/AVKit-Structs.h>
@class UIFont, UITraitCollection;

@interface AVStyleSheet : NSObject {

	BOOL _shouldUseCompactFullScreenSize;
	UIFont* _scrubberTimeLabelFont;
	UIFont* _scrubberInfoLabelFont;
	UIFont* _infoLabelFont;
	double _standardPaddingFullScreen;
	double _standardPaddingInline;
	double _standardInteritemPadding;
	double _additionalInlinePaddingForDodgingSafeArea;
	double _volumeSliderInlineWidth;
	double _volumeSliderCompactFullScreenWidth;
	double _volumeSliderRegularFullScreenWidth;
	double _volumeSliderPadding;
	double _minimumProminentPlayButtonDimension;
	double _maximumProminentPlayButtonDimension;
	double _maximumTransportControlsWidth;
	double _maximumMultiRowTransportControlsWidth;
	double _minimumTransportControlsWidth;
	double _minimumSingleButtonTransportControlsWidth;
	double _spacingBetweenScrubInstructionsAndScrubber;
	double _liveBroadcastLabelTopToBackdropTopDistance;
	UITraitCollection* _traitCollection;
	CGSize _defaultItemInlineSize;
	CGSize _defaultItemFullScreenSize;
	CGSize _routePickerButtonInlineSize;
	CGSize _routePickerButtonFullScreenSize;
	CGSize _minimumScrubberSize;
	NSDirectionalEdgeInsets _doubleRowLayoutMargins;
	NSDirectionalEdgeInsets _doubleRowLayoutMarginsWhenShowingScrubInstructions;
	NSDirectionalEdgeInsets _doublerowLayoutMarginsWhenShowingCustomContentInfo;

}

@property (assign,nonatomic) BOOL shouldUseCompactFullScreenSize;                                                       //@synthesize shouldUseCompactFullScreenSize=_shouldUseCompactFullScreenSize - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                                                       //@synthesize traitCollection=_traitCollection - In the implementation block
@property (getter=shouldUseMacStyle,readonly) BOOL shouldUseMacStyle; 
@property (getter=shouldUsePadStyle,readonly) BOOL shouldUsePadStyle; 
@property (nonatomic,readonly) CGSize defaultItemInlineSize;                                                            //@synthesize defaultItemInlineSize=_defaultItemInlineSize - In the implementation block
@property (nonatomic,readonly) CGSize defaultItemFullScreenSize;                                                        //@synthesize defaultItemFullScreenSize=_defaultItemFullScreenSize - In the implementation block
@property (nonatomic,readonly) double standardPaddingFullScreen;                                                        //@synthesize standardPaddingFullScreen=_standardPaddingFullScreen - In the implementation block
@property (nonatomic,readonly) double standardPaddingInline;                                                            //@synthesize standardPaddingInline=_standardPaddingInline - In the implementation block
@property (nonatomic,readonly) double standardInteritemPadding;                                                         //@synthesize standardInteritemPadding=_standardInteritemPadding - In the implementation block
@property (nonatomic,readonly) double additionalInlinePaddingForDodgingSafeArea;                                        //@synthesize additionalInlinePaddingForDodgingSafeArea=_additionalInlinePaddingForDodgingSafeArea - In the implementation block
@property (nonatomic,readonly) CGSize routePickerButtonInlineSize;                                                      //@synthesize routePickerButtonInlineSize=_routePickerButtonInlineSize - In the implementation block
@property (nonatomic,readonly) CGSize routePickerButtonFullScreenSize;                                                  //@synthesize routePickerButtonFullScreenSize=_routePickerButtonFullScreenSize - In the implementation block
@property (nonatomic,readonly) double volumeSliderInlineWidth;                                                          //@synthesize volumeSliderInlineWidth=_volumeSliderInlineWidth - In the implementation block
@property (nonatomic,readonly) double volumeSliderCompactFullScreenWidth;                                               //@synthesize volumeSliderCompactFullScreenWidth=_volumeSliderCompactFullScreenWidth - In the implementation block
@property (nonatomic,readonly) double volumeSliderRegularFullScreenWidth;                                               //@synthesize volumeSliderRegularFullScreenWidth=_volumeSliderRegularFullScreenWidth - In the implementation block
@property (nonatomic,readonly) double volumeSliderPadding;                                                              //@synthesize volumeSliderPadding=_volumeSliderPadding - In the implementation block
@property (nonatomic,readonly) double minimumProminentPlayButtonDimension;                                              //@synthesize minimumProminentPlayButtonDimension=_minimumProminentPlayButtonDimension - In the implementation block
@property (nonatomic,readonly) double maximumProminentPlayButtonDimension;                                              //@synthesize maximumProminentPlayButtonDimension=_maximumProminentPlayButtonDimension - In the implementation block
@property (nonatomic,readonly) double maximumTransportControlsWidth;                                                    //@synthesize maximumTransportControlsWidth=_maximumTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) double maximumMultiRowTransportControlsWidth;                                            //@synthesize maximumMultiRowTransportControlsWidth=_maximumMultiRowTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) double minimumTransportControlsWidth;                                                    //@synthesize minimumTransportControlsWidth=_minimumTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) double minimumSingleButtonTransportControlsWidth;                                        //@synthesize minimumSingleButtonTransportControlsWidth=_minimumSingleButtonTransportControlsWidth - In the implementation block
@property (nonatomic,readonly) CGSize minimumScrubberSize;                                                              //@synthesize minimumScrubberSize=_minimumScrubberSize - In the implementation block
@property (nonatomic,readonly) NSDirectionalEdgeInsets doubleRowLayoutMargins;                                          //@synthesize doubleRowLayoutMargins=_doubleRowLayoutMargins - In the implementation block
@property (nonatomic,readonly) NSDirectionalEdgeInsets doubleRowLayoutMarginsWhenShowingScrubInstructions;              //@synthesize doubleRowLayoutMarginsWhenShowingScrubInstructions=_doubleRowLayoutMarginsWhenShowingScrubInstructions - In the implementation block
@property (nonatomic,readonly) NSDirectionalEdgeInsets doublerowLayoutMarginsWhenShowingCustomContentInfo;              //@synthesize doublerowLayoutMarginsWhenShowingCustomContentInfo=_doublerowLayoutMarginsWhenShowingCustomContentInfo - In the implementation block
@property (nonatomic,readonly) double spacingBetweenScrubInstructionsAndScrubber;                                       //@synthesize spacingBetweenScrubInstructionsAndScrubber=_spacingBetweenScrubInstructionsAndScrubber - In the implementation block
@property (nonatomic,readonly) double liveBroadcastLabelTopToBackdropTopDistance;                                       //@synthesize liveBroadcastLabelTopToBackdropTopDistance=_liveBroadcastLabelTopToBackdropTopDistance - In the implementation block
@property (nonatomic,readonly) UIFont * infoLabelFont;                                                                  //@synthesize infoLabelFont=_infoLabelFont - In the implementation block
@property (nonatomic,readonly) UIFont * scrubberTimeLabelFont;                                                          //@synthesize scrubberTimeLabelFont=_scrubberTimeLabelFont - In the implementation block
@property (nonatomic,readonly) UIFont * scrubberInfoLabelFont;                                                          //@synthesize scrubberInfoLabelFont=_scrubberInfoLabelFont - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(UIFont *)scrubberInfoLabelFont;
-(id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(BOOL)arg2 ;
-(UIEdgeInsets)playbackControlsViewLayoutMarginsForView:(id)arg1 keyboardHeight:(double)arg2 isFullScreen:(BOOL)arg3 ;
-(UIFont *)scrubberTimeLabelFont;
-(UIFont *)infoLabelFont;
-(BOOL)shouldUseMacStyle;
-(BOOL)shouldUsePadStyle;
-(void)_loadFontsIfNeeded;
-(CGSize)defaultItemInlineSize;
-(CGSize)defaultItemFullScreenSize;
-(double)standardPaddingFullScreen;
-(double)standardPaddingInline;
-(double)standardInteritemPadding;
-(double)additionalInlinePaddingForDodgingSafeArea;
-(CGSize)routePickerButtonInlineSize;
-(CGSize)routePickerButtonFullScreenSize;
-(double)volumeSliderInlineWidth;
-(double)volumeSliderCompactFullScreenWidth;
-(double)volumeSliderRegularFullScreenWidth;
-(double)volumeSliderPadding;
-(double)minimumProminentPlayButtonDimension;
-(double)maximumProminentPlayButtonDimension;
-(CGSize)minimumScrubberSize;
-(double)maximumTransportControlsWidth;
-(double)maximumMultiRowTransportControlsWidth;
-(double)minimumTransportControlsWidth;
-(double)minimumSingleButtonTransportControlsWidth;
-(NSDirectionalEdgeInsets)doubleRowLayoutMargins;
-(NSDirectionalEdgeInsets)doubleRowLayoutMarginsWhenShowingScrubInstructions;
-(NSDirectionalEdgeInsets)doublerowLayoutMarginsWhenShowingCustomContentInfo;
-(double)spacingBetweenScrubInstructionsAndScrubber;
-(double)liveBroadcastLabelTopToBackdropTopDistance;
-(BOOL)shouldUseCompactFullScreenSize;
-(void)setShouldUseCompactFullScreenSize:(BOOL)arg1 ;
@end

