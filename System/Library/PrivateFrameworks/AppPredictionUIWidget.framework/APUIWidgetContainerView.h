/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUIWidget.framework/AppPredictionUIWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol APUISuggestionsWidgetViewDelegate;
@class UIStackView, APUISuggestionView, APUISuggestionsWidgetView, ATXProactiveSuggestion;

@interface APUIWidgetContainerView : UIView {

	UIStackView* _stackView;
	APUISuggestionView* _suggestionView;
	APUISuggestionsWidgetView* _suggestionsWidgetView;
	id<APUISuggestionsWidgetViewDelegate> _delegate;
	unsigned long long _platterSize;
	ATXProactiveSuggestion* _suggestion;

}

@property (nonatomic,readonly) APUISuggestionsWidgetView * suggestionsWidgetView;                //@synthesize suggestionsWidgetView=_suggestionsWidgetView - In the implementation block
@property (assign,nonatomic,__weak) id<APUISuggestionsWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long platterSize;                                     //@synthesize platterSize=_platterSize - In the implementation block
@property (nonatomic,retain) ATXProactiveSuggestion * suggestion;                                //@synthesize suggestion=_suggestion - In the implementation block
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setSuggestion:(ATXProactiveSuggestion *)arg1 ;
-(ATXProactiveSuggestion *)suggestion;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<APUISuggestionsWidgetViewDelegate>)arg1 ;
-(id<APUISuggestionsWidgetViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)platterSize;
-(void)setPlatterSize:(unsigned long long)arg1 ;
-(void)setViewPressed:(BOOL)arg1 ;
-(void)setSuggestionViewLabelsAlpha:(double)arg1 ;
-(void)_createStackViewIfNeeded;
-(void)setSuggestion:(id)arg1 inView:(id)arg2 ;
-(void)_setAppClipSuggestion:(id)arg1 ;
-(void)_setAppSuggestion:(id)arg1 ;
-(void)_setActionSuggestion:(id)arg1 ;
-(void)_displayNoSuggestionsWithSuggestion:(id)arg1 ;
-(void)displaySuggestion:(id)arg1 ;
-(APUISuggestionsWidgetView *)suggestionsWidgetView;
@end
