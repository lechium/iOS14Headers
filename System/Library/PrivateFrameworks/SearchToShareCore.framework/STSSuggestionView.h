/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:15 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol STSSuggestionViewDelegate;
@class STSSuggestionFooter, UITableView, UIView;

@interface STSSuggestionView : UIView {

	STSSuggestionFooter* _footerView;
	UITableView* _tableView;
	UIView* _overlayView;
	id<STSSuggestionViewDelegate> _delegate;
	CGPoint _footerOffset;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                       //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint footerOffset;                                       //@synthesize footerOffset=_footerOffset - In the implementation block
@property (assign,getter=isShowingFooter,nonatomic) BOOL showingFooter; 
@property (assign,nonatomic,__weak) id<STSSuggestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)_updateContentInsets;
-(UIView *)overlayView;
-(UITableView *)tableView;
-(void)layoutSubviews;
-(id)init;
-(void)setDelegate:(id<STSSuggestionViewDelegate>)arg1 ;
-(id<STSSuggestionViewDelegate>)delegate;
-(CGSize)footerSize;
-(void)_handleLogoTap:(id)arg1 ;
-(void)_updateFooterOrigin;
-(void)setOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFooterOffset:(CGPoint)arg1 ;
-(BOOL)isShowingFooter;
-(void)setShowingFooter:(BOOL)arg1 ;
-(void)updateFooterImage:(id)arg1 ;
-(CGPoint)footerOffset;
@end

