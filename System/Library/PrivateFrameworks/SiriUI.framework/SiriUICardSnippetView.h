/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;
@class UIView, SiriUISashView, SiriUISnippetViewController, UIButton;

@interface SiriUICardSnippetView : UIView {

	UIView* _cardView;
	SiriUISashView* _sashView;
	BOOL _shouldClipTopOfCard;
	SiriUISnippetViewController* _backingViewController;
	id<SiriUICardSnippetViewDataSource> _dataSource;
	id<SiriUICardSnippetViewDelegate> _delegate;

}

@property (assign,getter=isNavigating,nonatomic) BOOL navigating; 
@property (assign,nonatomic) BOOL shouldClipTopOfCard;                                                //@synthesize shouldClipTopOfCard=_shouldClipTopOfCard - In the implementation block
@property (nonatomic,readonly) UIButton * backNavigationButton; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * backingViewController;              //@synthesize backingViewController=_backingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICardSnippetViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
-(void)setDataSource:(id<SiriUICardSnippetViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(id<SiriUICardSnippetViewDataSource>)dataSource;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<SiriUICardSnippetViewDelegate>)arg1 ;
-(id<SiriUICardSnippetViewDelegate>)delegate;
-(BOOL)isNavigating;
-(void)setNavigating:(BOOL)arg1 ;
-(void)setCardView:(id)arg1 ;
-(id)accessibilityIdentifier;
-(void)setBackingViewController:(SiriUISnippetViewController *)arg1 ;
-(UIButton *)backNavigationButton;
-(void)setShouldClipTopOfCard:(BOOL)arg1 ;
-(void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldClipTopOfCard;
-(SiriUISnippetViewController *)backingViewController;
@end

